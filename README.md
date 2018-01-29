#include <stdio.h>
#include<conio.h> 
void main()
{
    int i;
 
    printf("Enter a number: \n");
    scanf("%d", &i);
    if (i > 0)
        printf("%d is positive number \n", i);
    else if (i < 0)
        printf("%d is negative number \n", i);
    
        printf("0 is neither positive nor negative");
  
        getch();
}
