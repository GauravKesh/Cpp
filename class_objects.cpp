#include <iostream>
using namespace std;
class Car
{
public:
    string model;
    int num;
    string brand;

private:
    string uid;
    // cout<<uid;
};
class Method
{
public:
    string name;
    void myFun();
};
void Method::myFun()
{
    cout << "function from public of class method was called and response was success\n";
}
// passing arguments in fuction which is a  object for class;
class Pag
{
public:
    int netsped(int maxspeed);
};
int Pag::netsped(int maxspeed)
{
    int sped = 287;
    return sped;
};
int main()
{
    Car Car1;
    Car1.model = "263gdy";
    Car1.num = 9989;
    Car1.brand = "bmw";
    // Car1.uid="8288273gTuwsg";
    cout << Car1.model << "\t" << Car1.num << "\t" << Car1.brand << "\n";
    Method st1;
    st1.name = "joker";
    Method st2;
    st2.name = "hacked";
    st1.myFun();

    cout << st1.name << "\n"
         << st2.name << "\n";

    Pag cs1;

    cout << "speed of the Car is " << cs1.netsped(100);
    return 0;
}
