//                                          Question 4 : Solve Me First

// You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.
// Input Format
//   The first and only line of input contains 3 space separated integers l, r and k.
// Output Format
//   Print the required answer on a single line.
// Constraints
// Examples
//             Input             Output
//             1 10 1              10


#include <stdio.h>

int main(){
	int l, r, k, sum = 0;
	scanf("%d %d %d", &l, &r, &k);
	for (int i = l; i <= r; i++){
		if(i % k == 0){
			sum++;
		}
	}
	printf("%d", sum);
}