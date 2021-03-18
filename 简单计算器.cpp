//¼òµ¥¼ÆËãÆ÷ 
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

int Priority(char c){
	if(c == '#'){
		return 0;
	}else if(c == '$'){
		return 1;
	}else if(c == '+' || c == '-'){
		return 2;
	}else{
		return 3;
	}
}

double GetNumber(string str, int& index){
	double number = 0;
	while(isdigit(str[index])){
		number = number * 10 + str[index] - '0';
		index++;
	}
	return number;
} 

double Calculate(double x, double y, char op){
	double result = 0;
	if(op == '+'){
		result = x + y;
	}else if(op == '-'){
		result = x - y;
	}else if(op == '*'){
		result = x * y;
	}else if(op == '/'){
		result = x / y;
	}
	return result;
}
int main(){
	string str;
	while(getline(cin, str)){
		if(str == "0"){
			break;
		}
		int index = 0;
		stack<char> operation;
		stack<double> number;
		operation.push('#');
		str += '$';
		while(index < str.size()){
			if(str[index] == ' '){
				index++;
			}else if(isdigit(str[index])){
				number.push(GetNumber(str, index));
			}else{
				if(Priority(operation.top()) < Priority(str[index])){
					operation.push(str[index]);
					index++;
				}else{
					double y = number.top();
					number.pop();
					double x = number.top();
					number.pop();
					number.push(Calculate(x, y, operation.top()));
					operation.pop();
				}
			}
		}
		printf("%.2f\n", number.top());
	} 
	return 0;
} 
