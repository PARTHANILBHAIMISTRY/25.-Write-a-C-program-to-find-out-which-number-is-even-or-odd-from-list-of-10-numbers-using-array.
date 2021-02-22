//Write a C program to find out which number is even or odd from list of 10 numbers using array.
#include <stdio.h>
int main()
{
	int i,a[10];
	for (i=0;i<=10;i++)
	{
		printf("Enter no.:\n",&a[i]);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=10;i++)
	{
		if (a[i]%2==0)
		{
			printf("%d\tEven\n",a[i]);
		}
		else
		{
			printf("%d\tOdd\n",a[i]);
		}
	}
    return 0;
}
