#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a == b;
}

int main()
{
	bool (*fp)(int, int);  //fp는 함수포인터

	fp = compare;

	bool res1 = (*fp)(1, 1);
	bool res2 = fp(1, 3);

	cout << res1 << ", " << res2 << endl;
}