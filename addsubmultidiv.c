#include<stdio.h>
int main()
{
	int a,b,add,subtract,multiply,division;
	
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	
	add = a+b;
	subtract= a - b;
	multiply= a * b;
	division= a / b;
	
	printf("sum = %d \n",add);
	printf("diffrence = %d \n",subtract);
	printf("multiply = %d \n",multiply);
	printf("division = %d \n",division);
    return 0;
	}
