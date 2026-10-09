//                                  Question 6 : PROBLEM 2169 : Count Operations to Obtain Zero

// You are given two non-negative integers num1 and num2.
//   In one operation, if num1 >= num2, you must subtract num2 from num1,
//   otherwise subtract num1 from num2.
// For example:
//   If num1 = 5 and num2 = 4, subtract num2 from num1,
//   obtaining num1 = 1 and num2 = 4.
//   If num1 = 4 and num2 = 5, subtract num1 from num2,
//   obtaining num1 = 4 and num2 = 1.
//   Return the number of operations required to make either
//   num1 = 0 or num2 = 0.
// Example 1:
//   Input: num1 = 2, num2 = 3
//   Output: 3
// Explanation:
//   Operation 1: num1 = 2, num2 = 3.
//      Since num1 < num2, subtract num1 from num2.
//      num1 = 2, num2 = 1.
//   Operation 2: num1 = 2, num2 = 1.
//      Since num1 > num2, subtract num2 from num1.
//      num1 = 1, num2 = 1.
//   Operation 3: num1 = 1, num2 = 1.
//      Since num1 == num2, subtract num2 from num1.
//      num1 = 0, num2 = 1.
//      Since num1 = 0, we are done.
//      Total operations = 3.
// Example 2:
//   Input: num1 = 10, num2 = 10
//   Output: 1
// Explanation:
//   Operation 1: num1 = 10, num2 = 10.
//     Since num1 >= num2, subtract num2 from num1.
//     num1 = 0, num2 = 10.
//     Since num1 = 0, we are done.
//   Total operations = 1.
// Constraints:
//   0 <= num1, num2 <= 10^5

#include <stdio.h>

int countOperations(int num1, int num2) {
    int diff, op = 0;
    while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            diff = num1 - num2;
            num1 = diff;
        } else {
            diff = num2 - num1;
            num2 = diff;
        }
        op += 1;
    }
    return op;
}
int main(){
    int a, b; 
    scanf("%d %d", &a, &b);
    printf("%d", countOperations(a, b));
}