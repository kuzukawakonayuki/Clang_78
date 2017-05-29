#include "stdio.h"
int main()
{
  int table[10][10];
  int loop1;
  for(loop1 = 0; loop1 <= 99; loop1++)
  {
    set1 = loop1;
    set2 = loop1;
    table[set1/10][set2%10] = 0;
    printf("%d",table[set1/10][set2%10]);
    if (set2 == 0)
    {
      printf("\n")
    }
  }
  return 0;
}
