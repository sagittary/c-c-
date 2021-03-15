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
void QuickSort(int left, int right){
	if(left < right){
		//int middle = (left + right)/2;
		int position = Partition(left, right);//不会溢出
		QuickSort(left, position - 1);
		QuickSort(position+1, right);
	}
} 
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	QuickSort(0, n-1);
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 
