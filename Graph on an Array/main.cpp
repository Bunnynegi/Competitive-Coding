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
        ll n;
        cin>>n;
        ll a[n]={0},b[51]={0};
        vector <ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;i<n;i++)
            {
                if(i!=j)
                {
                    if(__gcd(a[i],a[j])==1)
                        continue;
                }
                if(j==n-1){
                        cout<<"xxx";
                    a[i]=3;
                    v.pb(a[i]);}

            }
        }

        cout<<v.size()<<endl;
         for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;

}



