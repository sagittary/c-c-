//Drying n:衣服数量 ai:含水量  k:烘干机能力 
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

bool Judge(int n, int k, int time){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > time){
			sum += ceil( (arr[i] - time) * 1.0 / (k - 1));
		}
		if(sum > time){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int k;
	scanf("%d", &k);
	sort(arr, arr + n);
	if(k == 1){
		printf("%d\n", arr[n - 1]);
	}else{
		int left = 1;
		int right = arr[n - 1];
		while(left <= right){
			int middle = left + (right - left) / 2;
			if(Judge(n, k, middle)){
				right = middle - 1;
			}else{
				left = middle + 1;
			}
		}
		printf("%d\n", left);
	}
	return 0;
} 










