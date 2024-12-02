#include <iostream>
#include <string.h> // C언어의 string 라이브러리 (strcpy(), strlen(), ... )
using namespace std;

class String {
private:
	char* strData;
	int len;
public:
	String() {
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		len = strlen(str);
		//strData = str;  // 얕은 복사
		strData = new char[len + 1]; // +1은 NULL문자
		strcpy_s(strData, len+1, str);  // 깊은 복사 ...
	}
	~String() {
		if (strData != NULL)
			delete[] strData;
	}
	//////////////////////////////////복사생성자 추가해주기
	String(String& rhs) { // rhs 참조형으로 가지고 가기...
		len = rhs.len;
		strData = new char[len + 1];
		strcpy_s(strData,len+1, rhs.strData);
	}
	const char* GetStrData() {
		if (strData /*strData != NULL과 같은 의미....?*/)
			return strData;
		return "";
	}
	int GetLength() {
		return len;
	}
};

int main()
{
	String s1;
	String s2("Hello");

	cout << s1.GetLength() << endl;
	cout << s1.GetStrData() << endl;
	cout << s2.GetLength() << endl;
	cout << s2.GetStrData() << endl;
	
	String s("Hello2");
	String t = s;  // 없어질 때 ,, t 먼저 없어지고 s가 없어짐 없어질 때 소멸자가 실행됨... string NULL이 아니면 딜리트인데.
	/// t가 먼저 없어지면서 hello2가 날아감 하지만 s는 여전히 hello2를 가르키고 있음 그래서 null이 아닌데 이미 delete가 된 상황이라서 delete를 하지 못하기에 에러가 생김.
	/////// 이것을 해결하기 위해서는 s의 값을 복사하여 ------ t가 만들어지면서 만든 새로운 메모리 공간에 이를 할당 시켜줌 (주소를 가르킬 경우 ,, 그냥 값이 숫자일 경우는 그냥 복사하면 될 듯?합니다?)
	// //////////////***복사생성자를 이용하여 깊은복사하먄 에러가 생기지 않음**  // s가 사라질 때 s를 사라지게 하고, t가 사라질 때 t를 사라지게 함. (so, 오류 x )

	cout << t.GetLength() << endl;
	cout << t.GetStrData() << endl;
}