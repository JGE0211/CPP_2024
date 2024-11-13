#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b(20);
	int& x = a; /// x는 a의 레퍼런스이다(x는 a의 다른 이름이다)

	x = 100;
	cout << a << ' ' << b << endl;
}