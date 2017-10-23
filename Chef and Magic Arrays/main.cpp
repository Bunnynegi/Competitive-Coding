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
    int t,n,m,a,i,j,k,f;
    scanf("%d",&t);
    while(t--)
    {
       //v.clear();
        //dp.clear();
        scanf("%d",&n);
        int siz[n];
        vector <vector<long> > v;
        vector <vector<long> > dp;
        for( i=0;i<n;i++)
        {
            scanf("%d",&m);
            siz[i]=m;
            vector<long> p(m,0);
            vector<long> b(m);
            for( j=0;j<m;j++)
            {
                scanf("%d",&b[j]);

            }
                v.push_back(b);
                dp.push_back(p);
            //v[i].push_back(b);

        }
        if(n==2)
        {
           long maxi1=*max_element(v[0].begin(),v[0].end());
           long mini1=*min_element(v[0].begin(),v[0].end());
           long maxi2=*max_element(v[1].begin(),v[1].end());
           long mini2=*min_element(v[1].begin(),v[1].end());
            cout<<max(abs(maxi2-mini1),abs(mini2-maxi1))<<"\n";
            continue;
        }
        for(i=1;i<n;i++)
        {
            m=siz[i];
            f=siz[i-1];
            for(j=0;j<m;j++)
            {
                dp[i][j]=max(dp[i][j],dp[i-1][0]+abs(v[i-1][f-1]-v[i][j])*i);
                for(k=1;k<f;k++)
                {
                    dp[i][j]=max(dp[i][j],dp[i-1][k]+abs(v[i-1][k-1]-v[i][j])*i);
                }
            }
        }
        cout<<*max_element(dp[n-1].begin(),dp[n-1].end())<<"\n";
    }
    return 0;
}





