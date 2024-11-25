#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2();
	Vector2(float x, float y);
	float GetX() const; // 멤버함수를 바꾸지 않는.. 바꾸면 에러생김
	float GetY() const;
	static Vector2 Sum(Vector2 a, Vector2 b);
	Vector2 Add(Vector2 other);
};

//함수가 여기서 정의되어도 상관 없음
Vector2 Sum(Vector2 a, Vector2 b); // 벡터2를 리턴해주는 그냥 함수 .... 그냥 전역함수일 뿐임 클래스 안에 있는 것이 아님 //프로토타입
// 바로 밑에 함수가 선언 돼서 프로토타입 안 해도 되지만.. 그냥 이런 게 있따
Vector2 Sum(Vector2 a, Vector2 b) {
	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
int main()
{
	Vector2 a(2, 3);
	Vector2 b(5, 6); 
	Vector2 c1 = Sum(a, b);// 클래스가 없는 Sum (전역함수 이용)
	Vector2 c2 = Vector2::Sum(a, b); //정적메소드 이용
	Vector2 c3 = a.Add(b);	//클래스의 멤버함수

	cout << "a = (" << a.GetX() << ", " << a.GetY() << ")" << endl;
	cout << "b = (" << b.GetX() << ", " << b.GetY() << ")" << endl;
	cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
	cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
	cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
}

Vector2::Vector2() :x(0), y(0) {}
Vector2::Vector2(float x, float y) :x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; } // 벡터2안에잇는 getY라는 함수를 float로 나타내

Vector2 Vector2::Sum(Vector2 a, Vector2 b) { //static 안 써도 됨 벡터2 안에있는 sum이라는 함수는 벡터2를 리턴해.
	return Vector2(a.x + b.x, a.y + b.y);
}

Vector2 Vector2::Add(Vector2 other) {
	return Vector2(this->x + other.x, this->y + other.y); //this는 안 써도 상관ㄴㄴ
}