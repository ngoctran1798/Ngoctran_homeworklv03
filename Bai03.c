#include<stdio.h>
void main()
{
    int i,n,giaiThua;
    scanf("%d",&n);
    giaiThua=1;
    for(i=1;i<=n;i++)
        giaiThua*=i;
    printf("n!=%d",giaiThua);
}
