#include<stdio.h>

int gcd_iteration(int a, int b){
	int temp;
	while (b!=0)
	{
	  temp = b;
	  b = a%b;
	  a = temp;
	}
	return a;
}


int gcd_recursive(int a, int b){
	if (b == 0){
	  return a;
	}
	else{
	return gcd_recursive (a,a%b);
	}

}


int main(void){
	int a = 5;
	int b = 25;
	
	int ans_i = gcd_iteration(a,b);
	int ans_r = gcd_recursive(a,b);
	printf("Using iteration, we get the answer: %d\n", ans_i);
	printf("Using recursion, we get the answer: %d\n", ans_r);
	return 0;
}
