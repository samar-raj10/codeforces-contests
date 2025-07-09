// Problem statement: https://codeforces.com/contest/2094/problem/A
// Source: Codeforces DIV-4 Round 1017

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore(); // To ignore the newline character after reading t
	while(t--){
		string s;
		getline(cin,s); // Read the entire line including spaces
        vector<int> ans;

		for(int i = 0; i < s.length(); i++){
        	if(s[i] == ' '){
            ans.push_back(i);
        	}
    	}  // Store the indices of spaces in the vector ans

    	string s1 = s.substr(0,1);
    	string s2 = s.substr(ans[0]+1,1);
    	string s3 = s.substr(ans[1]+1,1);
    	string str = s1 + s2 + s3;

    	cout << str << endl ;

	}

	return 0;
}
