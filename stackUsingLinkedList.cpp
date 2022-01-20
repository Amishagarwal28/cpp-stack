#include<iostream>
using namespace std;
template <typename T>
class Node{
public:
  int data;
  Node<T> *next;
  Node(T data)
  {
    this->data=data;
    next=NULL;
  }
};
template <typename T>
class Stack{
  T size;
  Node<T> *head;
public:
  Stack()
  {
    size=0;
    head=NULL;
  }
  int getSize()
  {
    return size;
  }

  bool isEmpty(){
    return size==0;
  }
  void push(T element)
  {
    Node<T> *newNode=new Node<T>(element);
     if(head==NULL)
    {head=newNode;
    size++;
  }
  else
    {newNode->next=head;
    head=newNode;
    size++;}
  }

  T pop()
  {
    if(head==NULL)
    {
    cout<<"stack is empty";
    return 0;
    }
    int ans=head->data;
    Node<T>*temp=head;
    head=head->next;
    delete temp;
    size--;
    return ans;
  }

  T top()
  {
    if(head==NULL)
    {
    cout<<"stack is empty";
    return 0;
    }
    return head->data;
  }
};
