#include "stdio.h"
int main()
{
  int pic[7][7] = {{1,1,1,1,1,1,1},
                   {0,0,0,1,0,0,0},
                   {0,0,0,1,0,0,0},
                   {0,1,0,1,1,1,1},
                   {0,1,0,1,0,0,0},
                   {0,1,0,1,0,0,0},
                   {1,1,1,1,1,1,1}};
  int roop1,roop2,set;
  for (roop1 = 0;roop1 <= 6;roop1++)
  {
    for (roop2 = 0;roop2 <= 6;roop2++)
    {
      if (pic[roop1][roop2] == 1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
