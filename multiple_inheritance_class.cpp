#include<iostream>
using namespace std;
class Cls1{
    public:
        void funv(){
            cout<<"\nYou have been succesd";
        };

};
class Cls2{

};
class Cls: public Cls1,Cls2{
    public:
        void name(){
            cout<<"\nMultiple inhertance was done";
        };
};
int main(){
    Cls s1;
    s1.name();
    s1.funv();
    return 0 ;
}