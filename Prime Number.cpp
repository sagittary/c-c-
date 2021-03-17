//输出第k个质数 
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

const int MAXN = 1e5;
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

int main(){
	Initial();
	int k;
	while(scanf("%d", &k) != EOF){
		printf("%d\n", prime[k - 1]);
	}
	return 0;
} 
