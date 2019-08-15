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

        ll n;
        cin>>n;
        if(n==1)cout<<"1 2 ";
        if(n==2)cout<<"1 4 ";
        if(n==3)cout<<"3 8 ";
        if(n==4)cout<<"4 16 ";
        if(n==5)cout<<"5 32 ";

    }



	return 0;
}




