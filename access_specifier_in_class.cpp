#include <iostream>
using namespace std;
class Emp
{
protected:
    int salary;
};
class Uid : public Emp
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    };
    int getSalary()
    {
        return salary;
    };
};
int main()
{
    Uid s1;
    s1.setSalary(10000);
    // s1.
    cout<<"\n"<<s1.getSalary()<<"\n";
}