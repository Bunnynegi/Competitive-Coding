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
		ll n,m,i,j,c=0;
		string s,s1;
		cin>>n>>m;
		ll l[n+1][m+1];
		cin>>s>>s1;
		ll a[n]={0},b[m]={0};
		vector<char>v;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			{
				if(i==0 || j==0)l[i][j]=0;
				else if(s[i-1]==s1[j-1])l[i][j]=l[i-1][j-1]+1;
				else l[i][j]=max(l[i-1][j],l[i][j-1]);
			}
		}

             int q=l[n][m];
           i = n, j = m;
           while (i > 0 && j > 0)
           {

              if (s[i-1] == s1[j-1])
              {
                a[i-1]++;b[j-1]++;
                  i--; j--;
              }

              else if(l[i-1][j]>l[i][j-1])i--;
              else j--;
           }

		j=0,i=0;
		while(q&&i<n&&j<m)
		{
			if(a[i]==1 && b[j]==0)
			{
				v.push_back(s1[j]);
				j++;
			}
			if(a[i]==0 && b[j]==1)
			{
				v.push_back(s[i]);
				i++;
			}
			if(a[i]==1 && b[j]==1)
			{
				v.push_back(s[i]);
				v.push_back(s1[j]);
				i++;j++;q--;
			}
			if(a[i]==0 && b[j]==0)
			{
				v.push_back(s[i]);
				v.push_back(s1[j]);
				i++;j++;
			}
		}
		if(i<n)for(int k=i;k<n;k++)v.push_back(s[k]);
		if(j<m)for(int k=j;k<m;k++)v.push_back(s1[k]);
		for(i=1;i<n+m;i++)
			if(v[i]!=v[i-1])c++;
        cout<<c+1<<endl;
	}
	return 0;
}




