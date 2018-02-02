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
inline ll nxt(){ ll x; cin>>x; return x;}
int main(){
	vector<ll> a;
	ll k=nxt();
	ll i=0,c=0;
	while(1){
		ll sum=++i,s=0;
		while(sum){
			s+=sum%10;
			sum/=10;
		}
		if(s==10){
			a.pb(i);
			c++;
		}
			//cout<<i<<endl;
		if(c==k){
			break;
		}
	}
	cout<<a[k-1]<<endl;
}




