/*
Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n,s=1;
	cin >> n;
	
	for(int i = 0; i <n; i++){
		s = 2*s%((int)1e9+7);
	}		
	cout << s;
}
