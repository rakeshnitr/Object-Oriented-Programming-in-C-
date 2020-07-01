#include<iostream>
using namespace std;
class Employee
{
   public:
   int id;
   protected:
   int hour;
   int rate;
   public:
   Employee() {}
   Employee(int h, int r)
   {
       hour=h;
       rate=r;
   }
};

class SE : public Employee
{   
    public: 
    SE(int h, int r)
    {
        hour=h;
        rate=r;
    
    }
    float getSalary()
    {
        return hour*rate;
    }
};

class HR : public Employee
{
    private:
    int bonus;
      public:
      HR(int h,int r,int b)
      {
          hour=r;
          rate=r;
          bonus=b;
      }
      float getSalary()
      {
          return hour*rate+bonus;
      }
};

int main()
{
    SE* naman= new SE(200,400);
    cout<<"SE naman salary :"<<naman->getSalary()<<endl;
     HR* man= new HR(1,1,50000);
    cout<<"SE man salary :"<<man->getSalary()<<endl;
    return 0;
}