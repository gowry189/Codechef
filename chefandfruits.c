#include<stdio.h>
int main()
{
	int testcase,a,o,coin,diff;
	scanf("%d",&testcase);
	while(testcase--)
	{
		scanf("%d %d %d",&a,&o,&coin);
		if(a>o)
		{
			diff=a-o;
			if(diff-coin>=0)
			printf("%d\n",diff-coin);
			else
			{
				printf("0\n");
			}
		}
		else
		{
				diff=o-a;
			if(diff-coin>=0)
			printf("%d\n",diff-coin);
			else
			{
				printf("0\n");
			}
		}
	}
	return 0;
}   
