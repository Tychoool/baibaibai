/*��Ŀ���ݣ�

��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������

������1234���������

yi er san si

ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu����
��-2341���Ϊ��

fu er san si yi



�����ʽ:

һ����������Χ��[-100000,100000]��



�����ʽ��

��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�



����������

-30

���������

fu san ling*/

#include<stdio.h>

int main(){
	int n,x,t=100000;
	scanf("%d",&n);
	if(n!=0){
		if(n<0){
			n=-n;
			printf("fu ");
		}
		while(n/t==0){
		t/=10;
		}
		for(;t>=1;t/=10){
			x=n/t;
			n=n%t;
			switch(x){
				case 0:
					printf("ling");
					break;
				case 1:
					printf("yi");
					break;
				case 2:
					printf("er");
					break;
				case 3:
					printf("san");
					break;
				case 4:
					printf("si");
					break;
				case 5:
					printf("wu");
					break;
				case 6:
					printf("liu");
					break;
				case 7:
					printf("qi");
					break;
				case 8:
					printf("ba");
					break;
				case 9:
					printf("jiu");
					break;
			}
			if(t>1){
			printf(" ");
			}
		}
	}
	else{
		printf("ling");
	}
return 0;
}
