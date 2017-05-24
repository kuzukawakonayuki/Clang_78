#include<stdio.h>
int main(void)
{	int monthtbl[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i,total,year,month,day;
	printf("input year");
	scanf("%d",&year);
	printf("input month");
	scanf("%d",&month);
	printf("input day");
	scanf("%d",&day);
	if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		monthtbl[1] = 29;
	total = monthtbl[month - 1] - day;
	for(i = month;i < 12;i++)
	{	total = total + monthtbl[i];
	}
	printf("%d/%d～12/31[%d]day",month,day,total);
	return 0;
}
