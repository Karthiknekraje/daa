#include<stdio.h>
void Warshall(int a[10][10],int);
int main()
{
int i,j,n,a[10][10];
printf("enter the number of vertices:\n");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
printf("(%d,%d):",i,j);
scanf("%d",&a[i][j]);
}
Warshall(a,n);
printf("all pair distance matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
void Warshall(int a[10][10],int n)
{
int i,j,k;
for(k=1;k<=n;k++)
for(j=1;j<=n;j++)
for(i=1;i<n;i++)
a[i][j]=a[i][j]||a[i][k]&&a[k][j];
}
