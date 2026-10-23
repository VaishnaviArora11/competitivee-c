//                                   Question 6 : Call By Reference Sum and Diff

// Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. 
//  Set the value of a to their sum, and b to their absolute difference. 
//    a' = a + b
//    b' = |a - b|
// There is no return value, and no return statement is needed.
// Input Format :
//    The input will contain two integers, a and ,b separated by a newline.
// Output Format :
//    Modify the two values in place and the code stub main() will print their values.
// Note: 
//    Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.
// Sample Input :
//    4
//    5
// Sample Output :
//    9
//    1
// Explanation



#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int diff;
    if (*a >= *b){
        diff = *a - *b;
    } else {
        diff = *b - *a;
    }
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}