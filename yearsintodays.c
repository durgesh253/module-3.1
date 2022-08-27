#include <stdio.h>
void main(){
  
    float year,day;
    printf("Enter Year: ");
    scanf("%f",&year);
    printf("\nConvert To Year to Days: %f",year*365);

    printf("\nEnter Days: ");
    scanf("%f",&day);
    printf("\nConvert Day to Year: %f",day/365);
}
