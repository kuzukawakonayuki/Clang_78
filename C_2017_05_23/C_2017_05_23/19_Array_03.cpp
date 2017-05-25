#include "stdio.h"
int main()
{
  int tbl[10] = {10,9,8,7,6,5,4,3,2,1};
  int set = 0;
  int count = 0;
  while (count <= 9)
  {
    printf("tbl[%d] = %d\n",count,tbl[set]);
    count++;
    set++;
  }
  return 0;
}
