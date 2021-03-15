// n个整数，求出序列逆序数 
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

const int MAXN = 1000 + 10;
int arr[MAXN];
int temp[MAXN];
int num; 

void Combine(int left, int middle, int right){
	int i = left;
	int j = middle + 1;
	int k = left;
	while(i <= middle && j <= right){
		if(arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}else{
			num += middle + 1 - i;
			temp[k++] = arr[j++];
		}
	}
	while(i <= middle){
		temp[k++] = arr[i++];
	}
	while( j <= right){
		temp[k++] = arr[j++];
	}
	for( k = left; k <= right; k++){
		arr[k] = temp[k];
	}
}

void MergeSort(int left, int right){
	if(left < right){
		//int middle = (left + right)/2;
		int middle = left + (right - left) / 2;//不会溢出
		MergeSort(left, middle);
		MergeSort(middle+1, right);
		Combine(left, middle, right);
	}
} 
int main(){
	int caseN;
	scanf("%d", &caseN);
	for(int caseO = 1; caseO <= caseN; caseO++){
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
		}
		num = 0;
		MergeSort(0, n-1);
		printf("Scenario #%d:\n", caseO); 
		printf("%d\n\n", num);
	}
	return 0;
} 
