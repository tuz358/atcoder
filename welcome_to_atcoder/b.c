#include <stdio.h>

int main(void){
	char alphabet[27];
	char sign;
	int n, q = 0;

	for(int i=0;i < 26;i++){
		alphabet[i] = (char)(i+65);
	}

	scanf("%d%d", &n, &q);	

	char tmp;

	for(int i = 0;i < n;i++){
		for(int j=0;j < n-1;j++){
			if(i != (j+1)){
				printf("? %c %c\n", j+65, j+66);
				fflush(stdout);
				scanf(" %c", &sign);
				if(sign == '>'){
					tmp = alphabet[j];
					alphabet[j] = alphabet[j+1];
					alphabet[j+1] = tmp;
				}
			}
		}
	}


	printf("! ");

	for(int i=0;i < n;i++){
		printf("%c", alphabet[i]);
	}

	printf("\n");
	fflush(stdout);

	return 0;
}
