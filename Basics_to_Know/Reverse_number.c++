//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

#include<iostream>
using namespace std;

int reverseNumber(int n){
    int reversed = 0;
    while (n != 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10; // Remove the last digit
    }
    return reversed;
}