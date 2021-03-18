//¿®∫≈∆•≈‰Œ Ã‚ 
#include<unordered_map> 
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<sstream> 
#include<string>
#include<cstdio>
#include<vector>
#include<random>
#include<stack>
#include<queue>
#include<cmath>
#include<set>
//#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		stack<int> brackets;
		string ans(str.size(), ' ');
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '('){
				brackets.push(i);
			}else if(str[i] == ')'){
				if(!brackets.empty()){
					brackets.pop();
				}else{
					ans[i] = '?';
				}
			}
		}
		while(!brackets.empty()){
			ans[brackets.top()] = '$';
			brackets.pop();
		}
		cout << str << endl;
		cout << ans << endl;
	} 
	return 0;
} 
