//                                Question 5 : Reverse a Number
// Write a C program that takes an integer as input and prints its reverse. 
// Use a while loop for the reversal process.
// Sample 1:
//              Input                  Output
//              12345                  54321

#include <stdio.h>
int main() {
	int n, reversed_num = 0; 
	scanf("%d", &n);
	while(n > 0){
	    int diff = n % 10;
	    reversed_num = reversed_num * 10 + diff;
	    n /= 10;
	}
	printf("%d", reversed_num);
}
