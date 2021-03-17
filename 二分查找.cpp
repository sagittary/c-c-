//二分查找 长度n 查找次数m 查找数字b 输出YES/NO 
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
int arr[MAXN];

bool LinearSearch(int n, int target){
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			return true;
		}
	}
	return false;
}
bool BinarySearch(int n, int target){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int middle = left + (right - left) / 2;
		if(arr[middle] < target){
			left = middle + 1;
		}else if(arr[middle] > target){
			right = middle - 1;
		}else{
			return true;
		}
	}
	return false;
} 
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	int m; 
	scanf("%d", &m);
	while(m--){
		int target;
		scanf("%d", &target);
		if(BinarySearch(n, target)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}
	return 0;
} 
