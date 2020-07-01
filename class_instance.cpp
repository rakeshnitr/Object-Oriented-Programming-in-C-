#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    int salary;
    public:
    int getSalary()
    {
      return 70000;
    }
    
   void employeeDetails()
    {
        cout<<"Employee Name ::"<<"Rakesh"<<endl; 
    }
};
int main()
{
    Employee emp;
    cout<<emp.getSalary()<<endl;
    //cout<<emp.employeeDetails()<<endl;
    return 0;
}
