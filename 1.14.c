#include<stdio.h>
int main(void)
{
    int x,y;
    int z;
    puts("输入两个整数,");
    printf("第一个整数:");   scanf("%d",&x);
    printf("第二个整数:");   scanf("%d",&y);
    z=x+y;
    printf("两个整数的和为%d,\n",z);
    return 0;
}
