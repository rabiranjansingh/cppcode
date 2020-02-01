References in C++

#include <iostream>
using namespace std;
int main() {

  int x = 10;
  // ref is a reference to x. 
  int& ref = x;
  cout << "ref = " << ref << endl;//10
  ref = 20;
  cout << "x = " << x << endl;//20
  x = 30;
  cout << "ref = " << ref << endl; // 30 here i am changing value of of x but ref variable alo get reflected 
                                   // because referance is pointing to the memory address of x variable 

  return 0;
}
