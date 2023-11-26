#include<stdio.h>

int main(){

  int n=5, p=3, q=4; //given by the question
  double A[n][p], B[p][q], C[n][q]; //define matrics
  int i, j;//define loop number

  //initiualise A, B, C
  for (i=0; i<n; i++){ //two loops for i and j
   for (j=0; j<p; j++){
    A[i][j] = i+j;
     }
   }
  
  for (i=0; i<p; i++){
   for (j=0; j<q; j++){
    B[i][j] = i-j;
     }
   }
        
       
  for (i=0; i<n; i++){
   for (j=0; j<q; j++){
    C[i][j] = 0.0; //the type is double instead of integer
     }
   }
  
//generating matrix multiplication
  matmult(n, p, q, A, B, C); //calling function from matmult.c but no need to write the function here

//print the results
printf("\nThis is matrix A:\n");
for (i=0; i<n; i++){
  for (j=0; j<p; j++){
   printf("%3.0f", A[i][j]);
  }
  printf("\n");
}

printf("\nThis is matrix B:\n");
for (i=0; i<p; i++){
  for (j=0; j<q; j++){
   printf("%3.0f", B[i][j]);
  }
  printf("\n");
}

printf("\nThis is matrix C:\n");
for (i=0; i<n; i++){
  for (j=0; j<q; j++){
   printf("%3.0f", C[i][j]);
  }
  printf("\n");
}

 return 0;
}
