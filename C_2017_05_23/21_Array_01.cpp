#include "stdio.h"
int main()
{
  int tbl[10] = {0,0,0,0,0,0,0,0,0,0};
  int count;
  int set = 10;
  for(count = 0;count <= 9;count++)
  {
    tbl[count] = set;
    set += 10;
  }
  count = 0;
  for(count = 0;count <= 9;count++)
  {
    printf("%d ",tbl[count]);
  }
  printf("\n");
  set = 0;
  printf("ChangeArray?\n");
  scanf("%d",&set);
  printf("ChangeNum?\n");
  scanf("%d",&tbl[set]);
  count = 0;
  for(count = 0;count <= 9;count++)
  {
    printf("%d ",tbl[count]);
  }
  printf("\n");
  return 0;
}
