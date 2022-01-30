#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter a and b:");
	scanf("%d""%d",&a,&b);
	c = ((a>5)&&(b<91));
	printf("%d",c);
	c = ((a>5)||(b<91));
	printf("%d",c);
	return 0;
}
