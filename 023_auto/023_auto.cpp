#include <iostream>
using namespace std;

int main()
{
	int a[] = { 423, 432, 654, 234, 6, 3425, 7, 345, 457 };

	for (int i : a) // 배열 a의 각각의 원소 i에 대해 
		cout << i << " ";
	cout << endl;
}