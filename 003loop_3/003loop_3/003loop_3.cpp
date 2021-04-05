#include<stdio.h>

int main(void)
{

	/*
	2-2

	*
	*
	**
	**
	***
	***
	****
	****
	*****
	*****

	*/
	printf("\n[¹®Á¦2-2]\n");

	int starloop2 = 0;

	while (starloop2 < 10)
	{

		int b = 0;
		while (b <= starloop2)
		{
			printf("*");
			b += 2;
		}
		starloop2++;
		printf("\n");
	}

	return 0;
	fgetc(stdin);
}