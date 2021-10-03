#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
	long nTest,n;
	scanf("%ld",&nTest);
	while (nTest--)
	{
		ll res=0,x;
		scanf("%ld",&n);
		for (long i=0; i<n; ++i)
		{
			scanf("%lld",&x);
			if (x&1LL && i>0) res^=i;
		}
		if (n==1) puts("Second");
		else puts((!res)?"Second":"First");
	}
}