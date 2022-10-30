/*题目内容：

我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，
包括第n个素数和第m个素数。



输入格式:

两个整数，第一个表示n，第二个表示m。



输出格式：

一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。



输入样例：

2 4



输出样例：

15*/

#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	const int max=m*m+2;
	int i,x,y,sum=0,isPrime[max];
	for(i=2;i<max;i++){
		isPrime[i]=1;
	}
	for(x=2;x<max;x++){
		if(isPrime[x]){
			for(i=2;i*x<max;i++){
				isPrime[i*x]=0;
			}
		}
	}
	for(i=2,y=0;i<max;i++){
		if(isPrime[i]){
			y++;
			if(y>=n&&y<=m){
				sum+=i;
			}
		}		
	}	
	printf("%d",sum);
return 0;
}
