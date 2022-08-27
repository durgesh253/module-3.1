#include<stdio.h>
int main()
{
	int a,b,add,subtract,multiply,division,mod;
	
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	
	add = a+b;
	subtract= a - b;
	multiply= a * b;
	division= a / b;
	mod=a%b;
	
	printf("sum = %d \n",add);
	printf("diffrence = %d \n",subtract);
	printf("multiply = %d \n",multiply);
	printf("division = %d \n",division);
	printf("mod= %d \n",mod);
    return 0;
	}
