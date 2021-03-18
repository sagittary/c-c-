//二进制数 unsigned int的二进制串 
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

void Convert(int n){
	vector<int> ans;
	while(n != 0){
		ans.push_back(n % 2);
		n /= 2;
	}
	for(int i = ans.size() - 1; i >= 0; i--){
		printf("%d",ans[i]); 
	}
	printf("\n");
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		Convert(n);		
	} 
	return 0;
} 
