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
    {   ll n,x,flag=0,sum=0,res=0;
        cin>>n;
        ll a[n][n]={0};
        REP(i,0,n)
        {
            REP(j,0,n){cin>>x;a[i][j]=x;}
            sort(a[i],a[i]+n);
        }
        if(n==1)cout<<a[0][0]<<endll;
        for(int i=n-2;i>=0;i--)
        {
            if(flag==0){
            if(i==n-2)res=a[n-1][n-1],sum+=a[n-1][n-1];
            for(int j=n-1;j>=0;j--)
            {
                if(a[i][j]<res){sum+=a[i][j];res=a[i][j];break;}
                if(j==0&&a[i][j]>res)cout<<"-1"<<endll,flag=1;

            }

            }
        }
        if(flag==0&&n!=1)cout<<sum<<endll;




    }




	return 0;
}



