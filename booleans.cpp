#include<iostream>
using namespace std;

        // as we know in some programs we  just need one or two values;
        /*
            YES / NO
            ON / OFF
            TRUE / FALSE
            For this, C++ has a bool data type, which can take the values true (1) or false (0).


            **to declare a variable which have boolean value use below syntax for that;

            <data-type> {variable-name} = <boolean vaue>
            bool yes = true;
            bool no = false;

            //boolean value
                true = 1; 
                false =1


        */

// code

int main(){
    bool a = true;
    bool d= true;
    bool b = false;
    bool c = false;
    cout<<a<<"\n";          //output 1;
    cout <<b;               //output 0;
    cout<<"\n"<<a||b;       //output 1;   // or     0+1=1 ==>> false + true = true
    cout<<"\n"<<a||d;       //output 1;   // or     1+1=1 ==>> true + true = true
    cout<<"\n"<<b||c;       //output 0;   // or     0+0=0 ==>> false + false = false
    cout<<"\n"<<b&&a;       //output 0;   // and    0*1=0  ==>> false *true = false
    cout<<"\n"<<a&&b;       //output 1;   // and    1*0=1  ==>> true *false = true
    cout<<"\n"<<a&&d;       //output 1;   // and    1*1=1  ==>> true *true = true
    cout<<"\n"<<b&&c;       //output 0;   // and    0*0=0  ==>> false*false= false


    return 0;
    
}