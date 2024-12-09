#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2() :x(0), y(0) {}
	Vector2(float x, float y) : x(x), y(y) {}
	float GetX() const { return x; }
	float GetY() const { return y; }
	Vector2 operator+(const Vector2 other) const {
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator-(const Vector2 other) const {
		return Vector2(x - other.x, y - other.y);
	}

	Vector2& operator+=(const Vector2 other) {
		x += other.x;  // x와 y 자체가 바뀌니 함수가 const일 수는 없음
		y += other.y;
		return *this;
	}
	Vector2& operator-=(const Vector2 other) {
		x -= other.x;
		y -= other.y;
		return *this;
	}
};
template <typename T> // T 타입을 대신해서 쓸 수 있는 문자
T getArraySum(T arr[], int n) {
	T sum = arr[0];
	for (int i = 1; i < n; i++)
		//sum = sum + arr[i];
		sum += arr[i];
		//sum += arr[i];  왜 벡터2에서는 이렇게 안 되지ㅜㅜ? >>>>>>>>> 클래스는 += 연산이 불가능함!!! 아~~ 아직 안 만들었기 때문!! +=을 만들면 +=를 사용할 수 있음
		/////위에서 += 연산자를 만들었으니 sum += arr[i]를 사용 가능
	return sum;
}

// 특수 템플릿
template <> ////////템플릿 괄호!! (안ㅇㅔ 아무것도 없음)
string getArraySum(string arr[], int n) { // string을 template에서 처리할 거야 ,,, 타입이 string 일 경우,, 이 템플릿을 사용
	string sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += " " + arr[i];
	return sum;
}
int main()
{
	int iarr[5] = { 3,5,6,2,4 };
	double darr[5] = { 1.3, 54.3, 4.6, 8.7, 4.5 };
	string sarr[3] = { "asdf", "sdfsgfsd", "werwgdfg" };
	Vector2 varr[3] = { Vector2(1,2), Vector2(3,5), Vector2(7,8) };

	int isum = getArraySum<int>(iarr, 5);
	double dsum = getArraySum<double>(darr, 5);
	string ssum = getArraySum<string>(sarr, 3);
	Vector2 vsum = getArraySum<Vector2>(varr, 3);

	cout << isum << endl;
	cout << dsum << endl;
	cout << ssum << endl;
	cout << "(" << vsum.GetX() << ", " << vsum.GetY() << ")" << endl;
}
