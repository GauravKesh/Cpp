#include <iostream>
using namespace std;
class Mlen
{
public:
    string x = "MIT";
    void myFun()
    {

        cout << "\nhello sir";
    };
};

class Joker : public Mlen
{
};

class Ml : public Joker
{
public:
    string area;
    void fuz()
    {
        cout << "\nhello sirn nnn";
    }
};
int main()
{
    Ml s1;
    s1.area = "bengaluru";
    s1.myFun();
    s1.fuz();
    // s1.fun();
    // cout<<"\n"<< s1.area<<s1.myFun()<<"\n"<<s1.x<<"\n";
    return 0;
}