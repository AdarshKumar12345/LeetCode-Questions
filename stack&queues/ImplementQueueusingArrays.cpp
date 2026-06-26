#include<iostream>

using namespace std ;

class Queue {
    public :

    int arr[1000000];
    int front ;
    int rear ;

    Queue(){
        front = -1;
        rear = -1;

    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true ;
        }
        else return false;

    }
    bool isFull(){
        if(rear == INT_MAX -1 ){
            return true ;

        }
        else return false;

    }
    int getFront(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else{
            cout<< "Front element is " << arr[front] << endl;

            return arr[front ];


        }
    }

    int getRear(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;

        }
        else {
            cout << "Rear element is " << arr[rear] << endl;
            return arr[rear];
        }
    }
    void enqueue(int val ){
        if(isFull()){
            cout<< "Queue is full and cannot be enqueued" << endl;
            return ;
        }
        else if(isEmpty()){
            front =0;
            rear =0;
            arr[rear] = val;
            cout << "Enqueued element is " << val << endl;

        }
        else {
            rear++;
            arr[rear] = val;
            cout << "Enqueued element is " << val << endl;  
        }

    }
    int dequeue(){
        if(isEmpty()){
            cout << "Queue is empty and cannot be dequeued" << endl;
            return -1;
        }
        else if(front == rear){
            int val = arr[front];
            front = -1;
            rear = -1;
            cout << "Dequeued element is " << val << endl;
            return val;

        }
        else {
            int val = arr[front];
            front++;
            cout << "Dequeued element is " << val << endl;
            return val;

        }
    }
    void display( ){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return ;
        }
        else {
            cout << "Queue elements are : ";
            for(int i = front ; i <= rear ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
    }
}

};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    q.getFront();
    q.getRear();

    return 0;
}