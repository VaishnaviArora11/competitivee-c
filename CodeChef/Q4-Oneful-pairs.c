//                                               Question 4 : Onesful Pairs

// Chef defines a pair of positive integers (a,b) to be a Oneful Pair, if a + b + (a ⋅ b) = 111
// For example, (1,55) is a Oneful Pair, since 1 + 55 + (1 ⋅ 55) = 56 + 55 = 111.
// Given two positive integers a and b, 
//   output Yes if they are a Oneful Pair
//   And No otherwise.
// Input Format
//   The only line of input contains two space-separated integers a and b.
// Output Format
//   Output Yes, if (a,b) form a Oneful Pair
//   Output No if they do not.
// Constraints
//   1 ≤ a, b ≤ 1000
// Sample 1:
//              Input                  Output
//               1 55                    Yes
// Explanation:
//   (1,55) is a Oneful Pair, since 1 + 55 + (1 ⋅ 55) = 56 + 55 = 111.
// Sample 2:
//              Input                  Output
//               1 53                    No
// Explanation:
//   (1,53) is not a Oneful Pair, since 1 + 53 + (1 ⋅ 53)  != 111.

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int oneful = a + b + (a * b);
    if(oneful == 111){
        printf("Yes");
    } else {
        printf("No");
    }
}
