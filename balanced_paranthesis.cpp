#include<iostream>
using namespace std;
#include<stack>

int main()
{
  string s;
  stack<char> st;
  getline(cin,s);
  int l=s.size();
  for(int i=0;i<l;i++)
  {
    if(s[i]=='{')
      {
        st.push(s[i]);
      }
      if(s[i]=='}')
        {
          if(st.top()=='{')
          {
            st.pop();
          }
          else
          cout<< "false";
        }
  }
  if(st.empty())
  cout<< "true";
  else
  cout<< "false";

}
