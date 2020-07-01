
// Copy constructor is used to create new copy with help of existing objects

// copy constuctor should get called in 4 schenario:
//1. When we are creating new objects by passing argumets with existig object 
//2. While creating the new object we are assiging with existing object
//3. When we are passing any object by value to the funtion argument
//4. When a function return the object by value
#include<iostream>
using namespace std;
class Employee
{
  public:
     int hour;
     int rate;
  public:
  Employee(int h,int r)
  {
      hour=h;
      rate=r;
  }
  Employee (const Employee &obj)  //copy constructor
  {
      hour=obj.hour;
      rate=obj.rate;
  }
  float getSalary()
  {
      return hour*rate;
  }
  Employee getInstance()//copy Constructor get called
  {
      return *this;
  }
};

void display(Employee obj) //copy constructor should be called
{
    cout<<"Hour :"<<obj.hour<<"    rate :"<<obj.rate<<endl;
}
int main()
{
  Employee neeru(160,800);
  cout<<"neeru salary: " <<neeru.getSalary()<<endl;
  Employee pinki(neeru); //When creating a new object by passing old object as argument then copy constructor is called 
  cout<<"pinky salary: " <<pinki.getSalary()<<endl;
  Employee amit = neeru;//Creating new object by assigning existing object then copy constructor get called
  cout<<"amit salary: " <<amit.getSalary()<<endl;
  display(amit);
  return 0;
}