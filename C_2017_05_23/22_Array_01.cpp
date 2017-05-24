#include "stdio.h"
int main()
{
  int tbl[5] = {0,0,0,0,0};
  int count = 0;
  int set = 1;
  for(count = 0;count <= 4;count++)
  {
    printf("SOCRE%d input\n",set);
    scanf("%d",&tbl[count]);
    set++;
  }

  count = 0;
  set = 0;
  for(count = 0;count <= 4;count++)
  {
    set += tbl[count];
  }
  printf("%d\n",set);
  return 0;
}
