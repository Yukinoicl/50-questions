#include<stdio.h>

int main(void)
{
	int n,i,j;

	while(scanf("%d",&n)!=EOF)
	{
		i = 1;

		while(n--)
		{
			scanf("%d",&j);

			if(j % 2 != 0)

				i *= j;

		}

		printf("%d\n",i);

	}

	return 0;