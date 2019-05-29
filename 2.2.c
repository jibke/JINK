#include<stdio.h>
int main(void)
{
    int x;
    printf("输入一个整数:");scanf("%d",&x);
    printf("整数的最后一位数字是%d,\n",x%10);
    return 0;
}
