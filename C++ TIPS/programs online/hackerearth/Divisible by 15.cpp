//https://www.hackerearth.com/problem/algorithm/demo-15/
#include<bits/stdc++.h>
#define ll long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


int main()
{
	sync;

	int t;

	cin>>t;
	while(t--)
	{
	    string s;
        cin >> s;
        int l = s.length();
        if (s[l-1]=='0' || s[l-1]=='5')
        {
            ll sum = 0;
            for(int i=0;i<l;i++)
                sum+=(s[i]-'0');


            if (sum%3==0) cout << "Yes\n";
            else cout << "No\n";
        }
        else cout << "No\n";
	}

	return 0;
}




