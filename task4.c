#include<stdlib.h>
#include<stdio.h>
void intersection(int a[], int b[], int len)
{
	printf("Intersection of A and B\n");
	int inter[2], j = 0;

	for (int i = 0; i < len; i++) {
		if (a[i] == b[i]) {
			inter[j] = a[i];
			printf("%d\n", inter[j]);
			j++;
		}
	}
}
void union1(int a[], int b[], int len)
{
	printf("Union of A and B\n");
	int uni[8];

	for (int i = 0; i < len; i++) {
		uni[i] = a[i];
		uni[i+len] = b[i];
	}
	for (int i = 0 ; i < len*2 ; i++) {
		for (int j = i+1; j < len*2; j++) {
			if (uni[i] == uni[j])
				uni[j] = 0;
	}
	if (uni[i] != 0)
		printf("%d\n", uni[i]);

	}
}
void complement(int a[], int b[], int len)
{
	printf("Complement of A and B\n");
	int com[2], j = 0;

	for (int i = 0 ; i < len; i++) {
		if (a[i] != b[i]) {
			com[j] = a[i];
			printf("%d\n", com[j]);
			j++;
		}
	}
}


int main(void)
{
	int a[] = {1, 3, 5, 7}, b[] = {2, 3, 8, 7};
	int len = (sizeof(a)/sizeof(int));

	intersection(a, b, len);
	union1(a, b, len);
	complement(a, b, len);
	return 0;
}
