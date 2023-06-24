#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<m[s]-1<<endl;
        }
    }
    return 0;
}
