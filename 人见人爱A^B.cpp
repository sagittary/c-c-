//人见人爱A^B  A^B的最后三位数 
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

int QuickPower(int x, int n){
	int mod = 1000;
	int ans = 1;
	while(n != 0){
		if(n %2 == 1){
			ans *= x;
			ans %= mod;
		}
		n /= 2;
		x *= x;
		x %= mod;
	}
	return ans;
}

int main(){
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF){
		if(a == 0 && b == 0){
			break;
		}
		printf("%d\n", QuickPower(a, b));
	}
	return 0;
} 













