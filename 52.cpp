#include<iostream>
using namespace std;

template<typename T>
class Stack {
    int size;
    T *arr;
    int top;
public:
    Stack();
    Stack(int);
    void push(T);
    T pop();
    int getSize();
    bool isFull();
    bool isEmpty();
};

template<typename T>
Stack<T>::Stack(){
    size = 5;
    arr = new T[size];
    top = -1;
}

template<typename T>
Stack<T>::Stack(int s){
    size = s;
    arr = new T[size];
    top = -1;
}

template<typename T>
void Stack<T>::push(T val){
    try{
        if(!isFull())
            arr[++top] = val;
        else
            throw 'O';
    }
    catch(char x){
        cout<<"Overflow: Stack size is full."<<endl;
    }
}

template<typename T>
T Stack<T>::pop(){
    try{
        if(!isEmpty())
            return arr[top--];
        else{
            throw 'U';
        }
    }
    catch(char x){
        cout<<"Underflow: Stack is empty."<<endl;
    }
}

template<typename T>
bool Stack<T>::isFull(){
    return (top == size - 1);
}

template<typename T>
bool Stack<T>::isEmpty(){
    return (top == - 1);
}

template<typename T>
int Stack<T>::getSize(){
    return top + 1;
}


int main(){
    Stack<int> s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    Stack<const char*> s2(3);
    s2.push("cisco");
    s2.push("ramon");
    s2.push("barracus");
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
}
