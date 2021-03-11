/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n;
	cin >> n;
	
	if(n==1){
		cout << n;
		return 0;
	}else if(n==2 || n ==3){
		cout << "NO SOLUTION";
		return 0;
	}else{
		for(ll i = 2; i <= n; i+=2){
			cout << i << " ";
		}
		
		for(ll i = 1; i <=n; i += 2){
			cout << i << " ";
		}
	}
	
	
}
