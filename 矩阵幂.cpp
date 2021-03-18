//¾ØÕóÃİ n*nµÄ¾ØÕóPµÄk´ÎÃİ 
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

const int MAXN = 100;

struct Matrix{
	int row, col;
	int matrix[MAXN][MAXN];
	Matrix(){}
	Matrix(int r, int c) : row(r), col(c){}
};

Matrix Add(Matrix x, Matrix y){
	Matrix ans = Matrix(x.row, x.col);
	for(int i = 0; i < ans.row; i++){
		for(int j = 0; j < ans.col; j++){
			ans.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
		}
	}
	return ans;
}

Matrix Multiply(Matrix x, Matrix y){
	Matrix ans = Matrix(x.row, y.col);
	for(int i = 0; i < ans.row; i++){
		for(int j = 0; j < ans.col; j++){
			ans.matrix[i][j] = 0;
			for(int k = 0; k < x.col; k++){
				ans.matrix[i][j] += x.matrix[i][k] * y.matrix[k][j];
			}
		}
	}
	return ans;
}

Matrix Transpose(Matrix x){
	Matrix ans = Matrix(x.col, x.row);
	for(int i = 0; i < x.row; i++){
		for(int j = 0; j < x.col; j++){
			ans.matrix[i][j] = x.matrix[j][i];
		}
	}
	return ans;
}

Matrix QuickPower(Matrix x, int n){
	Matrix ans = Matrix(x.row, x.col);
	for(int i = 0; i < ans.row; i++){
		for(int j = 0; j < ans.col; j++){
			if(i == j){
				ans.matrix[i][j] = 1;
			}else{
				ans.matrix[i][j] = 0;
			}
		}
	}
	while(n != 0){
		if(n % 2 == 1){
			ans = Multiply(ans, x);
		}
		n /= 2;
		x = Multiply(x, x);
	}
	return ans;
}

void InputMatrix(Matrix& x){
	for(int i = 0; i < x.row; i++){
		for(int j = 0; j < x.col; j++){
			scanf("%d", &x.matrix[i][j]); 
		}
	}
	return ;
}

void OutputMatrix(Matrix x){
	for(int i = 0; i < x.row; i++){
		for(int j = 0; j < x.col; j++){
			if(j == 0){
				printf("%d",x.matrix[i][j]);
			}else{
				printf(" %d", x.matrix[i][j]); 	
			}
		}
		printf("\n");
	}
	return ;
}

int main(){
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF){
		Matrix x = Matrix(n, n);
		InputMatrix(x);
		Matrix ans = QuickPower(x, k);
		OutputMatrix(ans);
	} 
	return 0;
} 










