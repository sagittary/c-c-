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

char a[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int change(char s[]){
	for(int i = 0; i < 10; i++){
		if(!strcmp(a[i], s)){
			return i;
		}
	}
	return -1;
}

int main(){
	char str[10], num[10];
	while(1){
		int a = 0;
		int b = 0;
		while(scanf("%s",str) && strcmp(str, "+")){//scanf�����ڽ����ַ���ʱ�����ո��س�����Ϊǰ��������Ѿ��������Ч!
			if(change(str) != -1)
				a = a * 10 + change(str);
		}
		while(scanf("%s",str) && strcmp(str, "=")){
			if(change(str) != -1)
				b = b * 10 + change(str);
		}
		if(a == 0 && b ==0)
			break;
		printf("%d\n",a+b);
	}
	return 0;
}
