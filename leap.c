#include<stdio.h>
int main()
{
 int year;
 printf("Enter the year: ");
 scanf("%d",&year);
 if(year%4==0)
 {
  printf("%d Leap year",year);
 }
 else
 {
  printf("%d Not leap year",year);
 }
 return 0;
}
