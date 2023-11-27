#include<iostream>
using namespace std;

class Array
{
  int size;
  int *arr;
  
public:
        Array();
        Array(int);
        void Accept();
        void Display();
        ~Array();
        Array(Array&);
};
Array::Array(Array &a)  //Array a3(a2)
{
    size=a.size;
    arr=new int[size];
    for(int i=0; i<size; i++)
        arr[i]=a.arr[i];
}

Array::Array()
{
      size=5;
      arr=new int[size];
      for(int i=0; i<size; i++)
            arr[i]=0;
}

Array::Array(int s)
{
      size=s;
      arr=new int[size];
      for(int i=0; i<size; i++)
      arr[i]=0;
}

void Array::Accept()
{
      cout<<"Enter Elements"<<endl;
      for(int i=0; i<size; i++)
          cin>>arr[i];
}
void Array::Display()
{
      for(int i=0; i<size; i++)
          cout<<arr[i]<<"   ";
          cout<<endl;
}
Array::~Array()
{
    delete []arr;
}
  

int main()

{
      Array a1;
      Array a2(6);
      a1.Accept();
      a1.Display();
      a2.Accept();
      a2.Display();
      Array a3(a2);
      a3.Display();
      return 0;

}
