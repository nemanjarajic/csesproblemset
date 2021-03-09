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
