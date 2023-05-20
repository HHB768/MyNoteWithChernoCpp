

//int main()
//{
//	int a = 1024;
//	a >>= 16;   // 10 in hex
//	return 0;
//}

//int main()
//{
//00007FF6AF401880  push        rbp  
//00007FF6AF401882  push        rdi  
//00007FF6AF401883  sub         rsp,108h  
//00007FF6AF40188A  lea         rbp,[rsp+20h]  
//00007FF6AF40188F  lea         rcx,[__22041F07__64_disassembly@cpp (07FF6AF411935h)]  
//00007FF6AF401896  call        __CheckForDebuggerJustMyCode (07FF6AF401352h)  
//	int a = 1024;
//00007FF6AF40189B  mov         dword ptr [a],400h
//	a >>= 16;
//00007FF6AF4018A2  mov         eax,dword ptr [a]
//00007FF6AF4018A5  sar         eax,10h
//00007FF6AF4018A8  mov         dword ptr [a],eax  
//	return 0;
//00007FF6AF4018AB  xor         eax,eax  
//}
//00007FF6AF4018AD  lea         rsp,[rbp+0E8h]  
//00007FF6AF4018B4  pop         rdi  
//00007FF6AF4018B5  pop         rbp  
//00007FF6AF4018B6  ret  


// IA32 registers
// E version like %eax, 8 registers
// %esp -- special stack pointer and %ebp -- base pointer -- 16-bit virtual registers (backwards compatibility, not used now)
// x86-64
// 16 registers, R ver (+8 %rN)
// %rsp  -- stack pointer for 64

// moveq source, dest
// operand types:
// 1 immediate: constant integer data: $0x400, $-533 encoded with 1, 2, or 4 bytes
// 2 one of 16 integer registers: %rax, %r13, but %rsp reserved for specail use
// 3 memory: 8 consecutive bytes of memory at address given by registers: (%rax) or other address modes

// valid paths: 1->2, 1->3, 2->2, 2->3, 3->2
// 1-2: temp = 0x4
// 1-3: *ptr = -147
// 2-2 temp2 = temp1
// 2-3: *p = temp
// 3-2: temp = *p
// 
// no direct path for memory-memory transfer, you can use 2 instructions

// memory addressing modes:
// 1 normal: (%rcx) similar to pointer dereferenceing in C
// 2 displacement: 8(%rbp)

void swap(long* xp, long* yp)
{
	long t0 = *xp;
	long t1 = *yp;
	*xp = t1;
	*yp = t0;
}

void swap(long a, long b)
{
	long t0 = a;
	long t1 = b;
	a = t1;
	b = t0;
}
int main()
{
	long a = 0, b = 1;
	swap(&a, &b);
	swap(a, b);
	return 0;
}

//qword全称是Quad Word。2个字节就是1个Word（1个字，16位），q就是英文quad - 这个词根（意思是4）的首字
// 所以它自然是word（2字节，0~2 ^ 16 - 1）的四倍，8字节，0~2 ^ 64 - 1
// dword: double word, 4bytes, 32bits

// movq (%rdi), %rax
// movq (%rsi), %rdx
// movq %rdx, (%rdi)
// movq %rax, (%rsi)


//00007FF6EFAD3AED  mov         dword ptr[a], 0
//00007FF6EFAD3AF4  mov         dword ptr[b], 1
//swap(&a, &b);
//00007FF6EFAD3AFB  lea         rdx, [b]
//00007FF6EFAD3AFF  lea         rcx, [a]
//00007FF6EFAD3B03  call        swap(07FF6EFAD13B6h)

//long t0 = *xp;
//00007FF6591B1CC4  mov         rax, qword ptr[xp]
//00007FF6591B1CCB  mov         eax, dword ptr[rax]
//00007FF6591B1CCD  mov         dword ptr[t0], eax
//long t1 = *yp;
//00007FF6591B1CD0  mov         rax, qword ptr[yp]
//00007FF6591B1CD7  mov         eax, dword ptr[rax]
//00007FF6591B1CD9  mov         dword ptr[t1], eax
//* xp = t1;
//00007FF6591B1CDC  mov         rax, qword ptr[xp]
//00007FF6591B1CE3  mov         ecx, dword ptr[t1]
//00007FF6591B1CE6  mov         dword ptr[rax], ecx
//* yp = t0;
//00007FF6591B1CE8  mov         rax, qword ptr[yp]
//00007FF6591B1CEF  mov         ecx, dword ptr[t0]
//00007FF6591B1CF2  mov         dword ptr[rax], ecx

// 3 most general form: D(Rb, Ri, S) = Mem[reg[Rb] + S*Reg[Ri] + D]   // naturally compatable with array !!
// D: constant displacement
// Rb: Base reg, any of 16
// Ri: Index reg, any except for %rsp
// S: scale, 1, 2, 4, 8 (4 for int, 8 for long...)

// leaq src,dst
// src is address mode expression
// set dst to address denoted by expression

// uses: computing addresses without a memory referece: like p = &x;
//       computing arithmetic expression of the form x+k*y
// example: return x*12;
// leaq (%rdi, %rdi, 2), %rax  // t = x+2x;
// salq $2, %rax               // return t<<2

// instruction summary
// instruction  src, dest => dest = dest (instruction here, such as addq, subq, salq) src
// ↑ this is for linux, ms and intel often use src = src (i) dst


// beside the 16 regs (among which %rsp is specail for poingting location of runtime stack
// besides, there is %rip, location of current code control point (instruction pointer)


// Condition codes (implicit setting, normal activity and are always ignored)
// CF carry flag for unsigned	(unsigned overflow)
// SF sign flag					(t < 0, first bit = 1)
// ZF zero flag					(t = 0)   
// OF overflow flag				(signed overflow, a>0 && b>0 && a+b<0 || a<0 && b<0 && a+b>0)
// but leaq will not set these flag

// Explicit setting: compare
// cmp b, a are computing a-b without dst
// the laws of flag setting are like (a-b) overflow/==0/<0/signed overflow

// Explicit setting: test
// testq b, a like computing a&b
// ZF set if a&b == 0
// SF set when a&b < 0 

// SetX instruction: set low-order byte of dst to 0/1 based on condition code
// and will no change the other 7 bytes
// the names of the lowest bytes are %bpl in %rbp, %sil in %rsi, %al in %rax, %r15l in %r15   (l means low)


// return x > y
// cmpq %rsi, %rdi
// setg %al
// movzbl %al, %eax  // expand 0 to other bits of %rax  // %eax can set lowest 32bits 
// a purplex thing is when lowest 4 bytes are set (%eax), the highest 4 bytes will be set to 0
// ret

// if(x>y) res = x-y;
// else res = y-x;
// return res;
// 
// cmpq %rsi, %rdi
// jle .L4
// moveq %rdi, %rax
// subq %rsi, %rax
// ret
//.L4:    (.L4 which is left to : is a label)
// moveq %rsi, %rax
// subq %rsi, %rax
// ret
// rdi:x rsi:y
// rax is the return value

// C prog which is similar to assembly code
// int ntest = x <= y;
// if (ntest) goto Else;
// res = x - y;
// goto Done;
// Else: res = y - x;
// Done: return res;
