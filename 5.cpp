#include<stack>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    stack <int>stack1;
    
    stack1.push(3);
    stack1.push(5);
    stack1.push(234);

    stack <int>stack2(stack1);
    while(!stack2.empty())
    {
        cout<<stack2.top()<<endl;
        stack2.pop();
    }
    return 0;
}