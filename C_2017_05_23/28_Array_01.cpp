#include "stdio.h"
int main()
{
  int number1[10] = {0,0,0,0,0,0,0,0,0,0};
  int number2[10] = {0,0,0,0,0,0,0,0,0,0};
  int answer[11] = {0,0,0,0,0,0,0,0,0,0,0};
  int loop,set,select;

  printf("1stset!\n1st[0]~[9]\nyour_input!\n");
  for (loop = 0; loop < 10; loop++)
  {
    printf("input!\n[%d]\n",loop);
    scanf("%d",&number1[loop]);
  }

  printf("2ndset!\n2nd[0]~[9]\nyour_input!\n");
  for (loop = 0; loop < 10; loop++)
  {
    printf("input!\n[%d]\n",loop);
    scanf("%d",&number2[loop]);
  }

  select = 10;
  for (loop = 9; loop >= 0; loop--)
  {
    set = 0;
    set = number1[loop] + number2[loop];
    answer[select] += set % 10;
    select--;
    answer[select] += set / 10;
  }

  for (loop = 0; loop < 11; loop++)
  {
    printf("%d",answer[loop]);
  }
  printf("\n");
  return 0;
}
