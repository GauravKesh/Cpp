#include <iostream>
using namespace std;
int main()
{


        /*
            left shift
                shortcut  to find left shift of any given number
                var1 = 5;
                var2 = a<<3
                var1 =  var1 << {number of bit to be shifted}

                {given Number} * 2^(number of bit to be shifted) // this will give us the value in decimal form
                example
                a = 5;
                b = a>>2;

                so
                    b = 2*(2^(2))= 2*4 = 8



        */
       //code**

    int a = 5, b = 5;

    // left shift
    a = a << 3; // left shift
    cout << a;  // output for left shift

    // right shift
    b = b >> 3; // right shift
    cout << "\n"<< a ;  // output for right shift

    
        /*
        // right shift >>
            shortcut  to find left shift of any given number
            var1 = 5;
            var2 = a>>3
            var1 =  var1 >> {number of bit to be shifted}

            {given Number} / 2^(number of bit to be shifted) // this will give us the value in decimal form
            example
            a = 5;
            b = a>>2;

            so
                b = 2/(2^(2))= 2/4 = 0
                if we'lll solve mathematically we'll get 0.5 but we'll get 0 as by default as a integer.
                0 because it'll give integer value so it'll ignore the numbers after decimal place



        */
}
