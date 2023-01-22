#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int>v={4,5,2,25};
    stack <int>s;
    vector <int>ans(v.size());

    for(int i=v.size()-1;i>=0;i--)
    {
        if(s.empty()){
        ans[i]=-1;
        s.push(v[i]);
        }
        else if(s.top()>v[i]){
        ans[i]=s.top();
        s.push(v[i]);
        }
        else
        {
            while(!s.empty()&&s.top()<=v[i])
            {
            s.pop();
            }
            ans[i]=s.top();
            s.push(v[i]);
        }

    }

    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    
    return 0;

}