#include <stdio.h>

int main(void){
	int a, b, c = 0;
	scanf("%d%d%d", &a, &b, &c);

	if(a == b){
		printf("%d\n", c);
	} else if(a == c){
		printf("%d\n", b);
	} else {
		printf("%d\n", a);
	}

	return 0;
}
