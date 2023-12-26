#include<iostream>
using namespace std;
        /*
        The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. In the example above, the members are public - which means that they can be accessed and modified from outside the code.

        However, what if we want members to be private and hidden from the outside world?

        In C++, there are three access specifiers:

        public - members are accessible from outside the class
        private - members cannot be accessed (or viewed) from outside the class
        protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
        */

class Spec{
    public:
        string x;
    private:
        string y;
};
int main(){
    Spec c1,c2;
    string c = c1.x = "hacker";
    // Spec c2;
    string d = c2.y = "joker"; 

    // so this will THROW AN ERROR that y is private memeber of class Spec and it cannot be acceded publicly or outside the class;

    cout<<c<<"\t"<<d; 

    //Note: It is possible to access private members of a class using a public method inside the same class and we can do it if we know the concept of encapsulation in oop;

    //  NOTE:-- By default, all members of a class are private if you don't specify an access specifier:
}