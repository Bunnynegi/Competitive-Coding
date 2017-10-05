//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"


using namespace std;

typedef long long ll;

ll dis(ll a[],ll i,ll x,ll y,ll n)
{
    for(int m=i;m<n;m++)
    {
        if(a[m]==x)return 1;
        if(a[m]==y)return 2;
    }
    return 2;
}


int main()
{
	fast;
	int t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll x=-1,y=-1,c=0;
        for(int i=0;i<n;i++)
        {
            if(x==a[i]||y==a[i])
                continue;
            if (dis(a,i+1,x,y,n)==2)
            {
                x=a[i];
                c++;
            }
            else{
                y=a[i];
                c++;
            }

        }


        cout<<c<<endll;
    }



	return 0;
}









