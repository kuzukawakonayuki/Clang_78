#include"stdio.h"
int main()
  {
    int ans[10] = {0,0,0,0,0,0,0,0,0,0};
	  int input,i;
	  printf("input\n-1~-511\n");
	  scanf("%d",&input);
    input = input * -1;
	  for(i = 9;input != 0;i--)
     {
       ans[i] = input % 2;
       input = input / 2;
     }
	  for(i = 0;i < 10;i++)
     {
       if(ans[i] == 0)
        {
          printf("1");
        }
       else
        {
          printf("0");
        }
     }
	return 0;
}
