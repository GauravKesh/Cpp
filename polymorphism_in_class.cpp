#include <iostream>
using namespace std;
    /*
        Polymorphism:
            • Ability of the same entity (function or operator) to behave differently in different
            scenarios
            • It enables to write code that can work with objects of multiple classes in a more
            general way.
            • It makes code reusable and easier to work with complex systems.
            • Two ways:
            • function overloading and
            • virtual functions
            Function Overloading → Recall !!!

        *************************************************************

                It is compile-time (static) polymorphism because the compiler determines
                which function to call based on the number and types of arguments passed
                during a function call.
                Conditions:
                • Parameters should have different types (e.g., int vs double)
                • Different number of parameters (e.g., two in one function, three in another)
                • Different sequence of parameters (e.g., int and double vs double and int)

        ************************************************************

        Virtual functions:
                • It is often associated with inheritance and class hierarchies
                • Dynamic polymorphism → the actual function called at runtime depends on the type
                of the object
                • It allows you to create a base class with virtual functions and then derive subclasses
                that override these functions
                • If a derived class is handled using a pointer or reference to the base class, a call to an
                overridden virtual function would invoke the behavior defined in the derived class.
                • Objects from different classes respond to the same message/command.
    */
class Animal
{
public:
    virtual void eat()
    {
        cout << "Eats everyything!!!!"
             << "\n";
    };
};

class Horse : public Animal
{
public:
    void eat() 
    {
        cout << "Eats grass !!!"
             << "\n";
    };
};

class Tiger : public Animal
{
public:
    void eat() 
    {
        cout << "Eats meat of Dog !!!"
             << "\n";
    };
};

void animalFood(Animal &animal)
{
    animal.eat();
};

void animalFood(Animal *animal){
    (*animal).eat();
}
int main()
{
    Horse horse;
    Tiger tiger;
    animalFood(horse);
    animalFood(tiger);
    cout<<"********************************\n";
    horse.eat();
    tiger.eat();
    cout<<"********************************\n";
    animalFood(&horse);
    animalFood(&tiger);

    return 0;
}