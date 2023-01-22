#include<stack>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

void back_button(stack<int> &s)
{
    s.pop();
}

int main()
{
    stack <int>s;
    
    s.push(3);
    s.push(1);
    s.push(234);
    s.push(23);
    s.push(3);
    
    cout<<"top elemnt of stack is : "<<s.top()<<endl;
    back_button(s);
    cout<<"top elemtn of stack is : "<<s.top()<<endl;

    return 0;
}