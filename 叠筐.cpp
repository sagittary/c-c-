//�������ߴ�n ���Ļ�ɫ ���ɫ�������ͼ��
//���Ļ�ɫ�����ɫ�ַ����ڲ��𽻴�������ʱ�������ĽǱ���ĥ
//�����������һ�м�� 
//ͬ�������� 
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

const int MAXN = 80 + 10; 

char matrix[MAXN][MAXN]; 

int main(){
	int n;
	char center;
	char outside;
	int firstCase = 1;
	while(scanf("%d %c %c", &n, &center, &outside) != EOF){
		if(firstCase){
			firstCase = 0;
		}else{
			printf("\n");
		}
		for(int i = 0; i <= n/2; i++){//һ�������� i+j=n-1 
			int j = n-1-i;
			int length = n - 2 * i;//�����εĿ�� 
			char current;
			if((n/2 - i ) % 2 == 0){//�����ĵľ���Ϊż������������ɫͬɫ 
				current = center;
			}else{
				current = outside;
			}
			for(int k = 0; k < length; k++){
				matrix[i][i+k] = current;
				matrix[i+k][i] = current;
				matrix[j][j-k] = current;
				matrix[j-k][j] = current;
			} 
		}
		if(n != 1){
			matrix[0][0] = ' ';
			matrix[0][n-1] = ' ';
			matrix[n-1][0] = ' ';
			matrix[n-1][n-1] = ' ';
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%c",matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 
