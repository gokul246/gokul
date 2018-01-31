#include <stdio.h>
#include<stdio.h>
 int main()
{
  char b;
  printf("Enter a character\n");
  scanf("%c", &b);
  if (b == 'a' || b == 'A' || b== 'e' || b== 'E' || b == 'i' || b == 'I' || b =='o' || b=='O' || b== 'u' || b== 'U')
    printf("%c is a vowel.\n", b);
  else
    printf("%c is not a vowel.\n", b);
  return 0;
}
