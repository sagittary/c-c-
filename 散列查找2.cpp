//散列查找 长度n 查找次数m 查找数字b 输出YES/NO
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

const int MAXN = 100 + 10;
const int RANGE = 1e6;
int arr[MAXN];
unordered_map<int, bool> hashTable;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		hashTable[arr[i]] = true;
	}
	int m; 
	scanf("%d", &m);
	while(m--){
		int target;
		scanf("%d", &target);
		if(hashTable[target]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}
	return 0;
} 
