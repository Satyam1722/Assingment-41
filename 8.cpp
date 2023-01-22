#include<stack>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    stack <int>s;
    
    s.push(3);
    s.push(1);
    s.push(234);
    s.push(23);
    s.push(3);
    
    stack <int>temp;


 while(!s.empty())
 {
    int t=s.top();
    s.pop();

    if(temp.empty())
    {
        temp.push(t);
    }
    else if(temp.top()>=t)
    {
        temp.push(t);
    }
    else
    {
        while(!temp.empty()&&temp.top()<t)
        {
            s.push(temp.top());
            temp.pop();
        }
        temp.push(t);
    }
 }

      while(!temp.empty())
      {
        s.push(temp.top());
        temp.pop();
      }

      while(!s.empty())
      {
        cout<<s.top()<<" ";
        s.pop();
      }

    return 0;
}