/*Implement function “Swap” to swap to integers. Use call by reference.*/
#include<iostream>
using namespace std;
void swap(int &pa,int &pb)
{
int temp;
temp=pa;
pa=pb;
pb=temp;
}



int main()
{
int a=0, b=0;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter Second number"<<endl;
cin>>b;
swap(a,b);

cout<<"First Swap number is="<<a<<endl;
cout<<"Second Swap number is="<<b<<endl;
return 0;
}

