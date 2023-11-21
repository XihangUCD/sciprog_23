#include<stdio.h>
#include<math.h>

double degtorad(double deg);

int main(){
  
  int N = 12, i; //N means number in the loop, but start from 0
  double TanValues[N+1], deg, rad; 
  for(i=0;i<=N;i++){
  deg = i*5.0; //every steps
  rad = degtorad(deg); //use the function below
  TanValues[i] = tan(rad); 
  
  printf("TanValues[%d] = %f at x=%.2f degress\n", i, TanValues[i], deg); //%d means space

  }

}

//convert degrees to radians
double degtorad(double deg){
  return (deg * M_PI)/180.0;
}

