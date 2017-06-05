#include "stdio.h"
int main()
{
  int pic1[7][7] = {{1,1,1,1,1,1,1},
                    {0,0,0,1,0,0,0},
                    {0,0,0,1,0,0,0},
                    {0,1,0,1,1,1,1},
                    {0,1,0,1,0,0,0},
                    {0,1,0,1,0,0,0},
                    {1,1,1,1,1,1,1}};

  int pic2[7][7] = {{1,1,1,1,1,1,1},
                    {0,0,0,1,0,0,0},
                    {0,0,0,1,0,0,0},
                    {0,1,0,1,1,1,1},
                    {0,1,0,1,0,0,0},
                    {0,1,0,1,0,0,0},
                    {1,1,1,1,1,1,1}};
  int roop1,roop2,set,select;
  select = 0;
  set = 0;
  for (roop1 = 0;roop1 <= 6;roop1++)
  while(1)
  {
    //ベース表示
    printf("BasePic\n");
    for (roop1 = 0;roop1 <= 6;roop1++)
    {
      for (roop2 = 0;roop2 <= 6;roop2++)
      {
        if (pic1[roop1][roop2] == 1)
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

    //回転選択
    printf("\n\n\nRight90°...0\nLeft90°...1\nTopBottom180°...2\nSide180...3°\ninput\n");
    scanf("%d",&select);
    //右回転90
    if (select == 0)
    {
      for(roop1 = 0;roop1 <= 6;roop1++)
      {
        for(roop2 = 0;roop2 <= 6;roop2++)
        {
          pic2[roop2][6 - roop1] = pic1[roop1][roop2];
        }
      }
    }
    //左回転90
    else if (select == 1)
    {
      for(roop1 = 0;roop1 <= 6;roop1++)
      {
        for(roop2 = 0;roop2 <= 6;roop2++)
        {
          pic2[6 - roop2][roop1] = pic1[roop1][roop2];
        }
      }
    }
    //上下180
    else if (select == 2)
    {
      for(roop1 = 0;roop1 <= 6;roop1++)
      {
        for(roop2 = 0;roop2 <= 6;roop2++)
        {
          pic2[6 - roop1][roop2] = pic1[roop1][roop2];
        }
      }
    }
    //左右180
    else if(select == 3)
    {
      for(roop1 = 0;roop1 <= 6;roop1++)
      {
        for(roop2 = 0;roop2 <= 6;roop2++)
        {
          pic2[roop1][6 - roop2] = pic1[roop1][roop2];
        }
      }
    }

    //転写
    for (roop1 = 0;roop1 <= 6;roop1++)
    {
      for (roop2 = 0;roop2 <= 6;roop2++)
      {
        pic1[roop1][roop2] = pic2[roop1][roop2];
      }
    }
  }
  return 0;
}
