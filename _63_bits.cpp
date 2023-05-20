//#include <stdint.h>
//#include <iostream>
//
//uint64_t ceil_to_power_of_2(uint64_t x)
//{
//	if (x <= 0) return 1;
//	uint64_t r = x - 1;
//	r |= r >> 1;
//	r |= r >> 2;
//	r |= r >> 4;
//	r |= r >> 8;
//	r |= r >> 16;
//	r |= r >> 32;
//	
//	// assert(r>=x);
//	return r + 1;
//}
//
//int main()
//{
//	std::cout << (-3) / 2 << std::endl;     // -1
//	std::cout << ((-3) >> 1) << std::endl;  // -2
//	std::cout << ceil_to_power_of_2(100) << std::endl;
//	std::cout << ceil_to_power_of_2(-1) << std::endl;
//	std::cout << ceil_to_power_of_2(1156295) << std::endl;
//}
//
//// numeric ranges (2bytes)
//// UMAX = 2^W-1 = FF FF
//// TMIN = -2^(W-1) 7F FF
//// TMIN = 2^(W-1)-1 = 80 00
//// -1 = FF FF    0 = 00 00
//
//// x>=0 => -x<=0 right
//// x<=0 => -x>=0 wrong // because Tmin has no correspoding positive number. this is an important assymetry
//
//// undefined behavior: x<<-1, x<<WORD_BITS
//// for example, x (size: 1 byte) << 8
//// most machine will not expect the shfiting value is larger than the word size
//// so it actuall take the lowest 3 bits for calculation, so x>>8 = x>>(8 mod 8) = x>>0 = x
//// but it is undefined !
//
////		8		16			32				64
////UMAX 255    65535		4294967295    18446744079709551615
////TMAX 127    32767     2147483647     9223372036854775807
//
//// comparison will regard them as signed if you dont set any one of them as unsigned
//// // but this reinterpreting operation may not logically right
//// -1 < 0    // regard as signed
//// -1 > 0U   // because -1 will be evaluated as an unsigned number
//// 2147483647U < -2147483647-1
//// (unsigned)-1 > -2  // 1111 > 1110
//// 2147483647 > (int)2147483648U // signed
//
//// actually expression containing signed and unsigned int will cast int to unsigned
//// and sizeof() and .size() will return unsigned number
//// -INT_MIN = INT_MIN, so pay attention to the abs operation
//
//// Expanding: unsigned: zeros added
////			  signed: sign extension
//// sign extension: make k copies of sign bit
//// Truncating: bits are trucated and reinterpreted, similar to mod
//// (U) 10011 19
//// (U)  0011 3  (19 MOD 16)
//// (T) 10011 -13
//// (T)  0011 3  (-13+2*16 MOD 16  -13+16)
//// (T) 01011 11
//// (T)  1011 -5 (stupid stuff...  11-16, dont mention it..)
//
//// Addition may cause overflow and machine will not record the overflowed bit
//// int s, t, u, v;
//// s = (int)((unsigned)u+(unsigned)v);
//// t = u+v;
//// c always tell you s == t
//
//// when you calc the signed bits, you can just regard them as unsigned,
//// and reinterpret it after calculation
////		1101 (-3 or 13)
////		1110 (-2 or 14)
////	10110110 (182 0xB6)
////      0110 (6   0x06) (truncated / mod 2^w)
//
//// << and >> => * and / 2^k 
//// (logical shifting in unsigned cases (add 0)
////  arithmetic shifting in signed ones (copy the significant bit) (for most machines)
//
//// wrong: unsigned i;
//// for(i=cnt-2; i>=0; i--)
//// proper way:
//// for(i=cnt-2; i<cnt; i--)  // C standard guarantees this overflow
//// better: size_t i;
//
//// define in stdio.h and other standard headers
////#ifndef __SIZE_T
////#define __SIZE_T
////typedef unsigned int size_t; (32-bit sys)
////typedef unsigned long size_t; (64-bit sys)
////#endif
//
//// another trap, if cnt<0, initial i will be a large unsigned number
//// where you should use unsigned: multiprecision arithemetic / logical right shift (no extension)
//
//// 64-bit sys has actually a 47-bit accessible region
////Because that's all that's needed. 48 bits give you an address space of 256 terabyte.That's a lot. You're not going to see a system which needs more than that any time soon.
////So CPU manufacturers took a shortcut.They use an instruction set which allows a full 64 - bit address space, but current CPUs just only use the lower 48 bits.The alternative was wasting transistors on handling a bigger address space which wasn't going to be needed for many years.
////So once we get near the 48 - bit limit, it's just a matter of releasing CPUs that handle the full address space, but it won't require any changes to the instruction set, and it won't break compatibility.
//
//// 32-bit machine limits addresses to 4GB (2^32)
//// 64-bit sys potentially has 18PB (18.4e15) 
//
//// 32-bit sys' addresses are represented by 4 bytes = 32 bits | Addr 0000 | Addr 0004 | Addr 0008 ...
//// 64-bit                                   8         64      |       Addr 0000       | Addr 0008 ...  address of the first bytes of the words
//
//// byte ordering 
//// Big endian: 0x12 34 56 78   // least significant bytes has highest address   // internet
//// Little ~  : 0x78 56 34 12                                                    // almost every machines, x86 ... ARM ...
//
//// 0 <= EXP << 255
//// -127 <= E <= 128
//
//// V = (-1)^S M 2^E
//// E = EXP - BIAS
//
//// 15213F = 11101101101101
////        = 1.1101101101101 * 2^13
//
//// M = 1.1101101101101    // significand Î²Êý
//// FRAC = 11011011011010000000000
//// E = 13
//// BIAS = 127 FOR FLOAT 1023 FOR DOUBLE
//// EXP = 140 = 10001100
//// RES: 0 10001100 11011011011010000000000
//
//// Denormalized values
//// when EXP = 00000
//// E = 1 - BIAS instead of 0 - BIAS
//// so that when frac != 000, these smallest numbers are equispaced along to zero
//// frac == 0, its zeros, including +0 and -0
//
//// EXP = 11111 FRAC = 000000	    INFINITIY (BOTH + AND -)
////             FRAC != 00000        NaN
//// +0 / Denorm / Normalized / +¡Þ / NaN    neg part is symetric
//
//// default rounding: round-to-even
//// closest number, closest even lowest digit number if exactly half way
//// 
//// dec
//// 7.894999 -> 7.89
//// 7.895000 -> 7.90  7.885000 -> 7.88 
//// 7.895001 -> 7.90
//
//// bin
//// 10.00011   10.00    < 1/2 down
//// 10.00110   10.01    > 1/2 up
//// 10.11100   11.00    == 1/2 up to even
//// 10.10100   10.10    == 1/2 down to even
//
//// FP Multiplication
//// s = s1^s2
//// M = M1*M2
//// E = E1+E2
//
//// Fixing: if M>2, right shift M and increment E
//// E overflow if needed
//// Round M to fit FRAC precision
//
//// FP Addition
//// Assume E1>E2
//// s, M: result of signed align (align up with sign) and add
//
//// Fixing: if M<1, left shift k pos and decrement E by k
//
//// MATHEMATICAL PROPERTIES
//// you can compute as if it has perfect precision and then round it
//// different with real arithemetic:
//// violates associativity and distributivity
//// 
//// closed under addition but may generate inf or NaN
//// commutative but not associative (overflow and inexactness of rounding)
//// 0 is additive identity
//// additive inverse except for infinities & NaNs
//// Monotonicity a>b => a+c>=b+c except .........
//
//// Mult
//// same
//// same
//// same
//// 1 is multiplicative identity   Yes
//// cannot distributes over addition
//// same
//
//// double->int
//// truncates fractional part, like rounding toward 0
//// not defined when out of range or NaN, generally sets to Tmin
//// int / float -> double
//// exact conversion, int < 53bits
//// int -> float
//// round according to rounding mode
