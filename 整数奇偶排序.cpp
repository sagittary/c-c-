//10个整数，先出奇数大到小，再输偶数小到大 
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

int arr[10];
bool  Compare(int x, int y){
	if(x % 2 == 1 && y % 2 == 1){
		return y < x;
	}else if(x % 2 == 0 && y % 2 == 0){
		return x < y;
	}else if(x % 2 == 1 && y % 2 == 0){
		return true;
	}else{
		return false;//x%2 > y%2最后两种情况可以一起判断 
	}
}
int main(){
	while(scanf("%d", &arr[0])!= EOF){
		for(int i = 1; i < 10; i++){
			scanf("%d", &arr[i]);
		}
		sort(arr, arr+10, Compare);
		for(int i = 0; i < 10; i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
} 
