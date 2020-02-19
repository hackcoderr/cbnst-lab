#include<stdio.h>
int main()
{
int i,j,k,n;
float a[100][100],x[10],c;
printf("Enter the order of the matrix \n");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=(n+1);j++)
{
scanf("%f",&a[i][j]);
}
}
for(j=1;j<=n;j++)
{
for(i=1;i<=n;i++)
{
if(i!=j)
{
c=a[i][j]/a[j][j];
for(k=1;k<=(n+1);k++)
{
a[i][k]=a[i][k]-c*a[j][k];
}
}
}
}
printf("Matrix after Gauss Elimination\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=(n+1);j++)
{
printf("%0.1f\t",a[i][j]);
}
printf("\n");
}
printf("\nThe Solution is\n");
for(i=1;i<=n;i++)
{
x[i]=a[i][n+1]/a[i][i];
printf("\nx%d=%0.1f\t",i,x[i]);
}
return 0;
}
