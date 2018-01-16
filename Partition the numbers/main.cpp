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
	fast;ll t;
    cin>>t;
	while(t--)
	{
	    ll arr[100000]={0},n,k,sum,s=0,i;
		cin>>k>>n;
		sum=(n*(n+1))/2-k;
		if(sum%2!=0 || n<4)cout<<"impossible"<<endll;
		else
		{
			arr [k]=2;
            for(i=n;i>=1;i--)
			{   if(s+i<=sum/2&&i!=k)s=s+i,arr[i]=1;
				if(s==sum/2)
                    break;
			}
			for(i=1;i<=n;i++)cout<<arr[i];
			cout<<endll;
		}
	}
	return 0;



}




