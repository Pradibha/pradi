#include<stdio.h>
#define size 15
int main(void)
{
	char a[] = "lreavdealr", a1[size], a2[size];
	int i = 0, j = 0, k = 0;

	for (i = 0; a[i] != '\0'; i++) {
		if (i % 2 == 0) {
			a1[j] = a[i];
			j++;
		}
			else {
			a2[k] = a[i];
			k++;
		}

	}
		for (i = 0; a1[i] != '\0'; i++)
		printf("%c", a1[i]);
		printf("\n");
		for (i = 0; a2[i] != '\0'; i++)
	       printf("%c", a2[i]);
	       printf("\n");

}


