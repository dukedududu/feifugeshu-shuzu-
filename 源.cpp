#include <stdio.h>
int main()
{
	int a[10], i, j;
	j = 0;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
		if (a[i] >=0)
		{
			j++;
		}
	printf("%d", j);
	return 0;
}