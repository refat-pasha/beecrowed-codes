#include<stdio.h>
int main()
{
    int a, b, c, d,e;

     scanf("%d",&a);
     printf("%d\n",a);
     b=a/3600;
     c=a%3600;
     d=c/60;
     e=c%60;

     printf("%d:%d:%d\n",b,d,e);
     return 0;
}
