//https://www.codechef.com/OCT17/problems/CHEFGP
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

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


string add(string a,int n)
{
    string ans = "";
    for(int i = 0;i<n;i++)
        ans+=a;
    return ans;
}
int up(int x, int y)
{
    return ceil(floor(x)/floor(y));
}
int main()
{
    fast;
    int test=1;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int x,y;
        cin>>x>>y;
        int a = 0, b = 0;
        for(auto i:s)
        {
            if(i=='a')
                a++;
            else
                b++;
        }
        int n1 = up(a,x);
        int n2 = up(b,y);
        string ans = "";
        if(n1 > n2)
        {
            for(int i = n1;i>1;i--)
            {
                ans+=add("a",min(x,a));
                a-=min(a,x);
                if(i-1 > up(b,y))
                {
                    if(b>0)
                        ans+=add("b",1),b--;
                    else
                        ans+=add("*",1);
                }
                else
                {
                    ans+=add("b",min(y,b));
                    b -= min(b,y);
                }
            }
            ans +=add("a",min(a,x));

        }
        else if(n1 < n2)
        {
            //cout<<2<<endl;
            for(int i = n2;i>1;i--)
            {
                ans+=add("b",min(y,b));
                b-=min(y,b);
                if(i-1 > up(a,x))
                {
                    if(a>0)
                        ans+=add("a",1),a--;
                    else
                        ans+=add("*",1);
                }
                else
                {
                    ans+=add("a",min(x,a));
                    a -= min(a,x);
                }
            }
            ans +=add("b",min(b,y));

        }
        else
        {
            for(int i = 0;i<n1;i++)
                ans += add("a",min(x,a)),ans+=add("b",min(y,b)),a-=min(a,x),b-=min(b,y);
        }
        cout<<ans<<endl;
    }
    return 0;

}





