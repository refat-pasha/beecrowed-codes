#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<6)
    {
        if(n%2!=0)
        {
            printf("%d\n",n);
        i++;
        }
        n++;
    }
}


//using for loop...but not accept in bee
/*#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
        n++;
        if(n%2!=0)
            for(i=0;i<6;i++)
        {
            printf("%d\n",n);
            n=n+2;
        }


    return 0;
}
*/
