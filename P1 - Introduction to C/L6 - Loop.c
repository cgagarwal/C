#include <stdio.h>

int main() {
    int i = 1;
    printf("While loop : ");    //  1 2 3 4
    while (i < 5) {
        printf("%d " , i);
        i = i + 1;
    }
    printf("\n");
  
  
    // do while loop executed atleast once then check the condition
    printf(" Do While loop : ");    // 6 7 8
    do {
        i = i+1;
        printf("%d " , i);
    } while (i < 8);
    printf("\n");
    
  
    printf("For Loop : ");  // 0 1 2 3
    for (int i = 0 ; i < 4 ; i++) {
        printf("%d " , i);
    }
  
    // break;    --> to terminate loop or switch statements.
    // continue; --> to suspend current loop iteration and transfer contol to next loop iteration.
  
    return 0;
}
