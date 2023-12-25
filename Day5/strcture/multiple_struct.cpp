#include<iostream>
using namespace std;
struct data{
    int roll;
    string name;
    string uid;
};


int main(){
    data s1,s2;
    s1.roll = 32897;
    s1.name = "hacked";
    s1.uid = "FGT23";    
    s2.roll = 32898;
    s2.name = "hacked1";
    s2.uid = "DF678";
    cout<<s1.roll<<"\t"<<s1.name<<"\t"<<s1.uid<<"\n";
    cout<<s2.roll<<"\t"<<s2.name<<"\t"<<s2.uid<<"\n";
    return 0;

}