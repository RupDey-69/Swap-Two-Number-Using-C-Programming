//Swap Using Third Variable..
#include<stdio.h>
int main ()
{

int a,b,temp;
printf("Enter the Fast Number:");
scanf("%d",&a);

printf("Enter the Second Number:");
scanf("%d",&b);


printf("\nBefor Swaping a=%d and b=%d",a,b);

temp=a;
a=b;
b=temp;

printf("\nAfter Swaping a=%d and b=%d",a,b);



return 0;
}