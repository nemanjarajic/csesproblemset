/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.
*/
#include <iostream>
using namespace std;

#define ll long long

int main(){
	string s;
	cin >> s;
	ll mx = 0, curr = 0;
	char t = 'A';
	for(char c: s){
		if(c == t){
			curr += 1;
			mx = max(mx,curr);
		}else{
		
			t = c;
			curr = 1;
		}
	}
	
	cout << mx;
	
	
}
