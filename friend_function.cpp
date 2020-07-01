#include<iostream>
using namespace std;
class Distance
{
    private:
    int meter;
    int km;
    public:
    Distance(int m , int k)
    {
        meter=m;
        km=k;
    }
    void display()
    {
        cout<<"Meter :"<<meter <<" "<<"KM : "<<km<<endl;
    }
    friend Distance modify();
};

Distance modify()
{
Distance obj(200,34);
obj.meter=500;
obj.km=200;
return obj;
}

int main()
{
    Distance obj=modify();
    obj.display();
}