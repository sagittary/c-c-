//给出年份m和一年中的第n天，算日期 
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
	int dayT[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	}; 
	int y, m, d;
	int num;
	while(scanf("%d%d", &y, &num) != EOF){
		m = 0;
		int row = 0;
		if(y %4 == 0 && y % 100 != 0 || (y % 400 == 0)){
			row = 1;
		}
		while(num > dayT[row][m]){
			num -= dayT[row][m];
			m++;
		}
		d = num;
		printf("%04d--%02d--%02d\n", y, m ,d);
	}
	return 0;
}
