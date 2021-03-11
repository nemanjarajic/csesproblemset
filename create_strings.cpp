/*
Given a string, your task is to generate all different strings that can be created using its characters.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
	string n;
	cin >> n;
	
	sort(n.begin(),n.end());
	vector <string> ans;
	
	do{
		ans.push_back(n);
	} while(next_permutation(n.begin(),n.end()));
	
	cout << ans.size() << endl;
	
	for(string s:ans){
	
		cout << s << endl;
	}
}
