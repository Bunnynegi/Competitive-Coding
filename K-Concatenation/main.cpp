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


    	ll n,k;
    	cin>>n>>k;
    	ll a[n],p=0;
    	ll b[n]={0},c[n]={0},flagneg=0,sum=0;
    	int maxi=INT_MIN;
    	for (int i = 0; i < n; i++){cin>>a[i];if(abs(a[i])!=a[i])flagneg=1;}
        if(k>1)
        {
            if(flagneg==0)
            {
                REP(i,0,n)sum+=a[i];
                cout<<sum*k<<endll;
            }
            else{           p++;
                            int max_so_far = INT_MIN, max_ending_here = 0;
                            for (int i = 0; i < n; i++)
                            {   max_ending_here = max_ending_here + a[i];
                                c[i]=max_ending_here;
                                maxi=max_so_far;
                        //       cout<<c[i]<<" ";
                                if (max_so_far < max_ending_here)
                                    max_so_far = max_ending_here;
                                if (max_ending_here < 0)
                                    max_ending_here = 0;

                            }
                          //  cout<<endll;
                            if(abs(c[n-1])!=c[n-1]){cout<<max_so_far<<endll;}
                            else{
                                        p++;
                                        max_so_far = INT_MIN, max_ending_here = c[n-1];
                                        for (int i = 0; i < n; i++)
                                        {   max_ending_here = max_ending_here + a[i];
                                            b[i]=max_ending_here;
                                            c[i]=b[i];

                            //                cout<<b[i]<<" ";
                                            if (max_so_far < max_ending_here)
                                                max_so_far = max_ending_here;
                                            if (max_ending_here < 0)
                                                max_ending_here = 0;

                                        }
                              //          cout<<endll;
                                        maxi=max(maxi,max_so_far);

                                        if(k==2){cout<<maxi<<endll;break;}
                                        else{

                                        max_so_far = INT_MIN, max_ending_here = c[n-1];
                                        for (int i = 0; i < n; i++)
                                        {   max_ending_here = max_ending_here + a[i];
                                            b[i]=max_ending_here;
                                            //c[i]=b[i];
                                            //maxi=max(maxi,max_so_far);
                                //    cout<<b[i]<<" ";
                                            if (max_so_far < max_ending_here)
                                                max_so_far = max_ending_here;
                                            if (max_ending_here < 0)
                                                max_ending_here = 0;

                                        }
                                  //    cout<<endll;
                                        int d=max_so_far-maxi;

                                    //      cout<<maxi<<" "<<d<<" "<<k-p<<" "<<d*(k-p)<<endll;
                                            cout<<maxi+d*(k-p)<<endll;

                                        }



                    }
                }

        }
        else {

	 	int max_so_far = INT_MIN, max_ending_here = 0;
        for (int i = 0; i < n; i++)
        {   max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        cout<<max_so_far<<endll;
        }

	}
/*
1
7 3
1 -2 7 3 -8 -2 2
*/

	return 0;
}




