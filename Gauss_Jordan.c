#include<stdio.h>
int main()
{
 double a[10][10],p,k,x,y,z  ;
 int i,j,n;
 printf("Enter the terms");
 scanf("%d",&n);
 printf("Enter the coeficients followed by constants");
 for(i=0;i<n;i++)
 {
    for(j=0;j<=n;j++)
    {
      scanf("lf",&a[i][j]);
    }
 }
 for(i=1;i<n;i++)
 {
    k=a[i][0]/a[0][0];
    for(j=0;j<=n;j++)
    {
      a[i][j]=a[i][j]-k*a[0][j];
    }
 }
 for(i=1;i<n;i++)
 {

    for(j=0;j<=n;j++)
    {
      if(i>j&&a[i][j]!=0)//checking if any element is there below the diagonal which is non zero
      k=a[i][j]/a[i-1][j];
      a[i][j]=a[i][j]-k*a[i-1][j];
    }
 }// after this we would get our desired upper triangular matrix
 z=a[n-1][n]/a[n-1][n-1];
 y=(a[n-2][n]-z*a[n-2][n-1])/a[n-2][n-2];
 x=(a[n-3][n]-z*a[n-3][n-1]-y*a[n-3][n-1])/a[n-3][n-3];
 printf("Value are %lf %lf %lf",x,y,z);//get value of x,y,z
}
