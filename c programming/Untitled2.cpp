#include<stdio.h>
void dowork(int a, int b, int *sum, int *pro, int *avg);
int main(){
	int a= 1, b= 2;
	int sum, pro, avg;
	dowork(a, b, &sum, & pro, &avg);
	printf("sum = %d, pro = %d, avg = %d \n", sum, pro, avg);
	return 0;
}
void dowork(int a, int b, int *sum, int *pro, int *avg){
	*sum= a + b;
	*pro= a * b; 
	*avg= (a + b)/2;
}

	


	



