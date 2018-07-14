// in  : 4
//       3
// out : 10
// in  : 10
//       10
// out : 76
#include <stdio.h>

int main(void){
	int N, K = 0;
	int current_num = 1;

	scanf("%d", &N);
	scanf("%d", &K);

	for(int i=0;i < N;i++){
		current_num = (current_num*2) < (current_num+K) ? (current_num*2) : (current_num+K); 
	}

	printf("%d\n", current_num);

	return 0;
}
