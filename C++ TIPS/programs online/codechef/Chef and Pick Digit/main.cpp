//https://www.codechef.com/SEPT17/problems/CHEFPDIG
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
        string s;
        ll a[10]={0};
        cin>>s;
        for(double i=0;i<s.length();i++)
        {
            a[s[i]-'0']++;

        }

           if(a[6]>0)
            {
                  int var=60;
                for(int i=5;i<10;i++)
                {

                    if(i==6)
                    {

                            if(a[i]>1)
                                cout<<(char)(var+i);
                    }
                    else{
                    if(a[i]>0)
                        cout<<(char)(var+i);
                    }
                }
            }
            if(a[7]>0)
            {
                  int var=70;
                for(int i=0;i<10;i++)
                {

                    if(i==7)
                    {

                            if(a[i]>1)
                                cout<<(char)(var+i);
                    }
                    else{
                    if(a[i]>0)
                        cout<<(char)(var+i);
                    }
                }
            }

          if(a[8]>0)
            {
                  int var=80;
                for(int i=0;i<10;i++)
                {

                    if(i==8)
                    {

                            if(a[i]>1)
                                cout<<(char)(var+i);
                    }
                    else{
                    if(a[i]>0)
                        cout<<(char)(var+i);
                    }
                }
            }


            if(a[9]>0 && a[0]>0)
                cout<<(char)90;
            cout<<endll;



    }

    return 0;
}
