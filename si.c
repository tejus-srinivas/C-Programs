#include <stdio.h>
int main()
{ 
	float si, p, t, r ;
    printf( "enter principle, time and rate = ");
    scanf("%f""%f""%f",&p,&t,&r);
    si = (p * t * r)/100 ;
    printf("Simple interest = %f",si);
    return 0;
}
