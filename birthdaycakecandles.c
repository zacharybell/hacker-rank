#include<stdio.h>
#include<stdlib.h>

int num_candles(int *arr, int arr_size) {
	
	int max = *arr;
	int num_candles = 0;

	for(int i=0; i<arr_size; i++) {
		if(arr[i] > max) {
			max = arr[i];
			num_candles = 1;
		}
		else if(arr[i] == max)
			num_candles++;
	}

	return num_candles;
}

int main() {
	
	int n;
	scanf("%i", &n);
	int *arr = malloc(sizeof(int) * n);
	for(int i=0; i<n; i++) {
		scanf("%i", &arr[i]);
	}
	int result = num_candles(arr, n);
	printf("%d\n", result);

	free(arr);
	
	return 0;
}
