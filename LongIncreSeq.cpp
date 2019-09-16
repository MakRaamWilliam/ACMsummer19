#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
   int a[]={10,22,9,33,21,50,41,60};
   /*
   set<int> s; s.insert(a[0]);
   for(int i=1;i<8;i++){  set<int>::iterator itt=s.end(); itt--;
    if(*(itt)<=a[i]) s.insert(a[i]);
    else {
        for(set<int>::iterator it=s.begin(); it!=s.end();++it){
           if(*it==a[i]) break;
          else if(*it>a[i]) { s.erase(it); s.insert(a[i]); break;}
        }
    }
   } cout<<s.size();     */
   int dp[8]; for(int i=0;i<8;i++) dp[i]=1;
    int mx=0;
   for(int i=1;i<8;i++){
    for(int j=0;j<i;j++){
     if(a[j]<a[i])  { dp[i]=max(dp[i],1+dp[j]); mx=max(mx,dp[i]);   }

    }
   } cout<<mx;

    return 0;
}
