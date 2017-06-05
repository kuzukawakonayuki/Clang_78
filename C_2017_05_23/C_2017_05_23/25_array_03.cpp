#include "stdio.h"
int main()
  {
    int ans[10] = {0,0,0,0,0,0,0,0,0,0};
	  int input,i;
    bool set,select;
    set = false;
    select = false;
	  printf("input\n-511~511\n");
	  scanf("%d",&input);
    if(input == 0)
      {
        set == true;
      }
    else if(input < 0)
      {
        input = input * -1;
        select = true;
      }
    for(i = 9;input != 0;i--)
      {
        ans[i] = input % 2;
        input = input / 2;
      }

    if(set == false)
      {
        if(select == true)
          {
            for(i = 0;i < 10;i++)
             {
               if(ans[i] == 0)
                {
                  ans[i] = 1;
                }
               else
                {
                  ans[i] = 0;
                }
             }
          }
        for(i = 0;i < 10;i++)
         {
           printf("%d",ans[i]);
         }
      }
    else if(set == true)
      {
        printf("0000000000\n");
      }
    return 0;
  }
