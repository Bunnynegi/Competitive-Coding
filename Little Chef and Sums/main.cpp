//https://www.codechef.com/SEPT17/problems/MINPERM
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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            {
                    cin>>a[i];
            }
        cout<<distance(a, min_element(a,a+n))+1<<endll;

    }




	return 0;
}




