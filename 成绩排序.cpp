//成绩排序  N学生个数 p学号 q成绩 先比成绩后学号 
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

struct Student{
	int number;
	int score;
}; 

Student arr[100];

bool Compare(Student x, Student y){
	if(x.score==y.score){
		return x.number < y.number;
	}else{
		return x.score < y.score;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &arr[i].number, &arr[i].score);
	}
	sort(arr, arr+n, Compare);	
	for(int i = 0; i < n; i++){
		printf("%d %d\n", arr[i].number,arr[i].score);
	}
	return 0;
} 
