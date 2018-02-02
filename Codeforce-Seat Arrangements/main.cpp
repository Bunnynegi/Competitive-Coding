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
    int n,p,m;
	cin>>n>>m>>p;
	char s[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
		}
	}
	int cnt=0;

	for(int i=1;i<=n;i++)
    {
		int tcnt=0;
		int k=1;
		while(k<=m)
		{
			if(s[i][k]=='*' || k==m)
            {
				if(k==m && s[i][k]=='.')tcnt++;
				if(tcnt>=p)
				{cnt=cnt+tcnt-p+1;}
				k++;
				tcnt=0;
			}
			else if(s[i][k]=='.'){tcnt++;
				k++;}
        }

	}
	if(p>1)
    {
        for(int i=1;i<=m;i++){
		int tcnt=0;
		int k=1;
		while(k<=n)
        {
			if(s[k][i]=='*' || k==n){
				if(s[k][i]=='.' && k==n){tcnt++;}
				if(tcnt>=p){cnt=cnt+tcnt-p+1;}
				tcnt=0;
				k++;}
			else if(s[k][i]=='.'){tcnt++;
            k++;}
		}
    }}
	cout<<cnt;
	return 0;
}


