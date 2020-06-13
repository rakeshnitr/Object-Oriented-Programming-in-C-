/*
A class is a user defined blueprint or prototype from which objects are created. 
It represents the set of properties or methods that are common to all objects of one type.
Class have data members and methods.  
  */
#include<iostream>
using namespace std;
class Employee                    //Class Syntax
{
  public:                             // Access specifier
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
