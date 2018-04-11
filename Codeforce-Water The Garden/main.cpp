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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,k,c=0,x;
        cin>>n>>k;
        ll a[n+2]={0};
        for(int i=1;i<=k;i++)
        {
            cin>>x;
            a[x]++;
            c++;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=0)
            {
                if(a[i-1]==0)
                {
                    a[i-1]=1;
                    if(a[i+1]==0)
                    {
                        a[i+1]=1;
                    }
                    c++;
                }

            }
        }
        cout<<c;
    }



	return 0;
}




