#include "stdio.h"
int main()
{
  int tbl[5] = {0,0,0,0,0};
  int count = 0;
  int set = 0;
  while (count <= 4)
  {
    printf("tbl[%d] = ?\n",count);
    scanf("%d",&tbl[count]);
    count++;
  }
  count = 1;
  while (count <= 5)
  {
    printf("Try%d:%d\n",count,tbl[set]);
    count++;
    set++;
  }
  return 0;
}
