//输入高度h,输出高为h,上底边h的梯形 
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

int main(){
	int h = 0;
	while(scanf("%d", &h) != EOF){
		int row = h;
		int col = h + 2 * (h - 1);
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				if(j < col - (h + 2 * i)){
					printf(" ");
				}else{
					printf("*");
				}
			}
			printf("\n"); 
		}
	}
	return 0;
} 
