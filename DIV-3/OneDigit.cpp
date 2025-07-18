// Problem statement: https://codeforces.com/contest/2126/problem/A
// Source: Codeforces DIV-3 Round 1037

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; // Taking test cases as input
	while(t--){
		int x;
		cin >> x;
		
		int digit;
		vector<int> ans;
        

		while(x > 0){
            digit = x%10; // Extracting the digits
            ans.push_back(digit); // Pushing digits into the array
            x = x/10;  
		}
        
        int y = INT_MAX;
		for(int i = 0; i < ans.size(); i++){
            if(ans[i] < y){  // Checking for the smallest digit
            	y = ans[i];
            }
		}

		cout << y << endl;
	}
}