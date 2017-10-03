//https://www.hackerearth.com/problem/algorithm/buying-candies/

#include<bits/stdc++.h>
#define ll long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void prime(int n)
{
    int flag=0;
    for(int i = 2; i <= n / 2; ++i)
    {
      if(n % i == 0)
      {
          flag=1;
          break;
      }
    }
    if (flag==0)
     {if(n!=1)
        cout<<n*2<<endl;
      else
      cout<<n<<endl;
      return;}
    prime(n+1);
}


int main()
{
	sync;
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
        cin >> n;

        prime(n);

	}



	return 0;
}




