#include <stdio.h>


int main(void) {
// Declare variables
   int i;
   float sum1, sum2, diff; //difference will be 0 if using double here
   

// First sum 
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 += 1./i;
      // 1./i will return float results e.g., 1/2=0.5
      // 1/i will just return integer results e.g., 1/2=0
   }


// Second sum 
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 += 1./i;
   }

   printf(" Sum1 = %f\n",sum1);
   printf(" Sum2 = %f\n",sum2);

// Find the differences
   diff = sum1-sum2;

   printf(" Difference between the two is %f\n",diff);

   // don't forget 'return 0' here, as the end of the command at beginning 'int main(void) {'
   return 0;
}
