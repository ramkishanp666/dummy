#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int  take_input(char x[])
{
   int i=1;
   x[0]='0';
   while(x[i-1]!='\n')       //x[0]=0 && x[i-1]=\n;
    {
      scanf("%c",&x[i]);
      i++;
    }
  return i-1;
}
int main()
{

	char a[201];
	int l=take_input(a);
	//printf("%s\n",a);

	for (int i = 1; i < l ; i++)
	{
		if (a[i]=='.')
		{
			printf("0");
		}
		else if (a[i]=='-')
		{
			if (a[i+1]=='.')
			{
				printf("1");
				i++;
			}
			else if(a[i+1]=='-')
			{
				printf("2");
				i++;
			}
		}
	}

	return 0;
}
