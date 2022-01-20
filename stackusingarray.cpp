#include<climits>
class StackUsingArray
{
  int *data;
  int nextindex;
  int capacity;
public:
  StackUsingArray(int totalSize)
  {
    data=new int[totalSize];
    nextindex=0;
    capacity=totalSize;
  }
  int size()
  {
    return nextindex;
  }
  bool isEmpty()
  {
    return nextindex==0;
  }
  void push(int element)
  {
    if(nextindex==capacity)
    {
      cout<<"stack is full";
      return;
    }
    data[nextindex]=element;
    nextindex++;
  }
  int pop()
  {
    if(nextindex==0)
    {
      cout<<"stack is empty";
      return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
  }
  int top()
  {
    if(isEmpty())
    {
      cout<<"stack is empty";
      return INT_MIN;
    }
    return data[nextindex-1];
  }

};
