#include<iostream>
using namespace std;
#include "StackUsingArrayDynamic.cpp"

int main()
{
  StackUsingArray<char> s;
  s.push(100);
  s.push(107);
  s.push(88);
  s.push(48);
  s.push(50);
  cout<<s.top()<<endl;
  cout<<s.pop()<<endl;cout<<s.pop()<<endl;cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.isEmpty()<<endl;

}
