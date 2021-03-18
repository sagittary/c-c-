//FatMouse'Trade ¼òµ¥Ì°ÐÄ 
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

const int MAXN = 1000;

struct JavaBean{
	double weight;
	double cost;
};

JavaBean arr[MAXN];

bool Compare(JavaBean x, JavaBean y){
	return x.weight/x.cost > y.weight/y.cost;
}
int main(){
	int n, m;
	while(scanf("%d%d", &m, &n) != EOF){
		if(n == -1 && m == -1){
			break;
		}
		for(int i = 0; i < n; i++){
			scanf("%lf%lf", &arr[i].weight, &arr[i].cost);
		}
		sort(arr, arr+n, Compare);
		double ans = 0;
		for(int i = 0; i < n; i++){
			if(m >= arr[i].cost){
				m -= arr[i].cost;
				ans += arr[i].weight;
			}else{
				ans += arr[i].weight * (m / arr[i].cost);
				m = 0;
				break;
			}
		}
		printf("%.3f\n", ans);
	} 
	return 0;
} 










