#include <stdio.h>
#include <iostream>
#include <cmath>
#include <set>
#include <iterator>
 using namespace std;

   int main(){

int n,l,r,op,k;long long sum=0; long long psum=0;
   cin>>n;
 long long a[n];long long prea[n];long long prio[n];multiset<long long> ss;
    for(int i=0;i<n;i++){
 long long tt; cin>>tt; a[i]=tt; ss.insert(tt); }
  multiset<long long>::iterator itr=ss.begin() ;
    for(int j=0;j<n;j++){
   sum+=a[j]; prea[j]=sum;
  psum+=*itr; prio[j]=psum; ++itr;
    } cin>>k;
  //  for(int i =0;i<n;i++){
  // cout<<prea[i]<<" "; cout<<prio[i]<<endl; }
  for(int i=0;i<k;i++){
    cin>>op; cin>>l; cin>>r;
    if(op==1 && l==1) cout<<prea[r-1]<<endl;
   else if(op==1 && l!=1) cout<<prea[r-1]-prea[l-2]<<endl;
   else if(op==2 && l==1) cout<<prio[r-1]<<endl;
   else cout<<prio[r-1]-prio[l-2]<<endl;
  }

}
