#include <iostream>
using namespace std;
class car
{
public:
    string model;
    int num;
    string brand;

private:
    string uid;
    // cout<<uid;
};
class method
{
public:
    string name;
    void myFun();
};
void method::myFun()
{
    cout << "function from public of class method was called and response was success\n";
}
//passing arguments in fuction which is a  object for class;
class pag{
    public:
        int netsped(int maxspeed);
};
int pag::netsped(int maxspeed){
    int sped = 287;
    return sped;
    
};
int main()
{
    car car1;
    car1.model = "263gdy";
    car1.num = 9989;
    car1.brand = "bmw";
    // car1.uid="8288273gTuwsg";
    cout << car1.model << "\t" << car1.num << "\t" << car1.brand << "\n";
    method st1;
    st1.name = "joker";
    method st2;
    st2.name = "hacked";
    st1.myFun();

    cout << st1.name << "\n"
         << st2.name << "\n";
    
    pag cs1;
    
    cout<<"speed of the car is "<<cs1.netsped(100);
    return 0;
}
