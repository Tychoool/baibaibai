/*��Ŀ���ݣ�

��Ŀ˵�����ܼ򵥣������������ַ�����
ÿ���ַ���ռ��һ�У�ÿ���ַ����ĳ���
��С��10000�ַ������ҵ�һ���ַ�����
����С�ڵڶ����ַ����ġ���ĳ���Ҫ��
����һ���ַ����ڵڶ����ַ����г��ֵ�
λ�ã������Щλ�ã�����Ҳ���������
��-1��



ע�⣬��һ���ַ���λ����0��



ע�⣬��һ���ַ����ڵڶ����ַ����е�λ
�ÿ��ܲ�ֹһ����



ע�⣬�ַ����п��ܺ��пո�



ע�⣬�����ַ����ĳ���һ������0��



�����ʽ:

�����ַ�����һ��һ����



�����ʽ��

��һ���ַ����ڵڶ����ַ����г��ֵ�
λ�ã����մ�С������˳�����У�ÿ��
���ֺ�����һ���ո�

����ڵڶ����ַ������Ҳ�����һ����
�����������-1��



����������

abba
ababbba abbabbabbabbaacc



���������

8 11 14 17*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10001];
	char str2[10001];
	int flag=0;
	int cnt=0;
	int i=0;
	int h=0;
	int loc=0;
	int locs[10001]; 
	while(1){
		str1[i]=getchar();
		if(str1[i]=='\n'){
			break;
		}
		i++;
	}
	str1[i]='\0';
	i=0;
	while(1){
		str2[i]=getchar();
		if(str2[i]=='\n'){
			break;
		}
		i++;
	}
	str2[i]='\0';
	int len=strlen(str2)-strlen(str1);
	for(loc=0;loc<=len;loc++){
		char *p=str1;
		char *q=&str2[loc];
		while(*p){
			if(*p==*q){
				p++;
				q++;
			}
			else{
				break;
			}
		}
		if(*p=='\0'){
			flag=1;
			locs[cnt]=loc;
			cnt++;
		}
	}
	if(flag==1){
		for(h=0;h<cnt-1;h++){
			printf("%d ",locs[h]);
		}
		printf("%d",locs[cnt-1]);
	}
	else{
		printf("-1");
	}
	return 0;
 }

