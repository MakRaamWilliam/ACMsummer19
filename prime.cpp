#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long power(long long x, unsigned int y, int p)
{
	long long res = 1;	 // Initialize result
	x = x % p; // Update x if it is more than or
				// equal to p
	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res*x) % p;
		// y must be even now
		y = y>>1; // y = y/2
		x = (x*x) % p;
	}
	return res;
}

bool miillerTest(int d, int n)
{
	int a = 2 + rand() % (n - 4);
	// Compute a^d % n
	long long x = power(a, d, n);
	if (x == 1 || x == n-1)
	return true;
	while (d != n-1)
	{
		x = (x * x) % n;
		d *= 2;
		if (x == 1)	 return false;
		if (x == n-1) return true;
	}
	// Return composite
	return false;
}

bool isPrime(int n, int k)
{
	// Corner cases
	if (n <= 1 || n == 4) return false;
	if (n <= 3) return true;
	// Find r such that n = 2^d * r + 1 for some r >= 1
	int d = n - 1;
	while (d % 2 == 0)
		d /= 2;
	// Iterate given nber of 'k' times
	for (int i = 0; i < k; i++)
		if (!miillerTest(d, n))
			return false;
	return true;
}


int main()
{
    int t; cin>>t;
    for(int p=0;p<t;p++){
       long long n;cin>>n; long long a[n];
       for(int i=0; i<n;i++) cin>>a[i];
       if(n==1 && !isPrime(a[0],4)) cout<< -1<<endl;
        else {
       sort(a,a+n);
       long long l=0;long long r=n-1; int flag=1; long long c=a[0]*a[n-1];
       while(l<r && flag){
        if(a[l]*a[r]!= c ) flag=0;
        l++;r--;
       } if(flag) cout<<c<<endl; else cout<<-1<<endl;
        }

    }
    return 0;
}
