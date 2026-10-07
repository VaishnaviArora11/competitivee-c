//                                         Question 2 : Even or Odd

// Given an integer N, determine whether it is even or odd.
// Input Format : 
//  A single integer N.
// Output Format : 
//  Print Even if N is even; 
//  otherwise, print Odd.
// Constraints
//  0 <= N <= 10^9
// Sample Input :
//  42
// Sample Output :
//  Even


#include <stdio.h>
int even_odd(int n){
    if(n % 2 == 0){
        printf("Even");
    } else {
        printf("Odd");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    even_odd(n);
}