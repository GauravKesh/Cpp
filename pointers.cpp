#include<iostream>
using namespace std;
int main(){
    //pointers
            /*
                we can get the memory address of a variable by using the & operator:
                A pointer however, is a variable that stores the memory address as its value.

                A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

                 Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

                Use the & operator to store the memory address of the variable called name, and assign it to the pointer.

                Now, ptr holds the value of name's memory address.

                    string* <variable_name>; // Preferred
                    string *<pointer name>;
                    string * <pointer name>;


            */
    string name ="hacked";
    string* ptr = &name;
    // string *ptr = &name;
    // string * ptr = &name;
    cout<<name<<"\n";//output hacked
    cout<<&name<<"\n";//output "address of the variable name"
    cout<<*ptr<<"\n";//output hacked
    cout<<ptr<<"\n";//output "addres of the variable name"
    
    return 0 ;
}