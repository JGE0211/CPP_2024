#include <iostream>
#include <map>
using namespace std;

int main()
{
	// 쌍!!!!!!!!!!!!!!!!!!!!!!!!이다 
	pair<int, string> a = { 123, "abc"};

	cout << a.first << ", " << a.second << endl;
	a.second = "asdfsdfs";
	cout << a.first << ", " << a.second << endl;

	pair<string, string> dict = { "Hello", "안녕하세요" };   // 앱인벤터에서 tag - value 같은 느낌
	cout << dict.first << ", " << dict.second << endl;


	//dictionary
	map<string, int> fruit;
	fruit["apple"] = 7;
	fruit["banana"] = 5;
	fruit["orange"] = 10;

	cout << "banana : " << fruit["banana"] << endl;
	cout << "apple : " << fruit["apple"] << endl;
	cout << "orange : " << fruit["orange"] << endl;
	cout << endl;

	for (pair<string, int> f : fruit)   // pair 대신 auto를 사용할 수 있음
		cout << f.first << " : " << f.second << endl;
	cout << endl;
}