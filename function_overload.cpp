#include<iostream>
using namespace std;
        /*
            With function overloading, multiple functions can have the same name with different parameters:
        */


int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}


    /*
        Instead of defining two functions that should do the same thing, it is better to overload one.

        In the example below, we overload the plusFunc function to work for both int and double:
    */
