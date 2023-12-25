#include<iostream>
using namespace std;
int main(){
    
    //A reference variable is a "reference" to an existing variable, and it is created with the & operator:

    string name = "Hacked";
    string &std1 = name;
    cout<<std1;
}