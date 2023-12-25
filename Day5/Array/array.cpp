#include <iostream>
using namespace std;

int main()
{
            /*
                Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

                To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
                in c++ elements of array is stored in curly brackets;

                <datatype> <variable name>[size of array]=< {elements of array}>;

            */

    string nam[10] = {"joker","bmw","audi","ferrari"};
    //accesing element of array

    cout<<nam[2];
    //changing element of a array
    nam[3]="sirr";
    for(int i=0;i<5;i++){
        cout<<"\n"<<nam[i];
    }

    /*whenever we'll declare array we need to specify array's size.
    
     .*/
    

}
