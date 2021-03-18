//猫狗收容所 n:操作次数 m t:两种动物 收养最早/收养猫（狗）最早 
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

struct Animal{
	int number;
	int order;
	Animal(){}
	Animal(int n, int o):number(n), order(o){}
}; 

queue<Animal> cats;
queue<Animal> dogs;

int main(){
	int n;
	int order = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int event;
		scanf("%d", &event);
		if(event == 1){
			int number;
			scanf("%d", &number);
			if(0 < number){
				dogs.push(Animal(number, order++));
			}else{
				cats.push(Animal(number, order++));
			}
		}else{
			int type;
			scanf("%d", &type);
			if(type == 0 && !dogs.empty() && !cats.empty()){
				if(dogs.front().order < cats.front().order){
					printf("%d ", dogs.front().number);
					dogs.pop();
				}else{
					printf("%d ", cats.front().number);
					cats.pop();
				}
			}else if(type == 0 && !dogs.empty() && cats.empty()){
				printf("%d ", dogs.front().number);
				dogs.pop();
			}else if(type == 0 && dogs.empty() && !cats.empty()){
				printf("%d ", cats.front().number);
				cats.pop();
			}else if(type == 1 && !dogs.empty()){
				printf("%d ", dogs.front().number);
				dogs.pop();
			}else if(type == -1 && !cats.empty()){
				printf("%d ", cats.front().number);
				cats.pop();
			}
		}
		printf("\n");
	}
	printf("\n");	
	return 0;
} 
