#include <stdio.h>
	int main()
	{int i,b;
	for(i=1;i<4;i++)
		{
			printf("outer loop is %d",i);
			for(b=1;b<4;b++)
			{
				printf("\t inner loop is %d\n",b);
			}
		}
	return 0;
	}
