#include <stdio.h>
#include <string.h>

void main()
{
	char str1[100], tmp;
	int l, lind, rind, i;

	

	printf("\nInput a string to reverse : ");
	scanf_s("%s", str1,20);
	l = strlen(str1);
	printf("\n");
	lind = 0;
	rind = l - 1;

	for (i = lind; i<rind; i++)
	{
		tmp = str1[i];
		str1[i] = str1[rind];
		str1[rind] = tmp;
		rind--;
	}
	printf("Reversed string is: %s\n", str1);
	system("pause");
}