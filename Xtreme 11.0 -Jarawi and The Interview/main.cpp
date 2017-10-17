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

#include<bits/stdc++.h>

int max(int a, int b);


ll lcs( string X, string Y, ll m, ll n )
{
   ll l=0,c=0;
   for(ll i=0;i<n;i++)
    for(int j=l;j<m;j++)
   {
        if(Y[i]==X[j])
        {c++;l=j+1;
            if(l==m)
                return c;
            else break;

        }

           }
   return c;

}





int main()
{
  string X,Y;
  cin>>X;
  ll m=X.length();
 reverse(X.begin(),X.end());
  ll q;cin>>q;
  while(q--)
  {
      cin>>Y;
      ll n=Y.length();
      reverse(Y.begin(),Y.end());
      cout<<lcs( X, Y, m, n )<<endll;
  }

  return 0;
}

