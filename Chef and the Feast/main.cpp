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
	while (t--){
		ll n;cin>>n;
		ll ans=-1e18,a[100001],pre[100001];
		for (int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		for (int i=1;i<=n;i++)pre[i]=pre[i-1]+a[i];
		for (int i=0;i<=n;i++)
			ans=max(ans,pre[i]+(pre[n]-pre[i])*(n-i));
		cout<<ans<<endll;}

	return 0;
}




