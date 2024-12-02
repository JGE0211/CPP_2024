#include <iostream>
using namespace std;

class Base {
public:   //  
	int bNum;
	void bFunc() {
		cout << "Hello from Base!" << endl;
	}
};

class Derived : public Base { //derived 클래스는 base 클래스를 상속 받을 거야 / base가 가진 것을 derived도 가질 수 있게 됨
public:
	int dNum;
	void dFunc() {
		cout << "Hello from Derived!" << endl;
	}
};

int main()
{
	Base bbb;
	bbb.bNum = 10; /// public이라서 이렇게 사용 가능


	Base b;
	Derived d;
	b.bFunc();
	b.bNum = 1;
	cout << "b.bNum = " << b.bNum << endl;

	d.bFunc();
	d.bNum = 2;
	cout << "d.bNum = " << d.bNum << endl;
	cout << "b.bNum = " << b.bNum << endl;  // 자식 클래스를 바꾼다고 해서 부모 클래스는 바뀌지 않음

	d.dFunc();
	d.dNum = 1;
	cout << "d.dNum = " << d.dNum << endl;
	

	
}