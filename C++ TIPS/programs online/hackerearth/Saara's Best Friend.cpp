https://www.hackerearth.com/problem/algorithm/saaras-best-friend/

#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
  map<char,int>a;
  string s;
  ll c=0,k=0;
  cin>>s;
  int m=s.length();
  for(int i=0;i<m;i++)
  {
      if(s[i]=='e'||s[i]=='a'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U')
       {c++;}
      a[s[i]]++;
      
  }
  
  
 
  cout<<c*c<<" "<<a.size();
   
  
    return 0;
}
