#include "stdio.h"
int main()
{
  int table[6][6] = {{0,0,0,0,0,0},
                     {0,0,0,0,0,0},
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
      table[loop1][5] += table[loop1][loop2];
    }
    printf("SUM_for_%d-0~4:%d\n",loop1,table[loop1][5]);
  }

  for (loop2 = 0; loop2 <= 4; loop2++)
  {
    for (loop1 = 0; loop1 <= 4; loop1++)
    {
      table[5][loop2] += table[loop1][loop2];
    }
    printf("SUM_for_0~4-%d:%d\n",loop2,table[5][loop2]);
  }

  for(loop1 = 0; loop1 <= 4; loop1++)
  {
    table[5][5] += table[loop1][5];
  }

  for(loop2 = 0; loop2 <= 4; loop2++)
  {
    table[5][5] += table[5][loop2];
  }
  
  printf("AllSUM:%d\n",table[5][5]);
  return 0;
}
