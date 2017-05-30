#include "stdio.h"
int main()
{
  int table[10][10];
  int loop1;
  int set1 = 0;
  int set2 = 0;
  for(loop1 = 0; loop1 <= 99; loop1++)
  {
    set1 = loop1 / 10;
    set2 = loop1 % 10;
    table[set1][set2] = 0;
    printf("%d",table[set1][set2]);
    if (set2 == 9)
    {
      printf("\n");
    }
  }
  return 0;
}
