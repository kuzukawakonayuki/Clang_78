#include"stdio.h"
int main()
  {
    int ans[10] = {0,0,0,0,0,0,0,0,0,0};
	  int input,i;
	  printf("input\n1~1023\n");
	  scanf("%d",&input);
	  for(i = 9;input != 0;i--)
     {
       ans[i] = input % 2;
       input = input / 2;
     }
	  for(i = 0;i < 10;i++)
     {
       printf("%d",ans[i]);
     }
	return 0;
}
