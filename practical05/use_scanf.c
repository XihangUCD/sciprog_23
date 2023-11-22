#include <stdio.h>


int main(void) {
  int i, ierr; 
  double a;

  // Enter information from user
  printf("Enter an int and double\n");
  ierr = scanf("%d %lf",&i,&a); //An integer and a double 

  if (ierr!=2) printf ("Problem with input\n");

  return 0;
}
