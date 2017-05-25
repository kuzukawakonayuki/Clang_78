#include "stdio.h"
int main()
{
  int monthtbl[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int count = 1;
  int month = 0;
  int day = 0;
  int year = 0;

  printf("year input\n");
  scanf("%d",&year);
  if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
  {
		monthtbl[1] = 29;
  }

  printf("(month,day)input\n");
  scanf("%d,%d",&month,&day);

  while(count < month)
  {
    day += monthtbl[count];
    count++;
  }
  printf("%d\n",day);
  return 0;
}
