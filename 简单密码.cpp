//简单密码
//密文：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//明文：V W X Y Z A B C D E F G H I J K L M N O P Q R S T U 
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

int main(){
	string str;
	while(getline(cin, str)){
		if(str == "ENDOFINPUT"){
			break;
		}
		getline(cin, str);
		for(int i = 0; i < str.size(); i++){
			if('A' <= str[i] && str[i] <= 'Z'){
				str[i] = (str[i] - 'A' - 5 + 26) % 26 + 'A';
			}
		}
		cout<<str<<endl;
		getline(cin, str); 
	} 
	return 0;
} 
