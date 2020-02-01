References in C++

#include <iostream>
using namespace std;
int main() {
  
  // &   this symbol is used to get the address of variable 
  
  int x = 10;
  // ref is a reference to x. 
  int& ref = x;
  cout << "ref = " << ref << endl;//10
  ref = 20;
  cout << "x = " << x << endl;//20
  x = 30;
  cout << "ref = " << ref << endl; // 30 here i am changing value of of x but ref variable alo get reflected 
                                   // because referance is pointing to the memory address of x variable 

  
  
  //Reference variables are the alias of another variable  
  //reference shares the same memory address (with the original variable) i.e refrence variable and orginal variable have 
  // same memory address 
  int a=10;
	int &ref_a=a;
	
	cout<<"a: "<<a<<", ref_a: "<<ref_a<<endl;
	ref_a=100;
	cout<<"a: "<<a<<", ref_a: "<<ref_a<<endl;
  
  
  return 0;
}

// swaping two number using refrence 
#include<iostream> 
using namespace std;  
void swap (int& first, int& second) 
{ 
    int temp = first; 
    first = second; 
    second = temp; 
} 
  
int main() 
{ 
    int a = 2, b = 3; 
    swap( a, b ); 
    cout << a << " " << b; 
    return 0; 
} 

//const reference 
#include <iostream>
using namespace std;
int main() {

    // there are many way to define constact ref
    int z=50;
    int const &a = z; //or Alternatively
    const int &b = z;
    const  int&  c  =z;
    std::cout<<"a - "<< a<<" b - "<< b<<" c - "<<c<<std::endl;
    z=55;
    std::cout<<"a - "<< a<<" b - "<< b<<" c - "<<c<<std::endl;
    
    // a=20;   error we can not change the const refrence 
    
    /*  
    a - 50 b - 50 c - 50
	a - 55 b - 55 c - 55
	*/
    
	
	return 0;
}



