//十六进制转十进制 
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

int CharToInt(char target){
	if('0' <= target && target <= '9'){
		return target - '0';
	}else{
		return target - 'A' + 10;
	}
}

void Convert(string str, int x){
	int num = 0;
	for(int i = 0; i < str.size(); i++){
		num *= x;
		num += CharToInt(str[i]);
	}
	printf("%d\n", num);
}

int main(){
	string str;
	while(cin >> str){
		str = str.substr(2);
		Convert(str, 16);
	} 
	return 0;
} 
