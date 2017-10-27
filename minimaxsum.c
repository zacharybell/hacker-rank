#include<stdlib.h>
#include<stdio.h>

long* minimax_sum(int* arr, int n) {
	
	int min = *arr;
	int max = *arr;
	
	// keep the index of minimum and maximum values
	int min_i = 0;
	int min_j = 0;

	long sum = 0;

	while(n) {
		sum += *arr;
		if(*arr < min) min = *arr;
		if(*arr > max) max = *arr;

		arr++;
		n--;
	}

	long* minimax = malloc(sizeof(long) * 2);
	minimax[0] = sum - max;
	minimax[1] = sum - min;
	
	return minimax;
}

int main() {
	
	int arr_len = 5;

	int *arr = malloc(sizeof(int) * arr_len);
	for(int arr_i = 0; arr_i < 5; arr_i++) {
		scanf("%d", &arr[arr_i]);
	}

	long *minimax = minimax_sum(arr, arr_len);

	printf("%ld %ld\n", minimax[0], minimax[1]);

	free(arr);
	free(minimax);

	return 0;
}
