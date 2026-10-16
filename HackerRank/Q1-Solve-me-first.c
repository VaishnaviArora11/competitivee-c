//                                Question 1 : Solve Me First

// Complete the function solveMeFirst to compute the sum of two integers.
// Example
//   a = 7
//   b = 3
//   Return a + b.
// Function Description : 
//   Complete the  function with the following parameters:
//   int a : the first value
//   int b : the second value
//   Returns
//   - int : the sum of a and b 
// Constraints
//   1 <= a, b <= 1000
//            Sample Input              Sample Output
//               a = 2
//               b = 3                        5



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    return a + b;
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",solveMeFirst(num1, num2));
    return 0;
}