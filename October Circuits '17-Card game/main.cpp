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
    ll n,m,sum=0;
    cin>>n;ll a[n]={0};
    REP(i,0,n)cin>>a[i];
    sort(a,a+n);
    cin>>m;ll b[m]={0};
    REP(i,0,m)cin>>b[i];
    ll k=*max_element(b,b+m),c;
    k++;
    REP(i,0,n){
    if(a[i]<k)
    {
        c=k-a[i];
        sum+=c;
    }
    else break;
    }
    cout<<sum<<endll;

	return 0;
}




