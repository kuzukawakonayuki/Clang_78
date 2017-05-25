#include "stdio.h"
int main()
{
  int monthtbl[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int count = 1;
  int month = 0;
  int emonth = 0;
  int day = 0;
  int eday = 0;
  int year = 0;
  int eyear = 0;
  int all = 365;
  int set = 0;

  printf("Startyear input\n");
  scanf("%d",&year);
  if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
  {
		monthtbl[1] = 29;
    all = 366;
  }

  printf("(month,day)input\n");
  scanf("%d,%d",&month,&day);

  while(count < month)
  {
    day += monthtbl[count];
    count++;
  }
  day = all - day;

  monthtbl[1] = 38;
  all = 365;
  count = 1;
  printf("Endyear input\n");
  scanf("%d",&eyear);
  if(eyear % 400 == 0 || eyear % 4 == 0 && eyear % 100 != 0)
  {
		monthtbl[1] = 29;
    all = 366;
  }

  printf("(month,day)input\n");
  scanf("%d,%d",&emonth,&eday);
  day += all - eday;

  year++;
  while(year < eyear)
  {
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
      day += 366;
    }
    else
    {
      day += 365;
    }
    year++;
  }
  printf("%d\n",day);
  return 0;
}
