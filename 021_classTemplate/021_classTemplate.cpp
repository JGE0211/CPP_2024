#include <iostream>
using namespace std;

template <typename T>
class Vector2 {
private:
	T x, y;
public:
	Vector2() :x(0), y(0) {}
	Vector2(T x, T y) : x(x), y(y) {}
	T GetX() const { return x; }
	T GetY() const { return y; }
	Vector2 operator+(const Vector2 other) const {
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator-(const Vector2 other) const {
		return Vector2(x - other.x, y - other.y);
	}

	Vector2& operator+=(const Vector2 other) {
		x += other.x;  // x와 y 자체가 바뀌니 함수가 const일 수는 없음
		y += other.y;
		return *this;
	}
	Vector2& operator-=(const Vector2 other) {
		x -= other.x;
		y -= other.y;
		return *this;
	}
};

int main()
{
	Vector2<int> v1(1, 3);
	Vector2<double> v2(1.5, 3.5);

	cout << "(" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
	cout << "(" << v2.GetX() << ", " << v2.GetY() << ")" << endl;
}