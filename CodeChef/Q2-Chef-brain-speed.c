//                                                 Question 2 : Chef's Brain Speed

// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of 
// X bits per second above which his calculations are prone to errors. If Chef is currently working at 
// Y bits per second, is he prone to errors?
//   If Chef is prone to errors print YES, otherwise print NO.
// Input Format :
//   The only line of input contains two space separated integers X and Y — the threshold limit and the rate at which Chef is currently working at.
// Output Format : 
//   If Chef is prone to errors print YES, otherwise print NO.
// Constraints : 
//   1 ≤ X, Y ≤ 100
// Sample 1:
//              Input                  Output
//               7 9                    YES
// Explanation:
//   Chef's current brain speed of 9 bps is greater than the threshold of 7 bps, hence Chef is prone to errors.
// Sample 2:
//              Input                  Output
//               6 6                    NO
// Explanation:
//   Chef's current brain speed of 6 bps is not greater than the threshold of 6 bps, hence Chef is not prone to errors.
// Sample 3:
//              Input                  Output
//               53 5                    NO
// Explanation:
//   Chef's current brain speed of 8 bps is not greater than the threshold of 53 bps, hence Chef is not prone to errors.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x < y){
        printf("YES");
    } else if (x >= y){
        printf("NO");
    }

}