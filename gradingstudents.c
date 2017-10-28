#include<stdio.h>
#include<stdlib.h>

int* solve(int *arr, int n) {
	
	int *result = malloc(sizeof(int) * n);
	int diff;
	
	for(int i=0; i<n; i++) {
		diff = 5 - (arr[i] % 5);
		if((arr[i] > 37) && (diff < 3)) {
			result[i] = arr[i] + diff;
		}
		else {
			result[i] = arr[i];
		}
	}
	
	return result;
}

void print_int_arr(int *arr, int n) {
	for(int i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);

	int *grades = malloc(sizeof(int) * n);
	for(int i=0; i<n; i++) {
		scanf("%d", &grades[i]);
	}

	int *result = solve(grades, n);
	print_int_arr(result, n);

	free(grades);
	free(result);

	return 0;
}
