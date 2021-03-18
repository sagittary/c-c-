//Ãÿ ‚≥À∑® 123*45=1*4 + 1*5 + 2*4 + 2*5 + 3*4 + 3*5 
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
	string str1, str2;
	while(cin >> str1 >> str2){
		int ans = 0;
		for(int i = 0; i < str1.size(); i++){
			for(int j = 0; j < str2.size(); j++){
				ans += (str1[i] - '0' ) * (str2[j] - '0'); 
			}
		}
		cout<<ans<<endl;
	} 
	return 0;
} 
