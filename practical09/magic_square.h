#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;
    
    printf("M=%d\n", M);    

    int i, j;
    // TODO: Checking that every row and column add up to M

    for(i=0; i<n; i++){
	int rowSum=0;
	int colSum=0;
	for (j=0; j<n; j++){
	  rowSum += square[i][j];
	  colSum += square[j][i];
	}
	printf("i=%d, rowSum=%d, colSum=%d\n", i, rowSum, colSum);
	if (rowSum != M ||colSum != M){  //!= means not equal to
	  return 0;
	}
    }

    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    int diagSum=0;
    int secDiagSum=0; //capital helps for understanding
    for (i=0; i<n; i++){
	diagSum += square[i][i];
  	secDiagSum += square[i][n-i-1];//count from 0
    }
    printf("diagSum=%d, secDiagSum=%d", diagSum, secDiagSum);
    if(diagSum != M || secDiagSum != M){
	return 0;
    } 
//if pass all checks, then this is matric square
    return 1;
}

