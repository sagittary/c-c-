//Zero-complexity Transposition ÄæÐòÊä³ö 
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

stack<long long> sequence;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		for(int i = 0; i < n; i++){
			long long number;
			scanf("%lld", &number);
			sequence.push(number);
		}
		while(!sequence.empty()){
			printf("%lld ", sequence.top());
			sequence.pop();
		}
		printf("\n");
	} 
	return 0;
} 
