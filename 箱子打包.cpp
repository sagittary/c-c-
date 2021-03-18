// Ïä×Ó´ò°ü 
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

const int MAXN = 1e5 + 10;

int length[MAXN];

int main(){
	int n, l;
	scanf("%d%d", &n, &l);
	for(int i = 0; i < n; i++){
		scanf("%d", &length[i]);
	}
	sort(length, length + n);
	int left = 0;
	int right = n - 1;
	int ans = 0;
	while(left <= right){
		if(length[left] + length[right] <= l){
			left++;
			right--;
			ans++;
		}else{
			right--;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
} 










