/*C++ Call By Reference
C++ has a feature called call by reference that doesn’t exist in Java.There is also a way to define
function parameters so that the contents of variables change between the function and the caller of the
function.This is called call by reference.As an example, consider the following changes to the previous
program :  */
#include<iostream>
#include<fstream>

using namespace std;
void ChangeValues(int &y); // Prototype
int main()
{
	int x = 5;
	cout << " Before call, x = " << x << endl;
	ChangeValues(x);
	cout << " Back in main x = " << x << endl;


	int n = 0;
	std::cin >> n;
	return 0;
}
void ChangeValues(int &y)
{
	cout << " In ChangeValues, Y = " << y << endl;
	y = 20;
	cout << " In ChangeValues, Y = " << y << endl;


	

	return;
}