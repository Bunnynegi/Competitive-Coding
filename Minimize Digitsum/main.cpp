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
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long ll;



ll sum(ll n)
{
    ll ans=0ll;
    while(n>0){
        ans+=(n%10ll);
        n/=10ll;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        vector<ll> a;
        a.push_back(n);
        ll node=n,index=0;
        for(int i=1;i<=15;i++)
        {
            int size=a.size();
            for(int j=pow(2,i-1)-1;j<size;j++)
            {
                ll p=sum(a[j]), q=a[j]+d;
                if(node > p || node > q)
                {
                    node=min(p,q);
                    index=i;
                    //cout<<index<<" ";
                }
                a.push_back(p),a.push_back(q);
            }
        }

        //cout<<endl;
        /*for(auto i=a.begin();i!=a.end();++i)
            cout<<*i<<" ";*/
        cout<<node<<" "<<index<<endl;
    }
    return 0;
}





