#include<iostream>
using namespace std;

int add(int a, int b )
{
    return a+b;
}
float  add(float a, float b )
{
    return a+b;
}
double add(double a, double b )
{
    return a+b;
}
  int main()
{ 
  int a,b;
  float c,d;
  double e,f;
  cout<<"Enter 1st integer number"<<endl;
  cin>>a;
  cout<<"Enter 2nd integer number"<<endl;
  cin>>b;
  cout<<"Addition of integer number = "<<add(a,b)<<endl;
  cout<<"Enter 1st float number"<<endl;
  cin>>c;
  cout<<"Enter 2nd float number"<<endl;
  cin>>d;
  cout<<"Addition of float number = "<<add(c,d)<<endl;
  cout<<"Enter 1st double number"<<endl;
  cin>>e;
  cout<<"Enter 2nd double number"<<endl;
  cin>>f;
  cout<<"Addition of double number = "<<add(e,f)<<endl;



return 0;
}
