#include<stdio.h>
#include<math.h>
int main()
{
    float a,s,d,f,g;
    scanf("%f%f%f",&a,&s,&d);
    if(1<=a<=s<=d<=1000)
    f=(a+s+d)/2;
    g=sqrt(f*(f-a)*(f-s)*(f-d));
    printf("%.2f",g);
    return 0;
}