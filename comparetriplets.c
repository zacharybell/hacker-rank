#include<stdio.h>
#include<stdlib.h>

int* solve(int *A, int *B, int n) {
	int *score = malloc(sizeof(int) * 2);
	score[0] = score[1] = 0;

	for(int i=0; i<n; i++) {
		if(A[i] > B[i]) score[0]++;
		else if(A[i] < B[i]) score[1]++;
	}

	return score;
}


int main() {

	int *A = malloc(sizeof(int) * 3);
	int *B = malloc(sizeof(int) * 3);

	scanf("%d %d %d", &A[0], &A[1], &A[2]);
	scanf("%d %d %d", &B[0], &B[1], &B[2]);

	int *score = solve(A, B, 3);

	printf("%d %d\n", score[0], score[1]);

	free(A);
	free(B);
	free(score);

	return 0;
}

