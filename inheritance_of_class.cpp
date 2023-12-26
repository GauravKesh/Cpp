#include<iostream>
using namespace std;
        /*
        !!! Inheritance !!!!
                    ********************************
            In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
                                -----------------------
            ** Derived class (child) - the class that inherits from another class
            ** Base class (parent) - the class being inherited from
                                -------------------------
            To inherit from a class, use the : symbol.
                                --------------------------
            **** Why And When To Use "Inheritance"?
                <<- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
        */
class University{
    public:
        string uniname = "MIT";
        void data(){
            cout<<"Best university";
        };

}; 
// inheriting the class 
class Student :public University{
    public:
        string area;
};
int main(){
    Student u1;
    u1.area="america";
    u1.data();
    cout<<u1.area<<"\t"<<u1.uniname;

    return 0;
}