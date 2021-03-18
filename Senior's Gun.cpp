//Senior's Gun Ì°ÐÄ²ßÂÔ 
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

const int MAXN = 100000 + 10;

long long gun[MAXN];
long long monster[MAXN];

bool Compare(long long x, long long y){
	return x > y;
}
int main(){
	int c;
	while(scanf("%d", &c) != EOF){
		int n, m;
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; i++){
			scanf("%lld", &gun[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%lld", &monster[i]);
		}
		sort(gun, gun + n, Compare);
		sort(monster, monster + m);
		long long ans = 0;
		for(int i = 0; i < n; i++){
			if(i >= m || gun[i] <= monster[i]){
				break;
			}
			ans += gun[i] -monster[i];
		}
		printf("%lld\n", ans);
	} 
	return 0;
} 










