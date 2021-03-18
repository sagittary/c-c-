//Í³¼Æ×Ö·û 
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

int num[128];
 
int main(){
	string str1, str2;
	while(getline(cin, str1)){
		if(str1 == "#"){
			break;
		}
		getline(cin, str2);
		memset(num, 0, sizeof(num));
		for(int i = 0; i < str2.size(); i++){
			num[str2[i]]++;
		}
		for(int i = 0; i < str1.size(); i++){
			printf("%c %d\n", str1[i], num[str1[i]]);
		}
	} 
	return 0;
} 
