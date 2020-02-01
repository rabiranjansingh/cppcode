#include<iostream>
#include<fstream>

/* Both Java and C++ invoke functions using a mechanism called “Call By Value”. If we pass a variable to a
function then the function gets the value contained in the variable. However, any changes that are
made to the variable in the function are not reflected back in the calling program. These parameters are
considered local variables. To illustrate, consider the following:
*/

using namespace std;
void ChangeValues(int y); // Prototype
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
void ChangeValues(int y)
{
	cout << " In ChangeValues, Y = " << y << endl;
	y = 20;
	cout << " In ChangeValues, Y = " << y << endl;




	return;
}


/*
 Before call, x = 5
 In ChangeValues, Y = 5
 In ChangeValues, Y = 20
 Back in main x = 5
 */
