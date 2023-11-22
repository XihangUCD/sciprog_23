#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){

 double delta, x;
 printf ("Enter the precision for the Maciaurin series:\n");
 scanf ("%lf", &delta);

 int length = 1000;
 double tan1[length]; //storing the result of arctan1

 double tan2[length]; //storing the result of arctan2

 int j=0; //j: array index
 x = -0.9;
 while (x<=0.91 && j<length){//&& means both left and right should be true
   tan1[j]=arctanh1(x, delta);
   tan2[j]=arctanh2(x);
   printf("The difference at x=%lf between two methods is %.10lf.\n", x, fabs(tan1[j]-tan2[j])); //10 significant figures
   j++;
   x=x+0.01;

 }
 return 0;
}

double arctanh1(const double x, const double delta){
  double arcTan = 0;//approximation
  double elem, val;//element in the series
  int n = 0;//sum of parameter

//arctan calculation 1
  do{
    val = 2*n+1;
    elem = pow(x,val)/val;
    arcTan += elem;
    n++;
  }while(fabs(elem)>=delta);
  
   return arcTan;
}

//arctan calculation 2
  double arctanh2(const double x){
   return (log(1+x) - log(1-x))/2;
}
