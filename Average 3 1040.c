#include<stdio.h>
int main()
{
    double a,b,c,d,e,sum;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    sum=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n", sum);
    if(sum>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(sum>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1f\n", e);

        if(e+sum/2.0>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (e + sum ) / 2.0);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }



    return 0;
}
