#include "stdio.h"
int main()
{
  int bit[10] = {0,0,0,0,0,0,0,0,0,0};
  int i = 0;
	int ans,set;
  printf("binary for decimal and Negative integer expressed as one's complement\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d\n",&bit[i]);
	}

  if (bit[0] = 1)
  {
    ans = 0;
  	set = 1;
  	for(i = 9;i >= 0;i--)
  	{
      ans += bit[i] * set;
      set = set * 2;
  	}
  }
  else
  {
    for(i = 9;i >= 0;i--)
  	{
      if(0 == bit[i])
      {
        bit[i] = 1;
      }
      else
      {
        bit[i] = 0;
      }
  	}

    ans = 0;
  	set = 1;
  	for(i = 9;i >= 0;i--)
  	{
      ans += bit[i] * set;
      set = set * 2;
  	}
    ans *= -1;
  }

	printf("decimal for %d",ans);
	return 0;
}
