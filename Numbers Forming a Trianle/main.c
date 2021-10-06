#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, n, z;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("\n");
	
	for(i = 0; i <= n - 1; i++)
	{
		for(j = 0; j <= n - 1 - i; j++)
		{
			printf("%d", j + 1);
			
		}
		for(j = n - 1; j - 1 >= 0 + i; j--)
		{
			printf("%d", j - i);
		}
		
		printf("\n");
		
		for(z = 0; z != i + 1; z++)
		{
			printf(" ");
		}
	}
	
	getch();
	return 0;
}
