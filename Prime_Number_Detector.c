/** Prime Number Detector **/

#include<stdlib.h>

int main()
{
	int n, i, count=0;
	// system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	if (n==1)
	{
		printf("%d is neither a prime nor a composite number.", n);
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if (n%i==0)
			{	
				count=1;
				break;
			}
		}
		if (count==0)
		{
			printf("%d is a prime number", n);
		}
		else
		{	
			printf("%d is not a prime number", n);
		}
	}
	return 0;
}
