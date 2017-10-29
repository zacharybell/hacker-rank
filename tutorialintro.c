#include<stdio.h>
#include<stdlib.h>

int main() {
	int v;
	int n;

	scanf("%d", &v);
	scanf("%d", &n);
	
	int arr[n];

	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++) {
		if(arr[i] == v) {
			printf("%d\n", i);
			return 0;
		}
	}
		
	return 0;
}
