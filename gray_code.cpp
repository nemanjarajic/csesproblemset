/*
A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).

Your task is to create a Gray code for a given length n.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <bitset>
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < (1<<n); i++){
		int val = (i^(i>>1));
		
		bitset<32> r(val);
		
		string s = r.to_string();
		
		cout << s.substr(32-n) << endl;
	}
}
