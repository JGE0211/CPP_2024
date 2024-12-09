#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a[7] = { 2,3,4,5,1,23,45 };

	sort(a, a + 7);  // 마지막 원소보다 하나 끝 값까지

	for (int i : a)
		cout << i << " ";
	cout << endl;

	vector<int> v = { 12,3,453,464,5,7456,234 };
	sort(v.begin(), v.end()); // 브이점 비긴부터 브이점 엔드까지 소트 해줘

	for (int i : v)
		cout << i << " ";
	cout << endl;


}