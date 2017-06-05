#include "stdio.h"
int main()
  {
    int table[10] = {1,2,3,4,5,6,7,8,9,10};
    int input,loop1,loop2,set;
    input = 0;
    printf("input\nshift_Number\n");
    scanf("%d",&input);

    for(loop1 = 1; loop1 <= input; loop1++)
      {
        for(loop2 = 0; loop2 <= 9; loop2++)
          {
            set = 0;
            if(loop2 != 9)
              {
                set = loop2 + 1;
                table[loop2] = table[set];
              }
            else if(loop2 == 9)
              {
                table[loop2] = 0;
              }
          }
      }
    for(loop1 = 0; loop1 <= 9; loop1++)
      {
        printf("%d",table[loop1]);
      }
    return 0;
  }
