//约数的个数 
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


int NumberOfFactor(int number){
	vector<int> exponent; 
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
		exponent.push_back(current);
	} 
	if(number > 1){
		exponent.push_back(1);
	}
	int ans = 1;
	for(int i = 0; i < exponent.size(); i++){
		ans *= exponent[i] + 1;
	}
	return ans;
}
int main(){
	Initial();
	int n;
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			 break;
		}
		for(int i = 0; i < n; i++){
			int number;
			scanf("%d", &number);
			printf("%d\n", NumberOfFactor(number));
		}
		
	}
	return 0;
} 
