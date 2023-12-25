#include <iostream>
using namespace std;
int main()
{
    string name = "hacked";
    string *ptr = &name;
    // string *ptr = &name;
    // string * ptr = &name;
    cout << name << "\n";                  // output hacked
    cout << &name << "\n";                 // output "address of the variable name"
    cout << *ptr << "\n";                  // output hacked
    cout << ptr << "\n";                   // output "addres of the variable name"
    *ptr = "jokerrr" ;
    cout << name << "\n";                  // output joker
    cout << &name << "\n";                 // output "address of the variable name"
    cout << *ptr << "\n";                  // output joker
    cout << ptr << "\n";                   // output "addres of the variable name"
}