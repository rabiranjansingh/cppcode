//Static or Compile time polymorphism
//        Function Overloading
//        Operator Overloading
//Dynamic or Runtime polymorphism
//       Virtual function or dynamic binding

#include <iostream>
using namespace std;

/* example of  Function Overloading
#include <iostream>
using namespace std;

long add(long, long);
float add(float, float);
int main()
{
	long a, b, c;
	float e, f, g;
	cout << "Enter two integers\n";
	cin >> a >> b;
	c = add(a, b);
	cout << "Sum of integers: " << c << endl;
	cout << "Enter two floating point numbers\n";
	cin >> e >> f;
	g = add(e, f);
	cout << "Sum of floats: " << g << endl;


	system("pause");
}

long add(long c, long g)
{
	long sum;
	sum = c + g;
	return sum;
}

float add(float c, float g)
{
	float sum;
	sum = c + g;

	return sum;
}

*/







////
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//private:
//	double real;
//	double imag;
//public:
//	Complex() {};
//	Complex(double, double);
//	Complex operator + (Complex);
//	void print();
//};
//
//Complex::Complex(double r, double i)
//{
//	real = r;
//	imag = i;
//}
//
//Complex Complex::operator+ (Complex param)
//{
//	Complex temp;
//	temp.real = real + param.real;
//	temp.imag = imag + param.imag;
//	return (temp);
//}
//
//void Complex::print()
//{
//	cout << real << " + i" << imag << endl;
//}
//
//int main()
//{
//	Complex c1(3.1, 1.5);
//	Complex c2(1.2, 2.2);
//	Complex c3;
//
//	c3 = c1 + c2; //use overloaded + operator
//
//	c1.print();
//	c2.print();
//	c3.print();
//	return 0;
//}




//  dynamic binding   or late binding
//Dynamic Binding program in c++  
#include < iostream >   
using namespace std;
int Square(int x) //Square is =x*x;  
{
	return x * x;
}
int Cube(int x) // Cube is =x*x*x;  
{
	return x * x * x;
}
main() {
	int x = 100;
	int choice;
	do {
		cout << "Enter 0 for Square value, 1 for Cube value :\n";
		cin >> choice;
	} while (choice < 0 || choice > 1);
	int(*ptr)(int);
	switch (choice) {
	case 0:
		ptr = Square;
		break;
	case 1:
		ptr = Cube;
		break;
	}
	cout << "The result is :" << ptr(x);
	return 0;
}


//another example 
#include<iostream> 
using namespace std;

class Base {
public:
	virtual void show() { cout << " In Base \n"; }
};

class Derived : public Base {
public:
	void show() { cout << "In Derived \n"; }
};

int main(void)
{
	Base *bp = new Derived;
	bp->show();  // RUN-TIME POLYMORPHISM

	int  n = 0;
	cin >> n;

	return 0;
}


