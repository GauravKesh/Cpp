#include<iostream>
using namespace std;
        /*

            The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

            Why Encapsulation?
               @->  It is considered good practice to declare your class         attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
               
               @->  Increased security of data

        */
class Enc{
    private:
                    // **** PRIVATE ATTRIBUTES ****
        int salary;
        // int y;

    public:
                     // ***** PUBLIC ATTRIBUTES *****
        // setters
        // using this function setSalary() the user can alter the data or value of  private attributes
        void setSalary(int s){
            salary = s;
        }
        //getters 
        //using the function getSalary() this  will be used to return private data publicly to users .
        int getSalary(){
            return salary;

        }

};
int main(){
    Enc s1;
    // so the setSalary() function will store the salary data in private;
    s1.setSalary(89778); 
    //to access the salary data of user we'll use getSalary() function which will return the salary from private which is defined inside the class in public  as public attributes to access private data .
    cout<<s1.getSalary();
}