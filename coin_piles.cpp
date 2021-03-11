/*
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n;
	cin >> n;
	
	for(ll i = 0; i < n; i++){
		ll a,b;
		cin >> a >> b;
		
		if((a+b) % 3 == 0 and a*2 >= b and b*2 >= a){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	
	}
}
