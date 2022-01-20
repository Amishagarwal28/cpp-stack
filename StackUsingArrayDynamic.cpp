#include<climits>
template <typename T>
class StackUsingArray
{
  T *data;
  int nextindex;
  int capacity;
public:
  StackUsingArray()
  {
    data=new T[4];
    nextindex=0;
    capacity=4;
  }
  int size()
  {
    return nextindex;
  }
  bool isEmpty()
  {
    return nextindex==0;
  }
  void push(T element)
  {
    if(nextindex==capacity)
    {
      T *newData=new T[2*capacity];
      for (int i = 0; i < capacity; i++) {
        newData[i]=data[i];
      }
      capacity*=2;
      delete [] data;
      data=newData;

    }
    data[nextindex]=element;
    nextindex++;
  }
  T pop()
  {
    if(nextindex==0)
    {
      cout<<"stack is empty";
      return 0;
    }
    nextindex--;
    return data[nextindex];
  }
  T top()
  {
    if(isEmpty())
    {
      cout<<"stack is empty";
      return 0;
    }
    return data[nextindex-1];
  }

};
