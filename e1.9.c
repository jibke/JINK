#include<stdio.h>
int main(void)
{
    int x,y,z;
    int m;
    puts("请输入三个整数.");
    printf("整数1:");     scanf("%d",&x);
    printf("整数2:");     scanf("%d",&y);
    printf("整数3:");     scanf("%d",&z);
    m=x+y+z;
    printf("它们的和是%d,\n",m);
    return 0;
}
