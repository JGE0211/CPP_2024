#include <iostream>
using namespace std;

class Animal {
public:
	int age;
	Animal() { cout << "Animal 생성자 실행!" << endl; }  // 생성자
	~Animal() { cout << "Animal 소멸자 실행!" << endl; }
	void Breathe() { cout << "숨을 쉰다." << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog 생성자 실행!" << endl; }
	~Dog() { cout << "Dog 소멸자 실행!" << endl; }
	void Walk() { cout << "걷는다." << endl; }
};

class Sparrow : public Animal {
public:
	Sparrow() { cout << "Sparrow 생성자 실행!" << endl; }
	~Sparrow() { cout << "Sparrow 소멸자 실행!" << endl; }  // 나중에 먼저 사라짐 ..
	void Fly() { cout << "난다." << endl; }
};

int main()
{
	Dog d;
	d.age = 7;
	d.Breathe();
	d.Walk();
	cout << d.age <<"살" << endl;

	Sparrow s;
	s.age = 2;
	s.Breathe();
	s.Fly();
	cout << s.age<< "살" << endl;
}
// 부모 먼저 생성
// 자식 먼저 소멸