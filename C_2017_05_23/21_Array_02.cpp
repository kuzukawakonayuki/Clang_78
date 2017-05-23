#include "stdio.h"
int main()
{
  int tbl[10] = {0,0,0,0,0,0,0,0,0,0};
  int count;
  int c1,c2;
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
  printf("ChangeArray?\n(Change1,Change2)\n");
  scanf("%d,%d",&c1,&c2);
  set = tbl[c1];
  tbl[c1] = tbl[c2];
  tbl[c2] = set;
  count = 0;
  for(count = 0;count <= 9;count++)
  {
    printf("%d ",tbl[count]);
  }
  printf("\n");
  return 0;
}
