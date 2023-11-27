/*Write a program to accept marks of a student in ‘n’ subjects. Allocate the space for the array of
marks dynamically. Display average of marks. Use cin, cout, new, delete. */
#include<iostream>
using namespace std;

int main()
{
int i;
int n;
cout<<"Enter the number of subjects"<<endl;
cin>>n;
int *p=new int[n];

cout<<"Enter Marks of Each  Subject"<<endl;
for (i=0; i<n; i++)

cin>>p[i];
float sum = 0;
for(i=0;i<n;i++) sum+= p[i];
cout<<"Average of All the Subject="<<sum / float(n)<<endl;
delete []p;
cout<<endl;
return 0;

}
