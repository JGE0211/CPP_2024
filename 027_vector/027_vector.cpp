#include <iostream>
#include <vector>
using namespace std;

vector<int> v; // v는 벡터인데 int형이야 정수를 가지고 동작하는 벡터v야!!

// vector를 매개변수로 받을 때는 참조형으로 받는 것이 좋음
//그렇지 않으면 vector의 내용 전체가 매개변수로 전달됨.
void Print(vector<int> &v) { // v에 저장된 데이터를 한꺼번에 받은ㅁ >>> 데이터가 많으면 hard,,, so!! 참조형으로 받기  
	for (int i : v)
		cout << i << " ";
	cout << endl;
}
int main()
{
	v.push_back(1); // 뒤에 넣는다
	v.push_back(2);
	v.push_back(3);

	for (int i : v)
		cout << i << " ";
	cout << endl;

	vector<float> w = { 1.1, 2.2 ,3.3 }; // 초기화
	for (float i : w)
		cout << i << " ";
	cout << endl;

	int x = v[0]; // vector는 배열처럼 쓸 수 있음
	cout << x << endl;

	v[0] = 123;
	cout << v[0] << endl;

	//vector 복사 (깊은 복사 )
	vector<int> v2 = v;
	for (int i : v2)
		cout << i << " ";
	cout << endl;

	v2[0] = 1;
	for (int i : v)
		cout << i << " ";
	cout << endl;

	Print(v);
}