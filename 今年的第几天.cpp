//输入年月日，计算该天是本年的第几天 
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
	int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, m, d;
	int ans = 0;
	while(scanf("%d%d%d", &y, &m, &d) != EOF){
		ans = 0;
		for(int i = 0; i < m; i++){
			ans += day[i];
		}
		ans += d;
		if(y %4 == 0 && y % 100 != 0 || (y % 400 == 0)){
			if(m > 2){
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	
	 
	return 0;
}
