//计算两个矩阵的乘积 第一个2*3 第二个人3*2 
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
			printf("%d ", x.matrix[i][j]); 
		}
		printf("\n");
	}
	return ;
}

int main(){
	Matrix x(2, 3);
	Matrix y(3, 2);
	InputMatrix(x);
	InputMatrix(y);
	Matrix ans = Multiply(x, y);
	OutputMatrix(ans);
	return 0;
} 










