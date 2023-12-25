#include <iostream>
using namespace std;
        /*
            ** Structures (also called structs) are a way to group several related variables into one place.
            ** Each variable in the structure is known as a member of the structure.
            ** Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
                   struct{
                        // variables
                    }<name of structur>;

                    
        */


struct
{
    int roll;
    string name;
    char sec;
}data;
int main()
{
    data.roll = 7897 //to passing data in struct 
    data.name = "joker"; 
    cout<<"\n"<<data.roll;
    cout<<"\n"<<data.name;

}