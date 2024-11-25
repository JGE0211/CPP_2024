#include <iostream>
using namespace std;

class Color {
private:
	float r, g, b;
	int id;
	static int idCounter; // 멤버에 소속되지 않고 클래스에 소속됨
public:
	//Color() : r(0), g(0), b(0), id(idCounter++) {}
	Color() {
		r = 0;
		g = 0;
		b = 0;
		id = idCounter++;
	}
	//Color(float r, float g, float b) :r(r), g(g), b(b), id(idCounter++) {}
	Color(float r, float g, float b) {
		this->r = r;   // this r은 privat의 변수이름의 r이고 , 뒤의 r은 매개변수의 r
		this->g = g;
		this->b = b;
		this->id = idCounter++;
	}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {  // static
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
};

int Color::idCounter = 1; // 초기화

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color purple = Color::MixColors(red, blue); 
	cout << purple.GetR() << ", " << purple.GetG() << ", " << purple.GetB() << endl;
	cout << "red : id = " << red.GetId() << endl;
	cout << "blue : id = " << blue.GetId() << endl;
	cout << "purple : id = " << purple.GetId() << endl;

}