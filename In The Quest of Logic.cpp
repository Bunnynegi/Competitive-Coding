//https://www.hackerearth.com/problem/algorithm/in-the-quest-of-logic/
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
	    cin>>s;
	    int l=s.length();
	    for(int i=0;i<l;i++)
	    {
	        if(isupper(s[i]))
	            s[i]=tolower(s[i]);
	       else
	        if(islower(s[i]))
	            s[i]=toupper(s[i]);

	    }
	    reverse(s.begin(), s.end());
	    cout<<s<<endl;
	}



	return 0;
}




