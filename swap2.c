#include <stdio.h>
int main()
{
	int a, b;
    printf( "\nbefore swapping a = \n");
    scanf("%d",&a);
   printf( "\nbefore swapping b = \n");
    scanf("%d",&b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf( "\nafter swapping a =%d \n",a);
    printf( "\nafter swapping b =%d \n",b);
    return 0;
}
