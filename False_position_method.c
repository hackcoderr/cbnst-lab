
#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x*x*x-2*x+4
int main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    printf("Enter the value of x1 and x2:\n");
    scanf("%f %f",&x0,&x1);

do{

     f0=f(x0);
     f1=f(x1);
     f2=f(x2);
     x2=((x0*f1)-(x1*f0))/(f1-f0);
    if(f0*f2<0)
     {
        x1=x2;
        f1=f2;
     }
    else
     {

      x0=x2;
      f0=f2;
     }
    printf("\nvalue of root: %f",x2);
    printf("\nvalue of function: %f",f2);

    }
    while(fabs(f2)<e);
    return 0;

}




