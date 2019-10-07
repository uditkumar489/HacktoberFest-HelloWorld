#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,m,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>m;
        map<long long int,long long int>p;
        map<long long int,long long int>::iterator it;
        while(m--)
        {
            cin>>a>>b>>c;
            if(a!=-1)
                ++p[a];
            if(b!=-1)
                ++p[b];
            if(c!=-1)
                ++p[c];
        }
        for(it=p.begin();it!=p.end();it++)
        {
            cout<<it->first<<" ";
        }
        cout<<endl;p.clear();
    }
    return 0;
}
