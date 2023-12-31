#include <bits/stdc++.h>
#include<cstdlib>
#include<iostream>
using namespace std;


//Queue using the classes
#define SIZE 1000

class Queue
{
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    Queue( int size = SIZE);
    ~Queue();
    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};


Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear=-1;
    count=0;
}

Queue::~Queue()
{
    delete[] arr;
}

int Queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Underflow";
        exit(EXIT_FAILURE);
    }

    int x = arr[front];
    cout<<"REmoving "<< x <<endl;
    front= (front+1)%capacity;
    count--;
    return x;
}

void Queue::enqueue(int x)
{
    if(isFull)
    {
        cout<<"Overflow";
        exit(EXIT_FAILURE);
    }
    cout<<"Inserting"<<x<<endl;
    rear = (rear+1)%capacity;
    arr[rear]=x;
    count++;
}

int Queue::peek()
{
    if(isEmpty())
    {
        cout<<"Underflow";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

int Queue::size()
{
    return count;
}

bool Queue::isEmpty()
{
    return (size()==0);
}

bool Queue::isFull()
{
    return (size() == capacity);
}

//End of Queue using classes


//STL Queue

int main()
{
    queue<string> q;
    
    q.push("A");
    q.push("B");
    q.push("C");

    cout<<"The queue size is "<< q.size() << endl;

    cout<<"The front element is "<< q.front() <<endl;

    cout<<"The rear element is "<< q.back() <<endl;

    q.pop();
    q.pop();

    cout<<"The queue size is "<< q.size() <<endl;

    if(q.empty())
        cout<<"The queue is empty"<<endl;
    else
        cout<<"The queue is not empty"<<endl;
    
    return 0;
}


//Linked List

