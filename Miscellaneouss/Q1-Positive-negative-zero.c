//                              Question 1 : Positive, Negative or Zero
//Problem Statement : 
//  Given an integer N, determine whether it is Positive, Negative, or Zero. 
//Input Format :
//  A single integer N. 
//Output Format :
//  Print: 
//      Positive if N > 0 
//      Negative if N < 0 
//      Zero if N == 0 
//Constraints : 
//  -10^9 <= N <= 10^9 
//Sample Input : 
//  -25 
//Sample Output :
//  Negative 
//Sample Input : 
//  0 
//Sample Output :
//  Zero

#include <stdio.h>
void sign_stat(int n){
    if(n < 0){
        printf("Negative");
    } else if (n > 0){
        printf("Positive");
    } else if (n == 0){
        printf("Zero");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    sign_stat(n);
    return 0;
}