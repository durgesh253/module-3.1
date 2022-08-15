#include<stdio.h>
void main()
{
    int ndays,year;

    printf("enter the total number of days:");
     scanf("%d",&ndays);
    printf("enter the total number of years:");
    scanf("%d",&year);

    year=ndays/365;
    ndays=ndays%365%ndays;

    printf("year:%d",year);
    }