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
	ll n,y,sum=0,m,x;
	cin>>n;m=n;
	ll a[n]={0};
	cin>>y;
	REP(i,0,n)
	{
	    cin>>x;
	    sum+=x/(m--);
	}
	sum+=y;
	if(sum==0)cout<<"0 0";
	if(sum=abs(sum))
        cout<<"1 -1";
    else cout<<"-1 1";



	return 0;
}




