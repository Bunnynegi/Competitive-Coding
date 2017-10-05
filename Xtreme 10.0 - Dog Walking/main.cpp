//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"


using namespace std;

typedef long long ll;

int main()
{
	fast;
	int t;
	cin>>t;

	while(t--)
    {
        ll n,k,b,sum=0,m;
        cin>>n>>k;
        vector<ll>dog,cost;
        m=n;
        while(m--)
        {
            cin>>b;
            dog.PB(b);
            //cout<<dog[n];
        }
        sort(dog.begin(),dog.end());
        for(int i=1;i<n;i++)
        {
            cost.PB(dog[i]-dog[i-1]);
        }
        sort(cost.begin(),cost.end());
        for(int i=0;i<n-k;i++)
        {//cout<<cost[i]<<" ";
            sum+=cost[i];
        }

        cout<<sum<<endll;

    }



	return 0;
}




