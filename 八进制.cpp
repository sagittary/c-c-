//十进制转八进制 
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

char IntToChar(int target){
	if(target < 10){
		return target + '0';
	}else{
		return target - 10 + 'A';
	}
}

void Convert(int n, int x){
	vector<char> ans;
	if(n == 0){
		ans.push_back('0');
	}else{
		while(n != 0){
		ans.push_back(IntToChar(n % x));
		n /= x;
		}	
	}
	for(int i = ans.size() - 1; i >= 0; i--){
		printf("%c",ans[i]); 
	}
	printf("\n");
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		Convert(n, 8);		
	} 
	return 0;
} 
