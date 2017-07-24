#include <stdio.h>
int main()
 {
    int a[3];
    int i;
    int greatest;
    printf("Enter three values:");
    for (i = 0; i < 3; i++) 
    {
    	scanf("%d", &a[i]);
    }
    greatest = a[0];
    for (i = 0; i < 3; i++) 
    {
	  if (a[i] > greatest) 
    {
	  greatest = a[i];
    }
    }
    printf("Greatest of three numbers is %d", greatest);
    return 0;
  }
