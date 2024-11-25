#include <iostream>
using namespace std;

class Complex {
private:
	double real; // 실수 
	double imag; // 허수
public:
	Complex() {  //매개변수가 없는 초기화 생성자
		real = 0;
		imag = 0;
	}
	Complex(double real, double imag) {  // 매개변수가 2개 있는 초기화 생성자
		this->real = real; //this real은 객체 변수  회색은 매개변수 real 
		this->imag = imag;
	}
	void SetReal(double real) {
		this->real = real; //this는 자기 자신을 가르키는 포인터
	}
	double getReal() {
		return this->real; 
	}
	void SetImag(double imag) {
		this->imag = imag;
	}
	double getImag() {
		return this->imag; // this는 없어도 상관없음 단지 매개변수를 구별하기 위해서... (아님 확실하게 구별하기 위해서 매개변수이름을 바꾸ㅓ주기)
	}  
};

int main()
{
	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(3, 4);

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
}