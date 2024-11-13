#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };

	// 범위 기반 for문
	for (int i : a)    // 배열의 개수를 몰라도 됨 ( i는 배열에 저장된 값(원소)을 찍음)
		cout << i*i << ' ';
	cout << endl;
}