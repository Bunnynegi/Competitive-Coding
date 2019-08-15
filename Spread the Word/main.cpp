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




int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,x,s=0;
        cin>>n;
        vector<ll> summ;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.pb(x);
            s+=x;
            summ.pb(s);
        }
        ll index=0;
        ll val=0,res=0;
        ll i;
        for( i=0;i<n;i++)
        {
            //cout<<"i: "<<i<<" ";

            if(val<=n)
            {
                res=i;
                val=summ[i];
                index++;
                i=i+val-1;
                //cout<<" val: "<<val<<" index: "<<index<<" "<<endl;
            }


        }
        //cout<<res<<endl;
        if(res+1<n)cout<<index<<endl;
        else cout<<index-1<<endl;
    }



	return 0;
}




