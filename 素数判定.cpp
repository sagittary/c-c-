//ËØÊıÅĞ¶¨ 
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

bool Judge(int n){
	if(n < 2){
		return false;
	}
	int bound = sqrt(n);
	for(int i = 2; i <= bound; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		if(Judge(n)){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
} 
