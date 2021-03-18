//Aggressive cows 最大最小：二分策略 
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

int arr[MAXN];

bool Judge(int n, int m, int distance){
	int current = arr[0];
	int number = 1;
	
	for(int i = 1; i < n; i++){
		if(arr[i] - current >= distance){
			number++;
			current = arr[i];
		}
		if(number >= m){
			return true;
		}
	}
	return false;
}

int main(){
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF){
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + n);
		int left = 1;
		int right = arr[n - 1] - arr[0];
		while(left <= right){
			int middle = left + (right - left) / 2;
			if(Judge(n, m, middle)){
				left  = middle + 1;
			}else{
				right = middle - 1;
			}
		}
		printf("%d\n", right);
	}
	return 0;
} 










