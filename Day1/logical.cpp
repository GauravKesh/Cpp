#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    int b = 6;

    // logical operator
    /*

            && 	Logical and	Returns true if both statements are true	a < 6 &&  a >4
            || 	Logical or	Returns true if one of the statements is true	a > 5 || a < 4
            !	Logical not	Reverse the result, returns false if the result is true	!(a >  5 && a < 10)

    */

   cout << (a<6&&a>4);
   cout << (a<6&&a<4);
   cout << (a<6||a>4);
   cout << !(a>4||a<10);

   return 0;
}