#include "stdio.h"
int main()
{
  int tbl[10] = {1,2,3,4,5,6,7,8,9,10};
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
