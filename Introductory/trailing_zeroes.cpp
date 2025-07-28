#include <bits/stdc++.h>
#define int long long
using namespace std;


int baseK(int n, int k){
	string temp = "";
	while(n){
		int rem = n % k;
		temp += to_string(rem);
		n/=k;
	}
	reverse(temp.begin(), temp.end());
	int res = stoll(temp);
	return res;
}

int sumdigs(int n){
	int res = 0;
	while(n){
		res += n%10;
		n/=10;
	}
	return res;
}


void approach1(int n){
	int ans = 0;
        for(int i = 5; i <= n; i*=5){
                ans += n/i;
        }
        cout<<ans;
}

void approach2(int n){

	cout<<((n - sumdigs(baseK(n, 5)))/(4));

}



int32_t main(){

	/*
		Usefull links:
			https://en.wikipedia.org/wiki/Legendre%27s_formula
			https://artofproblemsolving.com/wiki/index.php/Legendre%27s_Formula?srsltid=AfmBOoqP3gh4y6DVP4OwWCPOsAdhspDX5tOCRE02EaCb_k_XoXVvdTse
			https://artofproblemsolving.com/wiki/index.php/P-adic_valuation
	*/

	// the basic idea to solve this problem is that, in n! 's prime factorization, how many times "5" appears
	// this is because a "0" will be contributed when 5 x 2 happens in n!, and since 2 < 5, obviously 2 will appear more times than 5
	// so we just wanna find how many times 5 will come in prime factorization of n!, aka the highest power of 5 in prime factorization of n!
	// aka the p-adic valuation of n! where p = 5, and which can specifically be given by legendre's formula

	int n; cin>>n;

	approach1(n); // just use legendre's formula directly
	//approach2(n); // use the alternative form of legendre's formula given on aops website

	// both will work.

	return 0;
}
