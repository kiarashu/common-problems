#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, n;
	
	printf("Please enter your number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(j == i || j == n-(i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
