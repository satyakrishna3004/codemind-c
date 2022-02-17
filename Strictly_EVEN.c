#include<stdio.h>
int main()
{
    int a[20],n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            if(j%2!=0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}