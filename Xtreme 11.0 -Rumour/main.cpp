#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL x,y; cin>>x>>y;
        LL l1=log2(x), l2=log2(y);
        LL count=0;
        while(true)
        {
            if(l1==l2)
            {
                if(x==y)
                {
                    cout<<count<<"\n";
                    break;
                }
                else
                {
                    if(x%2==0)
                    {
                        x=x/2;
                        count++;
                        if(y%2==0)
                        {
                            y=y/2;
                            count++;
                        }
                        else
                        {
                            y=(y-1)/2;
                            count++;
                        }
                    }
                    else
                    {
                        x=(x-1)/2;
                        count++;
                        if(y%2==0)
                        {
                            y=y/2;
                            count++;
                        }
                        else
                        {
                            y=(y-1)/2;
                            count++;
                        }
                    }
                }
            }
            if(l1>l2)
            {
                F(i,0,l1-l2)
                {
                    if(x%2==0)
                    {
                        x=x/2;
                    }
                    else
                    {
                        x=(x-1)/2;
                    }
                    count++;
                    l1--;
                }
            }
            else
            {
                F(i,0,l2-l1)
                {
                    if(y%2==0)
                    {
                        y=y/2;
                    }
                    else
                    {
                        y=(y-1)/2;
                    }
                    count++;
                    l2--;
                }
            }
        }
	}
	return 0;
}
