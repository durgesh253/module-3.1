#include<stdio.h>
int main()
{
    float principle,time,rate;

   printf("entre the value of principal:");
   scanf("%f",&principle);

   printf("enter the timeline:");
    scanf("%f",&time);

   printf("enetr the rate:");
   scanf("%f",&rate);

   printf("simple intrest= %f",(principle *time *rate)/100);
   return 0;
}