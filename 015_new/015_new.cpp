#include <iostream>

using namespace std;

int main()
{
	int n;
	//합과 가장 큰 값을 출력하시오(sum, max)

	cout << "몇 개의 데이터? : ";
	cin >> n;

	int* a = new int[n]; // 동적 메모리 할당  (받은 만큼만 메모리에 할당 해줌 >> 필요한 만큼만 메모리를 잡아서 만듦
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	int sum = 0, max = a[0];
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (max < a[i])
			max = a[i];
	}

	cout << "sum = " << sum << endl;
	cout << "max = " << max << endl;

	delete[] a;  //메모리 해제(반납)
}