#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count_words(char *str) {
	
	int count = 0;
	
	//empty string
	int len = strlen(str);
	if(!len) return count;
	
	str++;	//skip first
	count++;
	while(*str) {
		if(isupper(*str)) count++;
		str++;
	}

	return count;
}

int main() {

	char *str = malloc(100240 * sizeof(char));
	scanf("%s", str);
	
	int wc = count_words(str);

	printf("%d\n", wc);

	free(str);

	return 0;
}
