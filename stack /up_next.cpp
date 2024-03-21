#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x = n;
    while (x--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans(n, -1);
    stack<pair<int,int>> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push({v[i],i});
            continue;
        }

        while (!st.empty() && st.top().first < v[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top().second;
            // for(int x = 0; x< n; x++){
            //     if(st.top()==v[x]) ans[i]=x; 
            // }
        }
        st.push({v[i],i});

    }

    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
