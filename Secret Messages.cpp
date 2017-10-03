//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/secret-messages/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,key,result;
	    cin>>n>>key;
	    ll k=key;
	    while(key>=26)
        {
             key%=26;
        }
        string s;
        cin>>s;
        ll len=s.length();
        for(ll i=0;i<len;i++)
        {
            if(isdigit(s[i]))
            {
               while(k>=10)
                {
                    k%=10;
                }
                result=s[i]-'0'+k;
                if(result>9)
                result-=10;
                printf("%d",result);
            }
            else
            {
            result=s[i]+key;
            if(isupper(s[i])&&(result>'Z'))
            {
                result-=26;
            }
            if(islower(s[i])&&(result>'z'))
            {
                 result-=26;
            }
            if(isalpha(s[i]))
            {
                printf("%c",result);
            }



            else
            {
            printf("%c",s[i]);
            }}


        }
        printf("\n");

	}



	return 0;
}




