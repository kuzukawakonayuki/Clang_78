#include "stdio.h"
int main()
{
  int tbl[5] = {80,50,40,70,100};
  int set = 0;
  int count = 0;
  while (count <= 4)
  {
    printf("%d:score%d\n",set += 1,tbl[set]);
    count++;
  }
  return 0;
}
