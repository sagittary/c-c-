// 第K大数 快速排序 
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

int Partition(int left, int right){
	int random = left + rand() % (right - left + 1);
	swap(arr[left], arr[random]);
	while(left < right){
		while(left < right && arr[left] <= arr[right]){
			right--;
		}
		swap(arr[left], arr[right]);
		while(left < right && arr[left] <= arr[right]){
			left++;
		}
		swap(arr[left], arr[right]);
	}
	return left;
}
int QuickSort(int left, int right, int p){
	int position  = Partition(left, right);
	if(position < p){
		return QuickSort(position+1, right, p);
	}else if(position > p){
		return QuickSort(left, position - 1, p);
	}else{
		return arr[position];
	}
} 
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int k; 
	scanf("%d", &k);
	int ans = QuickSort(0, n-1, n-k);
	printf("%d\n",ans);
	return 0;
} 
