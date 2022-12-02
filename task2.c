#include<stdio.h>
#define size 10
int main(void)
{
	char a1[] = "level", a2[] = "radar", a3[size];
	int i = 0, j = 0, k = 1;

	for (i = 0; a1[i] != '\0'; i++, j += 2, k += 2) {
		a3[j] = a1[i];
		a3[k] = a2[i];

	}
	printf("%s\n", a3);
	return 0;
}


