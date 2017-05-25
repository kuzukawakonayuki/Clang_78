#include "stdio.h"
int main()
{
  int tbl1[10] = {0,0,0,0,0,0,0,0,0,0};
  int tbl2[10] = {0,0,0,0,0,0,0,0,0,0};
  int count = 0;
  int set = 0;
  for(count=0;count<=9;count++)
  {
    set += 10;
    tbl1[count] = set;
  }

  count = 0;
  set = 9;
  for(count=0;count<=9;count++)
  {
    tbl2[set] = tbl1[count];
    set--;
  }

  count = 0;
  for(count = 0;count <= 9;count++)
  {
    printf("%d ",tbl2[count]);
  }
  printf("\n");
  return 0;
}
