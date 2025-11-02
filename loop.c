#include<stdio.h>

// Loop () function loop
// 1. while
// 2. for
// 3. do...while

// while loop (Know about circle a function **if conditional it's TRUE)
// for loop (Know about circle a function)
// do...while loop ()

// Symbol logic
// || = or (+)
// && = and (*)

int main() {
    int i = 0;
    int j;
    
    /* 
        while (conditional) { 
            block code function
        } 
    */
    
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    
    /* 
        for (variable, condition, incr || dec) {
            block code function
        }
    */
    for (j = 0; j < 10; j++) {
        printf("%d\n", j);
    }
    
    /* 
        do {
            block code function
        } while (condition);
    */
    
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    
    return 0;
}