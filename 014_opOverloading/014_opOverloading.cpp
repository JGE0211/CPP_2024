#include <iostream>

using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2();
	Vector2(float x, float y); // 리턴값 없
	float GetX() const;  // 있
	float GetY() const;
	Vector2 operator+(const Vector2 other) const; // 객체 두개를 더해서 새로운 객체를 만듦
	Vector2 operator-(const Vector2 other) const;  // 밖의 const는 a를 변하지 않게 함, 안의 const는 b를 변하지 않게 함
	Vector2 Add(const Vector2 other) const;
	Vector2 operator*(float k);
	float operator*(Vector2 other);

};

Vector2 Vector2::operator*(float k) {
	return Vector2(k * x, k * y);  // 벡터를 리턴하는 것
}
float Vector2::operator*(Vector2 other) {
	return x * other.x + y * other.y; // 값을 리턴하는 것임
}
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
Vector2 Vector2::operator+(const Vector2 other) const { // c로 받기 
	return Vector2(this->x + other.x, this->y + other.y); // 생성자 함수     /// 제일  앞에 있는 게 this가 되고 (a) 뒤에 있는 게 other(b)
}
Vector2 Vector2::operator-(const Vector2 other) const {
	return Vector2(this->x - other.x, this->y - other.y); // 생성자 함수  
}
Vector2 Vector2::Add(const Vector2 other) const {  // a에서 b를 더한다(a를 중점으로this) b가 매개변수이므로 other이 됨
	return Vector2(x + other.x, y + other.y);
}

// 클래스 밖에서 만든 연산자 오버로딩
// 클래스의 멤버 함수가 아님
Vector2 operator*(float k, Vector2 v) {  //////////여기에 숫자 * 벡터 를 만들어주면 g 출력 가능
	return Vector2(k * v.GetX(), k * v.GetY());
}
int main()
{
	Vector2 a(3, 4);
	Vector2 b(5, 6);

	Vector2 c = a + b;
	Vector2 d = a - b;

	Vector2 e = a.Add(b);

	cout << "c = (" << c.GetX() << ", " << c.GetY() << ")" << endl;
	cout << "d = (" << d.GetX() << ", " << d.GetY() << ")" << endl;
	cout << "e = (" << e.GetX() << ", " << e.GetY() << ")" << endl;

	Vector2 f = a * 3.1;
	Vector2 g = 3.1 * a; // 사용하지 못함 왜냐면 이런 연산자를 만들지 않았기에 사용할 수 없음
	float x = a * b;
	cout << "f = (" << f.GetX() << ", " << f.GetY() << ")" << endl;
	cout << "g = (" << g.GetX() << ", " << g.GetY() << ")" << endl;
	cout << "x = " << x << endl;
}