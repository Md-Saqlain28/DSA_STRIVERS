/*  You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.*/

#include<iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    if (n == 0) {
        return 1; // Special case for 0
    }
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }
    return count;
}