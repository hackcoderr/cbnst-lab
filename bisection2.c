
#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x*x*x-2*x+4
int main()
{
    int i=0;
    float x1,x2,mid;
    float f1,f2,f3;
    printf("Enter the value of x1 and x2:\n");
    scanf("%f %f",&x1,&x2);

do{

     f1=f(x1);
     f2=f(x2);
    mid=(x1+x2)/2;
    f3=f(mid);
    if(f(x1)*f(x2)<0)
    {
        x2=mid;
    }
    else
    {

        x1=mid;
    }
    printf("\nvalue of root: %f",mid);
    printf("\nvalue of function: %f",f3);

    }
    while(fabs(f3)<e);
    printf("\nvalue of root: %f",mid);
    printf("\nvalue of function: %f",f3);
    return 0;

}
