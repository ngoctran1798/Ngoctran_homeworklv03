#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,a[100];
    scanf("%d",&n);
    for(i=2;i<n;i++)
        a[i]=i;
    for(j=2;j<sqrt(n);j++)
        {
        for(i=2;i<n;i++)
            {
                a[i*j]=0;
            }
        }
    for(i=2;i<n;i++)
        if(a[i]!=0) printf("%d\n",a[i]);

}

