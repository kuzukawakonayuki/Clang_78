#include "stdio.h"
int main()
{
  int number[10] = {0,0,0,0,0,0,0,0,0,0};
  int score[10] = {0,0,0,0,0,0,0,0,0,0};
  int loop;
  int topnum = 0;
  int topsco = 0;
  int bottomnum = 9999;
  int bottomsco = 9999;

  printf("your_Set!\nNumber_and_Score\n");
  for (loop = 0; loop < 10; loop++)
  {
    printf("input!\n(Number,Score)\n");
    scanf("%d,%d",&number[loop],&score[loop]);
    if (topsco < score[loop])
    {
      topsco = score[loop];
      topnum = number[loop];
    }
    if (bottomsco > score[loop])
    {
      bottomsco = score[loop];
      bottomnum = number[loop];
    }
  }
  printf("******TOP******\nNumber:%d\nScore:%d\n",topnum,topsco);
  printf("****BOTTOM*****\nNumber:%d\nScore:%d\n",bottomnum,bottomsco);
  return 0;
}
