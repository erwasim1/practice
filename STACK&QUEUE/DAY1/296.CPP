#include <iostream>
using namespace std;
#define n 5

class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack in overflow";
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is in underflow";
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"underflow";
        }
        return arr[top];
    }
    
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
     bool isFull(){
        if(top==n-1){
            return true;
        }
        return false;
    }
    
};


int main() {
	cout<<"stack complete implementaion"<<endl;
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	cout<<endl;
	cout<<st.Top();
		cout<<endl;
	cout<<st.isEmpty();
		cout<<endl;
	cout<<st.isFull();
	st.pop();
	cout<<endl;
	cout<<st.Top();
	return 0;
}