//不超过256，平方具有对称性质的数 
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

int Reverse(int number){
	int reverse = 0;
	while(number != 0){
		reverse *= 10;
		reverse += number %10;
		number /= 10;
	}
	return reverse;
}

int main(){
	for(int i = 1; i <=256; i++){
		if(i * i == Reverse(i * i)){
			printf("%d\n", i);
		}
	}
	return 0;
} 
