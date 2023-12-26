#include<iostream>
using namespace std;
class Const{
    public:
        string name;
        string uid;
        int id;
        Const(string x,string y,int z);
};
// we can define Constructor outside the class just like function
Const::Const(string x,string y,int z){
    name = x;
    uid = y;
    id = z;


};

int main(){
    
    Const u1("hacked1","988ghg",89034);
    Const u2("hacked2","273ldj",89027);
    Const u3("hacked3","7789ghl",89099);
    cout<<u1.name<<"\t"<<u1.uid<<"\t"<<u1.id<<"\n";
    cout<<u2.name<<"\t"<<u2.uid<<"\t"<<u2.id<<"\n";
    cout<<u3.name<<"\t"<<u3.uid<<"\t"<<u3.id<<"\n";
}