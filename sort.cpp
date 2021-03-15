//sort n个数前m大  数有范围 
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

const int RANGE = 5E5;
const int MAXN = 1e6 + 10;
int arr[MAXN];
int number[MAXN];  //数据范围 

int main(){
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF){
		memset(number, 0, sizeof(number));
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			number[arr[i] + RANGE]++;
		}
		int index = 0;
		for(int i = 0; i < MAXN; i++){
			while(number[i]--){//有值且多个 
				arr[index++] = i - RANGE;
			}
		}
		for(int i = n-1; i >= n-m; i--){
			if(i == n-m){
				printf("%d\n",arr[i]);
			}else{
				printf("%d ",arr[i]);
			}
		}
	}
	return 0;
} 
