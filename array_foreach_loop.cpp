#include<iostream>
using namespace std;
int main(){
    string nam[10]={"joker","gaurav","hari","harish"};
    int ct = 0;
    //using foreach loop in array
    //this will return each elemnt of array here we'll not have to specify the length of array;
    for(string i :nam){
        
    cout<<"\n"<<i;

    }
    cout<<"\nThe size of arrray is "<<sizeof(nam)/sizeof(string);
    return 0;


    

}