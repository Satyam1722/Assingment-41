#include<stack>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    stack <int>s;
    
    s.push(3);
    s.push(5);
    s.push(234);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}