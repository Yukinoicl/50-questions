#include <stdio.h>

int main(void) 
{   
    double a,b,c;
    
    printf("输入:\n");
    
    printf("实数a:\n");   scanf("%lf",&a);
    printf("实数b:\n");   scanf("%lf",&b);
    printf("实数c:\n");   scanf("%lf",&c);
    
    if (a+b<=c || a+c<=b || b+c<=a)
        printf("4");
    else if (a==b && b==c)
        printf("1");
    else if (a==b || b==c)
        printf("2");
    else
        printf("3");
	return 0;
}