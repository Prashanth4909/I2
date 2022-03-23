#include<stdio.h>
int main()
{
	char name[15];
	float units,charge,total;
	printf("enter name:\n");
	gets(name);
	printf("enter the number of units:\n");
	scanf("%f",&units);
if(units>=1 && units<=200)
{
	charge=units*0.8;

}
else if(units>200 && units<300)
{
	charge=(200*0.8)+(units-200)*0.9;
}
else if(units>300)
{
	charge=(200*0.8)+(100*0.9)+(units-300)*1;
}
total=charge+100;
if(total>400)
{
	total=total+(total*0.15);
}
	printf("\nelectricity bill\n");
	printf("\nusername: %s\n",name);
	printf("\nunits=%2f\n",units);
	printf("\ntotal bill amount=%2f\n",total);
return 0;
}

