#include "stdio.h"
int main()
{
  int tbl[5] = {0,0,0,0,0};
  int roop = 10;
  printf("Your Try Vote!!\nRange:1~5\nExit:0\n");
  while (roop!=0)
  {
    scanf("%d",&roop);
    switch (roop)
    {
      case 0:
      break;

      case 1:
      tbl[0] += 1;
      printf("Next Num\n");
      break;

      case 2:
      tbl[1] += 1;
      printf("Next Num\n");
      break;

      case 3:
      tbl[2] += 1;
      printf("Next Num\n");
      break;

      case 4:
      tbl[3] += 1;
      printf("Next Num\n");
      break;

      case 5:
      tbl[4] += 1;
      printf("Next Num\n");
      break;

      default:
      printf("error!!\nRange:1~5\nExit:0\n");
      break;
    }
  }
  printf("1st:%d\n2nd:%d\n3rd:%d\n4th:%d\n5th:%d\n",tbl[0],tbl[1],tbl[2],tbl[3],tbl[4]);
  return 0;
}
