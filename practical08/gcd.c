#include<stdio.h>

//Generate iteration function
int gcd_iteration(int a, int b){
	int temp;
	while (b!=0)//!= means not equatl to 
	{
	  temp = b;
	  b = a%b;//% mod
	  a = temp;
	}
	return a;
}

//generate recursive function
int gcd_recursive(int a, int b){
	if (b == 0){
	  return a;
	}
	else{
	return gcd_recursive (b,a%b);
	}

}

//give the initial values for a and b
int main(void){
	int a = 45;
	int b = 25;
	
	int ans_i = gcd_iteration(a,b);
	int ans_r = gcd_recursive(a,b);
	printf("Using iteration, we get the answer: %d\n", ans_i);
	printf("Using recursion, we get the answer: %d\n", ans_r);
	return 0;
}
