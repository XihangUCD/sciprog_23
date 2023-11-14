#include<stdio.h>
#include<math.h>

int main(){

//Initialise the end-points and the number of points

int N = 12;
double x_0 = 0.0;
double x_12 = M_PI/3.0; //use 3.0 instead of 3 to avoid intger
double width = (x_12-x_0)/(double)N; //treat N as doulbe here instead of int to avoid error

//Get values of f(x)=tan(x) for the both end points, and add them up

double X = tan(x_0)+tan(x_12);

//Get equidistant points, evaluate tan at these points. Store 2tan(x) at each step

double x;
double y;
double sum = X; //sum of the end points

//--------------------------------------- for loop----------------------------------------------

//int i; //use i tp track the loop
//for(i=1; i<12; i++){

//   x = x_0+width*i; //increase steps
//   y = tan(x);
//   sum += 2*y; // same as sum = sum +2*y

//} 

//-------------------------------------- while loop---------------------------------------------

int i = 1;
while(i<12){

   x = x_0+width*i;
   y = tan(x);
   sum += 2*y;
   i++;
}

//----------------------------------------------------------------------------------------------

double integral_approx = sum * width * 0.5;
double integral_exact = log(2.0);
double difference = integral_approx - integral_exact;

//print results
// %.5f means keep 5 decimals

printf(" Your approximation of the interal from x=0 to x=pi/3 of the function tan(x) with respect to x is:\n%.5f\n The exact solution is:\n%.5f\n The difference is:\n%.5f\n", integral_approx, integral_exact, difference);

return (0);

}


//"gcc -o trap trap.c -lm", here "-lm" is going to link to the math library

