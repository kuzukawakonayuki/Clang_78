#include "stdio.h"
int main ()
{
  int number1[5] = {0,0,0,0,0};
  int number2[5] = {0,0,0,0,0};
  int answer[10] = {0,0,0,0,0,0,0,0,0,0};
  int loop,set,count;

  printf("1stset!\n[0]~[4]\nyour_input!\n");
  for (loop = 0; loop < 5; loop++)
  {
    printf("1st\ninput[%d]\n",loop);
    scanf("%d",&number1[loop]);
  }

  printf("2ndset!\n[0]~[4]\nyour_input!\n");
  for (loop = 0; loop < 5; loop++)
  {
    printf("2nd\ninput[%d]\n",loop);
    scanf("%d",&number2[loop]);
  }

  count = 4;
  for (loop = 9; loop >= 0; loop--)
  {
    set = 0;
    set = number1[count] * number2[count];
    answer[loop] = set % 10;
    printf("%d",answer[loop]);
    loop--;
    answer[loop] = set / 10;
    printf("%d",answer[loop]);
    count++;
  }
  printf("\n");
}
