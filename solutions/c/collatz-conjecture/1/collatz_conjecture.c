#include "collatz_conjecture.h"

int steps(int start) {
    // The Collatz conjecture is defined for positive integers.
    // If the input is less than or equal to 0, return the error value.
    if (start <= 0) {
        return ERROR_VALUE;
    }

    int count = 0;
    
    // Continue the process until the number reaches 1
    while (start != 1) {
        if (start % 2 == 0) {
            start = start / 2;
        } else {
            // Check for potential overflow if start is very large
            start = (3 * start) + 1;
        }
        count++;
    }

    return count;
}