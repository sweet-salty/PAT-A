#include<bits/stdc++.h>
using namespace std;

const int maxn=10;
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int a,b,c,i=0;
    bool flag;
    string str;
    int ans[maxn];
    cin>>a>>b;
    c=a+b;
    if(c<0){
        flag=false;
        c=-1*c;
    }
    else
        flag=true;
    if(c==0)
    {
        cout<<c<<endl;
        return 0;
    }
    while(c!=0)
    {
        ans[i++]=c%10;
        c/=10;
    }
    if(!flag)
        str+='-';
    for(int j=i-1;j>=0;j--)
    {
        str+='0'+ans[j];
        if(j%3==0&&j!=0)
        {
            str+=',';
        }
    }
    cout<<str<<endl;
    return 0;
}
