#include<algorithm>
#include<iostream>
#include<iterator>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<sstream> 
#include<string>
#include<cstdio>
#include<vector>
#include<random>
#include<memory>
#include<deque>
#include<stack>
#include<queue>
#include<cmath>
#include<set>
#include<map>
//#include<bits/stdc++.h>
using namespace std;
const int N = 1000010;

int n,m;
int a[N]={0}; //初始数组
int  s[N]={0};  //前缀和数组

int main(){
	int n;
	scanf("%d", &n);
    for(int i = 0; i < n; i ++ ){
        scanf("%d", &a[i]);
        if(i == 0){
        	s[i] = a[i];
		}else{
			s[i] = s[i-1] + a[i];
		}
    }
    int m;
    scanf("%d", &m);
    while(m --){
        int op,l, r;
        scanf("%d%d%d", &op, &l, &r);
        if(op == 1){
        	printf("%d\n", s[r]-s[l - 1]);
		}
        else if(op == 2){
        	int temp = a[l];
        	a[l] = r;
        	for(int i = l; i < n; i++){
        		s[i] = s[i]-temp+r; 
			}
		}
        
    }
	return 0;
}
