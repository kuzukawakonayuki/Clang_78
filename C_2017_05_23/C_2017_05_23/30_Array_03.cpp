#include "stdio.h"
int main()
{
  int kk[9][9];
  int loop1,loop2,set1,set2,select1,select2;
  set1 = 1;
  set2 = 1;
  for (loop1 = 0; loop1 < 9; loop1++)
  {
    for (loop2 = 0; loop2 < 9; loop2++)
    {
      kk[loop1][loop2] = set1 * set2;
      set2++;
    }
    set1++;
    set2 = 1;
  }

  while (1) {
    select1 = 0;
    select2 = 0;
    printf("x * y = ?\ninput(x,y)\n");
    scanf("%d,%d",&select1,&select2);
    printf("%d * %d = ",select1,select2);
    select1--;
    select2--;
    printf("%d\n\n\n\n",kk[select1][select2]);
  }
  return 0;
}
