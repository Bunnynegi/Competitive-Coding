//https://www.codechef.com/SEPT17/problems/MINPERM
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

int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(i%2!=0)
                    cout<<i+1<<" ";
                else
                    cout<<i-1<<" ";
            }
            cout<<endll;
        }
        else
        {
            int i;
            for( i=1;i<=n-3;i++)
            {
                if(i%2!=0)
                    cout<<i+1<<" ";
                else
                    cout<<i-1<<" ";
            }
            cout<<i+1<<" "<<i+2<<" "<<i<<endll;


        }
    }


	return 0;
}




