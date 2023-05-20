//#include <iostream>
//#include <string>
//
//struct Vector2
//{
//	float x, y;
//
//	Vector2(float x, float y)
//		: x(x), y(y) {}
//
//	Vector2 Add(const Vector2& other) const
//	{
//		return *this + other;
//		// or use as a function
//		//return operator+(other);
//
//	}
//
//	Vector2 operator+(const Vector2& other) const
//	{
//		return Vector2(x + other.x, y + other.y);
//	}
//
//	Vector2 operator*(const Vector2& other) const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//
//	Vector2 Multiply(const Vector2& other) const
//	{
//		return *this * other;
//	}
//
//	bool operator==(const Vector2& other) const
//	{
//		return x == other.x && y == other.y;
//	}
//
//	bool operator!=(const Vector2& other) const
//	{
//		return !(*this == other);
//		return !(*this == other);
//	}
//};
//
//
//int main()
//{
//	Vector2 position(4.0F, 4.0F);
//	Vector2 speed(0.5F, 1.5F);
//	Vector2 powerup(1.1F, 1.1F);
//
//	Vector2 result = position.Add(speed.Multiply(powerup));
//	Vector2 result2 = position + speed * powerup;
//
//	std::cout << result.x << "  " << result.y << std::endl;
//	std::cout << result2.x << "  " << result2.y << std::endl;
//
//	std::cout << bool(result != result2) << std::endl;
//}