#include <bits/stdc++.h> 
void solve(string str, string output, vector<string> &ans, int index){
	if(index >= str.length()){
		if(output.length() > 0){
			ans.push_back(output);
		}
					return;
	}
	solve(str, output, ans, index+1);
	char ele = str[index];
	output.push_back(ele);
	solve(str, output, ans, index+1);
}
vector<string> subsequences(string str){
   vector<string> ans;
   string output = "";
   int index = 0;
   solve(str, output, ans, index);
	return ans;
}
