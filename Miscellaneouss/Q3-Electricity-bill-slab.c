//                                Question 3 : Electricity Bill Slab

// Implement a program to calculate the electricity bill based on units consumed: 
//   Units      :   Rate    
//   0–100      :   ₹2/unit
//   101–200    :   ₹3/unit
//   Above 200  :   ₹5/unit
// Use if-else ladder. 
// Example: 
//   Input: 250 
//   Output: 850 



#include <stdio.h>
int bill_slab(int units){
    int rate;
    if(units >= 0 && units <= 100){
        rate = 2;
    } else if (units >= 101 && units <= 200){
        rate = (100 * 2) + ((units - 100) * 3);
    } else if (units > 200){
        rate = (100 * 2) + ((units - 100) * 3) + ((units - 200) * 5);
    }
    int total_bill = units * rate;
    return total_bill;
}
int main(){
    int units;
    printf("Enter Units consumed : ");
    scanf("%d", &units);
    printf("Total Bill : %d", bill_slab(units));
}