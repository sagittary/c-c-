//正整数N 的质因数的个数 相同质因重复计算 
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

const int MAXN = 4e4;
vector<int> prime;
bool isPrime[MAXN];

void Initial(){
	for(int i = 0; i < MAXN; i++){
		isPrime[i] = true;
	}
	//fill(isPrime, isPrime + MAXN, true);
	isPrime[0] = false;
	isPrime[1] = false;
	for(int i = 2; i < MAXN; i++){
		if(!isPrime[i]){
			continue;
		}
		prime.push_back(i);
		for(int j = i * i; j < MAXN; j += i){
			isPrime[j] = false;
		}
	} 
	return ;
}


int NumberOfPrimeFactor(int number){
	int ans = 0;
	for(int i = 0; i < prime.size(); i++){
		int factor = prime[i];
		if(number < factor){
			break;
		}
		int current = 0;
		while(number % factor == 0){
			current++;
			number /= factor;
		}
		ans += current;
	} 
	if(number > 1){
		ans ++;
	}
	return ans;
}
int main(){
	Initial();
	int n;
	while(scanf("%d", &n) != EOF){
		printf("%d\n", NumberOfPrimeFactor(n));
	}
	return 0;
} 
