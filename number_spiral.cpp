/*
A number spiral is an infinite grid whose upper-left square has number 1. 

Your task is to find out the number in row y and column x.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n;
	cin >> n;
	
	
	for(ll i =0; i < n; i++){
		ll y,x;
		cin >> y >> x;
		
		if(x > y){
			if((x & 1) == 1){
				cout << x*x-y+1 << endl;
			}else{
				cout << (x-1)*(x-1) +y << endl;
			}
		}else{
			if((y & 1) == 0){
				cout << y*y-x+1 << endl;
			}else{
				cout << (y-1)*(y-1) +x << endl;
			}
		
		}
	}
	
	
}
