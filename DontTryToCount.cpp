#include <bits/stdc++.h>
 
using namespace std;
 bool check(string x, string s, int n, int m)
 {
    //need to check whether s exists within x as a substring
    string tmp="";
    for(int i=0;i+m<=n;i++)
    {

        tmp=x.substr(i,m);
        //cout<<tmp<<endl;
        if(tmp==s)
        {
         //cout<<"TRUE";
         return true;
        }
    }
    return false;
 }

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n,m; cin>>n>>m;
     string xx,ss; cin>>xx>>ss;
     //taking inputs and setting up the base for this problem
     int count=0;
     while(xx.length()<m)
     {
     xx=xx+xx;
     count++;
     }
     
     
    while(true)
    {
        n=xx.length();
        if(count>5)
        {
            count=-1;
            break;
        }
       if(check(xx,ss,n,m))
       break;
       else
       {
        xx=xx+xx;
        count++;
       }
    }
    cout<<count<<endl;

  }
    
 
}