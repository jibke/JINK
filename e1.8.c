#include<stdio.h>
int main(void)
{
    int x,y;
    int z;
    puts("请输入两个整数，");
    printf("整数1:");   scanf("%d",&x);
    printf("整数2:");   scanf("%d",&y);
    z=x*y;
    printf("它们的乘积是%d，\n",z);
    return 0;
}
