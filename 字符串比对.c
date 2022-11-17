/*题目内容：

题目说起来很简单，你会读到两个字符串，
每个字符串占据一行，每个字符串的长度
均小于10000字符，而且第一个字符串的
长度小于第二个字符串的。你的程序要找
出第一个字符串在第二个字符串中出现的
位置，输出这些位置，如果找不到，则输
出-1。



注意，第一个字符的位置是0。



注意，第一个字符串在第二个字符串中的位
置可能不止一处。



注意，字符串中可能含有空格。



注意，两个字符串的长度一定大于0。



输入格式:

两个字符串，一行一个。



输出格式：

第一个字符串在第二个字符串中出现的
位置，按照从小到到的顺序排列，每个
数字后面有一个空格。

如果在第二个字符串中找不到第一个字
符串，则输出-1。



输入样例：

abba
ababbba abbabbabbabbaacc



输出样例：

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

