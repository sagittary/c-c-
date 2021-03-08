//N是四位数，9倍是其反序数 
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
	for(int i = 1000; i <= 9999; i++){
		if(i * 9 == Reverse(i)){
			printf("%d\n", i);
		}
	}
	return 0;	
} 
