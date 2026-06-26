#include<iostream>

using namespace std ;

class myStack{

    int *arr;
    int capacity;
    int top;

    public:
    myStack(int cpacity){
        this->capacity = capacity;
        arr = new int[capacity];
        top =-1;

    }
    bool push(int val){
        if(top == capacity -1 ){
            cout << " stack is full ans cannot be pushed  ";
            return false ;}
        else {
            top = top +1 ;
            arr[top] = val;

            return true ;

        }
        
    }
    bool pop(){
        if(top == -1 ){
            cout << " stack is empty and cannot be poped ";
            return false  ;}
        else {
            top--;
            cout << "stack is poped "; 
            return true ;
        }

    }
    int top(){
        if(top == -1){
            cout<< " stack is empty";
            return -1;
        }
        else {
            cout<<"top element is " + arr[top] << endl;

            return arr[top];
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true ;

        }
        else return false ;
    }
    bool isFull(){
        if(top == capacity -1 ){
            return true ;

        }
        else return  false ;

    }

};

int main(){
    myStack st(4);
    st.push(5);
    st.push(10);
    st.pop();
    
}