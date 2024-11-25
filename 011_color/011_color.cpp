#include <iostream>
using namespace std;

class Color {
private:
	float r, g, b;
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) :r(r), g(g), b(b) {}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {  // static
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
};
int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color purple = Color::MixColors(red, blue); // 이 함수가 어느 클래스에 있는지 .. 적어주고 그 클래스에 소속된 함수를 사용함.
	//red.MixColors()는 이상함 >> 두 가지 색상을 섞을 건데 하나의 매개변수를 중심으로 할 필요가 없음 

	cout << purple.GetR() << ", " << purple.GetG() << ", " << purple.GetB() << endl;

}