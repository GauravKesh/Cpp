#include <iostream>
using namespace std;
int main(){

            //There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):
            /*
                for (type variableName : arrayName) {
                    // code block to be executed
                }
                            
            */

           //The following example outputs all elements in an array, using a "for-each loop":


    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
    return 0 ;
}