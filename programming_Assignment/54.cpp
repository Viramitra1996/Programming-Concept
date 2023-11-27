#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class A
{
public:
        class B
{};
};
int main() 
{
    A::B obj;
    vector <int>v1;
    
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(30);
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);
    v1.push_back(90);
    v1.push_back(100);
    
    
      for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<"   ";
    cout<<endl;
    vector<int>::iterator itr;
    
    for(itr=v1.begin(); itr!=v1.end(); itr++)
      cout<<*itr<<"   ";
      cout<<endl;
      
   int n, m;
    cout<<"Enter Two Value : "<<endl;
    cin>>n>>m;
     v1.push_back(n);
     v1.push_back(m);
     for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<"   ";
    cout<<endl;
    
    for(itr=v1.begin(); itr!=v1.end(); itr++)
      cout<<*itr<<"   ";
      cout<<endl;
  
      
      v1.pop_back();
      v1.pop_back();
      cout<<"  Removed Last Two Value :"<<endl;
    for (auto itr = v1.begin(); itr != v1.end();
         ++itr)
        cout << ' ' << *itr;
        cout<<endl; 
      return 0;
}
