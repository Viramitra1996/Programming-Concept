#include<iostream>
using namespace std;

int mul(int a, int b, int c = 1, int d = 1, int e = 1){
    return a*b*c*d*e;
}

int main(){
    int a, b, c, d, e;
    cout<<"Enter five values: ";
    cin>>a>>b>>c>>d>>e;
    cout<<"Multiplication upto 5 numbers: "<<mul(a, b, c, d, e)<<endl;
    cout<<"Multiplication upto 4 numbers: "<<mul(a, b, c, d)<<endl;
    cout<<"Multiplication upto 3 numbers: "<<mul(a, b, c)<<endl;
    cout<<"Multiplication upto 2 numbers: "<<mul(a, b)<<endl;

    return 0;
}
