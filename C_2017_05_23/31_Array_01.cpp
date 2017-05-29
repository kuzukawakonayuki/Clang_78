#include "stdio.h"
int main()
{
  int table[5][6] = {{0,0,0,0,0,0},
                     {0,0,0,0,0,0},
                     {0,0,0,0,0,0},
                     {0,0,0,0,0,0},
                     {0,0,0,0,0,0}};
  int loop1,loop2;

  for (loop1 = 0; loop1 <= 4; loop1++)
  {
    for (loop2 = 0; loop2 <= 4; loop2++)
    {
      printf("input_for_%d-%d\n",loop1,loop2);
      scanf("%d",&table[loop1][loop2]);
    }
  }

  for (loop1 = 0; loop1 <= 4; loop1++)
  {
    for (loop2 = 0; loop2 <= 4; loop2++)
    {
      table[loop1][5] = table[loop1][5] + table[loop1][loop2];
    }
    printf("SUM_for_%d-0~4:%d\n",loop1,table[loop1][5]);
  }
  return 0;
}
