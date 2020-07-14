#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
     freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int k,a,m=0;
    double b;
    map<int,double> mp;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        mp[a]=b;
        if(m<a)
            m=a;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        if(mp.count(a))
        {
            mp[a]+=b;
        }
        else
            mp[a]=b;
        if(mp[a]==0)
            mp.erase(a);//ÏµÊýÎª0
        if(m<a)
            m=a;
    }
    cout<<mp.size();
    for(auto it=mp.rbegin();it!=mp.rend();it++)
    {
        printf(" %d %.1f",it->first,it->second);
    }
    cout<<endl;
    return 0;
}
