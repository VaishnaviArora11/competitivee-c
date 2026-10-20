//                                               Question 4 : Fizz Buzz

// Write a short program that prints each number from 1 to 100 on a new line. 
// For each multiple of 3, print "Fizz" instead of the number. 
// For each multiple of 5, print "Buzz" instead of the number. 
// For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.
// Write a solution (or reduce an existing one) so it has as few characters as possible.
//    Scoring : 
//      Your score is: (200 - numbers of characters in your source code) / 100





#include <stdio.h>
int main (){
    int n = 1;
    while(n <= 100){
        if (n % 3 == 0) printf("Fizz");
        if (n % 5 == 0) printf("Buzz");
        if (n % 3 != 0 && n % 5 != 0) printf("%d", n);
        printf("\n");
        n++;
    }
}

