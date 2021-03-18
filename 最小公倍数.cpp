//最小公倍数 
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

int GCD(int a, int b){
	if(b == 0){
		return a;
	}else{
		return GCD(b, a % b);
	}
}

int main(){
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF){
		printf("%d\n", a * b / GCD(a, b));
	}
	return 0;
} 
