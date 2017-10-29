#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Compares two strings and returns 1 if a is higher, -1 if b is higher,
// and 0 if they are the same.
int compare_str(const void *a_ptr, const void *b_ptr) {
	
	int d = 0;

	char *a = *(char **)a_ptr;
	char *b = *(char **)b_ptr;

	while(*a && *b) {
		if(!d) {
			if(*a > *b) {
				d = 1;
			}
			else if(*a < *b) {
				d = -1;
			}
		}
		a++;
		b++;
	}
	if(*a) return 1;
	if(*b) return -1;
	return d;
}

int main() {

	int n;
	char *buffer = malloc(sizeof(char) * 1000000);

	scanf("%d", &n);

	char *numbers[n];
	for(int i=0; i<n; i++) {
		scanf("%s", buffer);
		numbers[i] = malloc(sizeof(char) * (strlen(buffer)+1));
		strcpy(numbers[i], buffer);
	}

	qsort(numbers, n, sizeof(char*), compare_str);

	for(int i=0; i<n; i++) {
		printf("%s\n", numbers[i]);
	}

	return 0;
}
