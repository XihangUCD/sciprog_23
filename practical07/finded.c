#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial (int n);//a function about n

int main(void){
	int i, order; //different data types will be applied for different amount of data
	double e, *terms;//term as array

	//Enter Polynomial Order
	printf("Please enter the required polynomial order\n");
	if (scanf("%d", &order) != 1){  //scan and make an error checking
	  printf("Didn't enter a number\n");
	  return 1;
	}

	//Allocate space depending on n
	terms = malloc (order*sizeof(double));
	for (i=0;i<order; i++){
	  terms[i] = 1.0/(double)factorial(i+1);
	  printf("e term for order %d is %1.14f \n", i+1, terms[i]);
	}

	e = 1.0;
	for (i=0;i<order;i++){  //Last lopp has finished using i, thus, i can be used here again
	  e = e + terms[i];
	}
	
	free (terms); //remember free the array after using it

	printf("e is estimated as %.10lf. with difference %e\n", e, e-exp(1.0)); //exp function is avaible in math.h no need to write e value as 2.71828

  return 0;
}


int factorial (int n){
	if (n<0){
	  printf("Error: The negative value n doesn't have factorial\n");
	return(-1);
	}
	else if (n==0) {return 1;}
	else {return(n*factorial(n-1));}




}
