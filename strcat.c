#include<stdio.h>

char *catstr(char*a,char*b)
{
    char*x=a;
    while(*a!='\0')
    {
        a++;
    }
    while(*b!='\0')
    {
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
    return x;
}


int main()
{
    char str1[] ="abc";
    char str2[]="def";
    char *str=catstr(str1,str2);
    printf("%s\n",str);
    return 0;
}

