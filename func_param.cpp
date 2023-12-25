#include<iostream>
using namespace std;
            /*
            void functionName(parameter1, parameter2, parameter3) {
                // code to be executed
            }
            */
int jack();
void stdd(string name);
void std1(string name,int age = 10);//here default age is set if age is not passed as argument so this will be considered;

void ref(int &x,int &y); // using referance
void parr(int arr[20]); //passing array in function;

int main(){
    stdd("joker");
    std1("joker",100);
    int z = jack();
    cout<<z;
    stdd("fuckerß");
    int x=6;int y=78;
    ref(x,y);
    int arr[5] = {1,3,5,32,2};
    parr(arr);


    return 0;
}
void stdd(string name){
    cout<<name<<"\n";
    // cout<<uid<<"\n";
    int z = jack();
    cout<<z;

}


void std1(string name,int age){
    cout<<name<<"\n";
    cout<<age<<"\n";
    stdd("fuckerß");
    int x=6;int y=78;
    ref(x,y);


}

//   The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:


int jack(){
    int x=5;
    int y=90;
    return x+y;

}

//pass by referance 

void ref(int &x,int &y){
    cout<<"\n"<<x<<y<<"\n";
    int z=x;
    x=y;
    y=z;
    cout<<"\n"<<x<<y;

}

//passing array in function

void parr(int arr[5]){
    for (int i = 0; i <5; i++)
    {
        cout<<"\narray elemnts is :"<<arr[i];
    }
    
}