#include <iostream>
using namespace std;

int arrFnMin(int a[], int n, int (*fp)(int)) {
	int min = fp(a[0]);
	for (int i = 1; i < n; i++)
		if (min > fp(a[i]))
			min = fp(a[i]);
	return min;
}
int square(int i) {
	return i * i;
}
int main()
{
	int arr[] = { 234,1, 3, -6 ,-2 ,545 };

	cout << arrFnMin(arr, 6, square) << endl;
	cout << arrFnMin(arr, 6, [](int n)->int {return n * n; }) << endl;
	cout << arrFnMin(arr, 6, [](int n)->int {return n * n * n; }) << endl;
}