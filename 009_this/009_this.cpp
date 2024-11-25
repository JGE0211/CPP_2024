#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소 : " << this << endl; // 여기서 this는 내 객체를 말하는 것,  this는 class 안에서 객체의 주소를 의미함
	}
};

int main()
{
	MyClass a, b;

	cout << "a의 주소 : " << &a << endl;
	cout << "b의 주소 : " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}