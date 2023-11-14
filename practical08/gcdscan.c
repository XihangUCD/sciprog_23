#include<stdio.h>

//generate iteration function
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

//generate recursive function
int gcd_recursive(int a, int b){
	if (b == 0){
	  return a;
	}
	else{
	return gcd_recursive (b,a%b);
	}

}


int main(void){
	int a;
	int b;

	//input value a
	printf("Please enter a positive integer a:\n");
	scanf("%d",&a);
	while (a<=0){//check if enter a correct value for a
	  printf("The input number is not positive, please try it again\n");
	  printf("Please enter a positive integer a:\n");
	  scanf("%d",&a);
	}

	//input value b
	printf("Please enter a positive integer b:\n");
	scanf("%d",&b);
	while (b<=0){//check value b
	  printf("The input number is not positive, please try it again\n");
	  printf("Please enter a positive integer b:\n");
	  scanf("%d",&b);
	}

	int ans_i = gcd_iteration(a,b);
	int ans_r = gcd_recursive(a,b);
	printf("Using iteration, we get the answer: %d\n", ans_i);
	printf("Using recursion, we get the answer: %d\n", ans_r);
	return 0;
}
