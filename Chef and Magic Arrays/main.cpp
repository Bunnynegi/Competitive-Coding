//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define mp make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long ll;

int main()
{
	fast;
	ll t;cin>>t;
    while(t--)
	{
		ll n,x;
		cin>>n;
		ll mini[n]={0},maxi[n]={0};
		REP(i,0,n)
		{
		    cin>>x;
		    ll a[x]={0};
		    REP(j,0,x){cin>>a[j];}
            mini[i]=*min_element(a,a+x);
            maxi[i]=*max_element(a,a+x);
		}
		 ll diff[n-1]={0},sum=0;
    REP(i,0,n-1)
    {
        diff[i]=abs(mini[i]-maxi[i+1]);
        sum+=diff[i]*(i+1);
        cout<<sum<<endll;
    }
    }

	return 0;
}




