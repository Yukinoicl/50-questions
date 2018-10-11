#include <stdio.h>

int main(void)
{
    
    int x,y,z,a;
    
    printf("请输入两个正整数:\n");
    printf("整数x:");   scanf("%d",&x);
    printf("整数y:");   scanf("%d",&y);
    
    if (x<y){
        
        a=x;
        x=y;
        y=a;
    }
    
　　while (y!=0) {
　　    
    　　z=x%y;
    　　x=y;
    　　y=z;
    　　
　　}
　　
　　printf("%d\n",z);
    
    return 0;
    
} 