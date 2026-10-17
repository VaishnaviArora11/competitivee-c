//                               Question 3 : Factorial of a Number

// You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. You can read more about the factorial of a number here.
// Input Format :
//   The first and only line of the input contains a single integer N denoting the number whose factorial you need to find.
// Output Format : 
//   Output a single line denoting the factorial of the number N.
// Constraints :
//   1 <= N <= 10
// Examples : 
//          Input               Output
//            2                    2



#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int product = 1;
	while (num >= 1){
		product *= num;
		num--;
	}	
	printf("%d", product);
}

