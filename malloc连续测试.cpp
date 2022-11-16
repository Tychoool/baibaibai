#include<stdio.h>
#include<stdlib.h>

int main()
{
	void *p;
	void *q;
	void *r;
	q=malloc(1);
	p=malloc(1);
	r=malloc(1);
	printf("%d\n",q); 
	printf("%d\n",p);
	printf("%d\n",r); 
	free(p);
	free(q);
	return 0;
 }
