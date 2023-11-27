#include<iostream>
using namespace std;

/*Multiply 
*/


int Multiply(int a=1,int b=1, int c=1, int d=1)
{
  return a*b*c*d;
}
  
int main()
{
 int a,b,c,d;
 
    cout<<"Multiply is ="<<endl;
    cout<<Multiply(3,4,5,6)<<endl;
    cout<<Multiply(3,4,5)<<endl;
    cout<<Multiply(3,4)<<endl;
    return 0;
}
