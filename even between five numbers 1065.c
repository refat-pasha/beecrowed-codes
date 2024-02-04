#include <stdio.h>

int main()
{
    int i,num,sum=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
       if(num%2==0)
       {
           sum++;
       }

    }
    printf("%d valores pares\n",sum);

    return 0;
}
