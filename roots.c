#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d;
	printf("enter the coefficient of the equation");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
if (d==0)
   {
	printf("roots are real and equal");
	r1=r2=-b/2*a;
	printf("r1=r2=%f%f\n",r1,r2);
}
else if (d>0)
   {
	printf("roots are real and not equal");
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	printf("r1=%f r2=%f",r1,r2);
   }
else 
   {
	printf("roots are real and imaginary");
	float real=(-b/2*a);
	float imaginary=(sqrt(-d)/2*a);
	printf("r1=%f+i%f",real,imaginary);
	printf("r2=%f-i%f",real,imaginary);
   }
return 0;
}
