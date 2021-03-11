/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
*/

#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n,sum=0;
	cin >> n;
	
	for(ll i = 1; i < n; i++){
		ll t;
		cin >> t;
		sum += t;
	}
	
	cout << (n*(n+1))/2 - sum;
	
	
}
