#include<iostream>
using namespace std;
class Employee                    //Class Syntax
{
  public:
       employee_details()
       {
         cout<<"Employee Details like Name, Id, Salary"<<endl;
       }
  };
int main()
{
  Employee emp;
  emp.employee_details();
  return 0;
}