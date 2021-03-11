/*
Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n,ans=0;
	cin >> n;
	
	for(ll i = 5; i <= n; i*=5){
		ans += n/i;
	}	
	cout << ans;
}
