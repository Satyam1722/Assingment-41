#include<stack>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    stack <int>s;
    
    //push function
    s.push(3);
    s.push(5);
    s.push(234);

    //peek function
    cout<<"top element is : "<<s.top()<<endl;

    //pop function
    cout<<"pop the top element : "<<endl;
    s.pop();

    //size function
    cout<<"size of stack is : "<<s.size()<<endl;
    
    //empty function 
    if(s.empty())
    cout<<"stack is empty "<<endl;
    else
    cout<<"stack is non-empty"<<endl;

    return 0;
}