//设 abc都是0-9之间的数字，abc,bcc两个三位数，且有abc+bcc=532
//暴力枚举

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
#include<random>
#include<queue>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int a = 0; a <= 9; a++){
		for(int b = 0; b <= 9; b++){
			for(int c = 0; c <= 9; c++){
				if(100 * a + 110 * b + 12 * c == 532)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
}
