#include "stdio.h"
int main()
{
  int table[10][10];
  int loop1,loop2;
  for (loop1 = 0; loop1 <= 9; loop1++)
  {
    for (loop2 = 0; loop2 <= 9; loop2++)
    {
      table[loop1][loop2] = 0;
      printf("%d",table[loop1][loop2]);
    }
    printf("\n");
  }
  return 0;
}
