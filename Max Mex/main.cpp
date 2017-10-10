#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (long long i = a; i < b; i++)
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
        ll n,k,x;
        cin>>n>>k;
        double a[200001];
        memset(a, 0, sizeof(a));
        REP(i,0,n)
        {
            cin>>x;
            a[x]++;
        }
        ll l=0;
            REP(i,0,200001)
            {
                if(a[i]==0){
                   if(k>0)
                {
                    a[i]==1;
                    k--;
                }
                else
                {
                    l=i;
                    break;
                }
                }

            }

      cout<<l<<endll;
    }



	return 0;
}

