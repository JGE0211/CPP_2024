#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2() : x(0), y(0) {
		cout << this << " : Vecotor2()" << endl;  // this는 이 객체의 주소를 의미
	}
	Vector2(float x, float y) : x(x), y(y) {
		cout << this << " : Vector2(float, float)" << endl;
	}
	~Vector2() {  // 소멸자,, 소멸할 때 생성됨 ....정적은  main 함수가 끝난 다음에 !! 자동으로 없어져용...
		cout << this << " : ~Vector2()" << endl;
	}

	float GetX() const { return x; }
	float GetY() const { return y; }

}; // 클래스 끝나면 꼮 ;(세미콜론) 찍어주기!!!

int main()
{
	cout << "main 시작" << endl;

	Vector2 s1;
	Vector2 s2(2, 3);

	cout << "s2 : " << s2.GetX() << ", " << s2.GetY() << endl;
	//객체의 동적 할당
	Vector2* d1 = new Vector2;  //s1과 다른 주소를 갖게 됨
	Vector2* d2 = new Vector2(4, 5);  // s2와 다른 주소를 갖게 됨

	cout << "d2 : " << d2->GetX() << ", " << d2->GetY() << endl;    // d2는 포인터기에 화살표를 사용함

	cout << "(" << d1->GetX() << ", " << d1->GetY() << ")" << endl;
	cout << "(" << d2->GetX() << ", " << d2->GetY() << ")" << endl;

	delete d1; // 동적은 직접 없애야 됨.(delete를 해야지만 사라짐) 메모리가 없어지지 않으면 그 부분은 다시 사용을 하지 못하기에 꼭 지워주기
	delete d2;

	cout << "main 끝" << endl;
}


// 나중에 만들어진 것이 먼저 딜리트 됨

