//NAME : BUNNY NEGI , PLACE : NEW DELHI
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
typedef long long ll;
typedef vector<ll> v;
typedef vector<v> vv;
typedef pair<ll,ll> P;


int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n,x,c=0;
    cin>>n;
    ll a[n+1]={0},f[n+1]={0};
    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=x;
        f[x]++;
    }
    for(ll i=1;i<=n;i++)
    {
        if(f[i]==0)
        {
            a[i]=0;
        }
    }
    ll ff[n+1]={0};
    for(ll i=1;i<=n;i++)
    {
        ff[a[i]]++;
    }
    for(ll i=1;i<=n;i++)
    {
        if(ff[i]>1)
        {
            c=1;
            break;
        }
    }
    if(c==1)cout<<"Truly Happy"<<endl;
    else cout<<"Poor Chef"<<endl;


}
	return 0;
}



