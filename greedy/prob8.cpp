#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 void opera1(long long a[],int f,int s){
   a[f-1]=s;
 }
 void opera2(long long a[],int n,int f){
  for(int i=0;i<n;i++) a[i]+=f;
 }


int main()
{
    int n , k; int op, f,s;
    cin>>n; cin>>k; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) {
     cin>>op; cin>>f; if(op==1) cin>>s;
      if(op==1) opera1(a,f,s);
 else if (op==2) opera2(a,n,f);
 else cout<<a[f-1]<<endl;
    }
    return 0;
}
