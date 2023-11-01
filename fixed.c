#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) cos(x)-3*x+1
#define g(x) (1+cos(x))/3

int main()
{
    int step=1,N;
    float x0,x1,e;
    

    printf("Enter the enitial guss : ");
    scanf("%f",&x0);
    printf("Enter the tollerable error : ");
    scanf("%f",&e);
    printf("Enter the max iteration : ");
    scanf("%d",&N);
    printf("\nstep\tx1\n");

    do
    {
        x1=g(x0);
        printf("%d\t%f\n",step,x1);

        step=step+1;

        if(step>N)
        {
            printf("Not Convergent.");
            exit(0);
        }
        x0=x1;
    } while (fabs(f(x1))>e);

    printf("The Root is : %f",x1);

    return 0;
    
}