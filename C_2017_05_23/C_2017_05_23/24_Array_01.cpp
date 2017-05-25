#include "stdio.h"
int main()
{
  int bit[10] = {0,0,0,0,0,0,0,0,0,0};
  int i = 0;
	int ans,set;
  printf("binary decimal for 10s\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d\n",&bit[i]);
	}
	ans = 0;
	set = 1;
	for(i = 9;i >= 0;i--)
	{
    ans += bit[i] * set;
    set = set * 2;
	}
	printf("decimal for %d",ans);
	return 0;
}
