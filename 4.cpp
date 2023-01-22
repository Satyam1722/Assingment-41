#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="I Love To Code";
    stack <string>st;
    string temp="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '){
        st.push(temp);
        temp.erase();
        }
        else
        temp+=s[i];
    }

    st.push(temp);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}