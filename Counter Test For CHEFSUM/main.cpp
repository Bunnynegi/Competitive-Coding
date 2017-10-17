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


int main()
{
	fast;
	ll t; cin>>t;
	while(t--)
	{
        ll n;
		cin>>n;
        ll a[n]={0};
        ll first=4294967295/(n+1);
        ll cycle=4294967295%(n+1);
        a[0]=first+cycle/2+1;
		cout<<a[0]<<" ";
        REP(i,1,n)cout<<first<<" ";
        cout<<endll;
    }
    	return 0;
}













