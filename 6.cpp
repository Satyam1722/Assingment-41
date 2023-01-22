#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="I Love To Code";
    stack <char>st;
    
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }

    while(!s.empty())
    {
        cout<<st.top();
        st.pop();
    }

    return 0;
}