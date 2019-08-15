//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/x-4/

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main()
{
	sync;
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n],aa[101]={0},bb[101]={0},ia,va=0,ib,vb=0;
	    for(int i=0;i<n;i++)
	        {cin>>a[i];
	         aa[a[i]]++;}
	    for(int i=0;i<n;i++)
	        {cin>>b[i];
	         bb[b[i]]++;}
	    for(int i=0;i<101;i++)
	    {
	       if(aa[i]>=va)
	       {
	           ia=i;
	           va=aa[i];
	       }
	       if(bb[i]>=vb)
	       {
	           ib=i;
	           vb=bb[i];
	       }
	    }
	    if(ia>ib)
	         cout<<"Rupam"<<endl;
	    else
	        if(ib>ia)
	            cout<<"Ankit"<<endl;
	        else   cout<<"Tie"<<endl;


	}



	return 0;
}




