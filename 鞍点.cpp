/*题目内容：

给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。一个矩阵A也可能没有鞍点。

你的任务是找出A的鞍点。

 

 

 

输入格式:

输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。

 

输出格式：

对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。

如果找不到，就输出

NO

题目所给的数据保证了不会出现多个鞍点。

 

输入样例：

4 

1 7 4 1 

4 8 3 6 

1 6 1 2 

0 7 8 9

 

输出样例：

2 1*/

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);
		}
	}
	int row_max[n],column_min[n];
	for(int i=0;i<n;i++){
		row_max[i]=-100000;
		column_min[i]=100000;
	}
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			if(matrix[a][b]>row_max[a]){
				row_max[a]=matrix[a][b];
			}
		}
		for(int c=0;c<n;c++){
			if(matrix[c][a]<column_min[a]){
				column_min[a]=matrix[c][a];
			}
		}
	}
	int flag=0;
	for(int d=0;d<n;d++){
		for(int f=0;f<n;f++){
			if(row_max[d]==column_min[f]){
			printf("%d %d",d,f);
			flag=1;
			break;
			}
		}			
	}
	if(flag==0){
		printf("NO");
	}
	
	return 0;
}
	
	
	
	



















