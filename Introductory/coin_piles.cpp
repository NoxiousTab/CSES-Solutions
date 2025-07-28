#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	// its a bit tricky, assume we perform k operations. out of these k operations, x times we take 1 from a, so that means we mustve taken (k - x) times 1 from b
	// similarly, suppose we take y times 2 from a, then that means we take (k - y) times 2 from b

	// by this, after k operations, the state will be:
		// a -> a - x - 2y
		// b -> b - (k - x) - 2(k - y)

	// but a and b must be 0, so a = x + 2y and b = (k - x) + 2(k - y)

	// we further simplify b, make sure that we must get both a and b in terms of x and y, theres a rabbit hole where you get a + b = 3k and just check if the sum 
	// is divisible by 3, this will FAIL
	// so b = 2x + y

	// now a = x + 2y and b = 2y + x, solve for x and y in terms of a and b, then check for positivity and divisibilty, then we get our answer



	int t; cin>>t;
	while(t--){
		int a; int b; cin>>a>>b;
		int x = 2*a - b;
		int y = 2*b - a;
		(y >= 0 && x >= 0 && x%3 == 0 && y%3 == 0) ? cout<<"YES\n" : cout<<"NO\n";
	}


	return 0;
}
