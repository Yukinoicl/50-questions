#include <stdio.h>

	int number (int n)
	{
	    for (int i = 2;i < n;++i)
	    
	        if (n % i == 0)
	            return 0;
	        else
	            return 1;
	}
	
int main(void)
{
    int a = 0;

	for (int i = 2; i <= 100; ++i)
	{
		if (number(i))
		{
			a++;

			printf("%2d ", i);

			if (a % 5 == 0)
				puts(" ");

		}
	}
	
	return 0;
}