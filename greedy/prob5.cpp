#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;

 void bst(int a[],int l,int r,int t){
  if(l==r) cout<<"not found";
  else {
  int mid=(l+r)/2;
  if(t==a[mid]) {cout<<mid<<endl; }
  else if(t>a[mid]) bst(a,mid+1,r,t);
  else bst(a,l,r-1,t);
  }
 }

int main()
{
   int a[]={1,12,15,18,25,36,38,41,49,50,61};
  bst(a,0,10,38);
    return 0;
}
