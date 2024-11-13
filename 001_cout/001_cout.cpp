#include <iostream>

using namespace std;

int main() {
	std::cout << "Hello World!" << std::endl;
	cout << "Hello World!" << endl;

	int a = 5;
	double b = 3.141592;
	char c = 'd';

	cout << a << ' ' << b << ' ' << c << endl;

	int x, y;
	cout << "두 정수 입력:";
	cin >> x >> y;
	cout << x << " + " << y << " = " << x + y << endl;
}