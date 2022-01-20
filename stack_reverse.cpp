#include<iostream>
using namespace std;
#include<stack>
int reversestack(stack<int> &input,stack<int> &extra)
{
  if(input.size()==0||input.size()==1)
  return 0;
  int a=input.top();
  input.pop();
  reversestack(input,extra);
  while(input.size()!=0)
  {
    int c=input.top();

    extra.push(c);
    input.pop();


  }
  input.push(a);
  while(input.size()!=0)
  {
    int b=extra.top();
input.push(b);
    extra.pop();

  }
  return 0;
}
int main()
{
  stack<int> input;
  stack<int> extra;
  input.push(1);
  input.push(2);
  input.push(3);
  input.push(4);
  input.push(5);
  reversestack(input,extra);
  input.top();
  input.top();
  input.top();
  input.top();
  input.top();
  return 0;

}
