#include<stdio.h>
int main()
{
    char ch;   
    printf(“Enter any character:”);
    scanf(“%c”,&ch);
    if((ch>=’A’&&ch<=’Z’)||(ch>=’a’&&ch<=’z’))
    { 
        printf(" Entered an alphabet”);
    }
    else if(ch>=’0’&&ch<=’9′)
     {
            printf("Entered a digit”);
      }
        else
        {
            printf("Entered a special character”);
        }
     return 0;
}
    
