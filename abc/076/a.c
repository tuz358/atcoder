// in  : 2002
//       2017
// out : 2032
//
// in  : 4500
//       0
// out : -4500
#include <stdio.h>

int main(void){
	int R, G = 0;

	scanf("%d", &R);
	scanf("%d", &G);

	printf("%d\n", 2 * G - R);
	
	return 0;
}
