#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap(int& x, int& y) // 레퍼런스 변수 사용(레퍼런스 변수는 보내주는 것의 다른 이름과도 같아서 여기서 바뀌면 보내주는 곳에서도 바뀜) 
///--- swap 두 개 해도 에러 안 되는 이유 : cpp에서는 함수 중복이 가능함( 하나으ㅣ 함수이름에 여러 개 가능;; 매개변수에 맞는 함수를 찾아감 )
{
	int t = x;
	x = y;
	y = t;
}

void swap(double& x, double& y) 
{
	double t = x;
	x = y;
	y = t;
}
int main()
{
	int a = 4;
	int b = 5;

	double x = 1.1234;
	double y = 5.4321;


	//swap(&a, &b);
	swap(a, b);
	swap(x, y);

	cout << a << ' ' << b << endl;
	cout << x << ' ' << y << endl;
}