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
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
       ll n,x;
       cin>>n;
       v a;
       v b;
       for(ll i=0;i<n;i++)
       {
           cin>>x;
           a.pb(x);
       }
       for(ll i=0;i<n;i++)
       {
           cin>>x;
           b.pb(x);
       }
       for(ll i=0;i<n;i++)
       {
           b[i]-=a[i];
           a[i]=0;

       }

       for(ll i=0;i<n-2;i++)
       {
           if(b[i]>0)
           {
               b[i+2]=b[i+2]-3*b[i];
               b[i+1]=b[i+1]-2*b[i];
               b[i]=0;
                if(b[i+2]<0 && b[i+1]<0 && b[i]<0)break;
            }
       }
       if(b[n-1]==0&&b[n-2]==0)cout<<"TAK"<<endl;
       else cout<<"NIE"<<endl;



    }



	return 0;
}




