#include<iostream>
using namespace std;
int main(){

        /*
            
            ** In reference the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
                                             ---------------------------
            ** The & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
        */
    string name = "hacked";
    cout<<&name; // it'll give the memory address of variable name where data is stored;

            /*

                NOTE:-- The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.
                                            -----------------------------------

                                     WHY IS IT USEFUL TO KNOW THE MEMORY ADDRESS?

                References and Pointers (which you will learn about in the next chapter) are important in     C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.


            
            */

    return 0;
}
