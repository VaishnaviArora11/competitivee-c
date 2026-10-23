#include <stdio.h>
int main(){
    int b[5];
    for(int i = 0; i < 5; i++){
        printf("Enter a number :");
        scanf("%d", &b[i]);
    }
    for(int i = 5; i > 0; i--){
        printf("%d\n", b[i]);
    }
}