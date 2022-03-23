#include<stdio.h>
int main()
{
int m,n,p,q,i,j,k;
printf("enter the size of matrix A:");
scanf("%d%d",&m,&n);
if(n!=p)
	{
	printf("matrix multiplication not possible\n");
	return 1;
	}
int a[m][n],b[p][q],c[m][q];
printf("enter dat into matrix a:");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
  {
  printf("%d\t",a[i][j]);
  }
printf("/n");
}
printf("enter data into matrix b:");
for(i=0;i<p;i++)
{
  for(j=0;j<q;j++)\
  {
  printf("%d",b[i][j]);
  }
printf("\n");
}
for(i=0;i=m;i++)
{
  for(j=0;j<q;j++)
  {
  c[i][j]=0;
for(k=0;k<n;k++)
  {
  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
  }
 }
}
for(i=0;i<m;i++)
{
  for(j=0;j<q;j++)
  {
  printf("%d",c[i][j]);
  }
printf("\n");
}
return 0;
}

