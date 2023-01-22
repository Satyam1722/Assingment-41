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

    cout<<"top element is : "<<s.top()<<endl;

 
    return 0;
}