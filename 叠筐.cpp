//输入外筐尺寸n 中心花色 外筐花色，输出筐图案
//中心花色与外筐花色字符从内层起交错，多筐相叠时，最外筐的角被打磨
//叠筐与叠筐有一行间隔 
//同心正方形 
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

const int MAXN = 80 + 10; 

char matrix[MAXN][MAXN]; 

int main(){
	int n;
	char center;
	char outside;
	int firstCase = 1;
	while(scanf("%d %c %c", &n, &center, &outside) != EOF){
		if(firstCase){
			firstCase = 0;
		}else{
			printf("\n");
		}
		for(int i = 0; i <= n/2; i++){//一个正方形 i+j=n-1 
			int j = n-1-i;
			int length = n - 2 * i;//正方形的宽度 
			char current;
			if((n/2 - i ) % 2 == 0){//与中心的距离为偶数，则与中心色同色 
				current = center;
			}else{
				current = outside;
			}
			for(int k = 0; k < length; k++){
				matrix[i][i+k] = current;
				matrix[i+k][i] = current;
				matrix[j][j-k] = current;
				matrix[j-k][j] = current;
			} 
		}
		if(n != 1){
			matrix[0][0] = ' ';
			matrix[0][n-1] = ' ';
			matrix[n-1][0] = ' ';
			matrix[n-1][n-1] = ' ';
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%c",matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 
