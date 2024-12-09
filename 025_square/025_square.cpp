#include <iostream>
using namespace std;
int minimum(int a[], int n, int (*fp)(int));
int square(int x) { return x * x; }
int cube(int x) { return x * x * x; }

int calc(int a,int (*fp)(int)) {
	return fp(a);
}
int main()
{
	int arr[] = { 12,234,45,-34,-2 };
	int a = 10;
	int (*fp)(int);  // int값을 return하는 fp는 매개변수 int 하나를 가짐

	fp = square;
	cout << fp(a) << endl;

	fp = cube;
	cout << fp(a) << endl;

	cout << calc(a, square)<<endl;
	cout << calc(a, cube) << endl;

	cout << minimum(arr, 5, square) << endl;
}

// 배열의 원소를 fp 함수로 계산한 최솟값을 리턴
int minimum(int a[], int n, int (*fp)(int)) {
	int min = fp(a[0]);
	for (int i = 1; i < n; i++) 
		if (min > fp(a[i]))
			min = fp(a[i]);
	return min;
	
}