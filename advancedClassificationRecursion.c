#include "NumClass.h"
#include "math.h"
#include <stdlib.h>
#include <stdio.h>

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong(int x){
    int original = x;
    int sum = IsArmstrong(x,floor(log10(abs(x)))+1);
    if(sum == original)
        return 1;
    return 0;
}

int IsArmstrong(int x, int len){
    if(x == 0)
        return 0;
    return pow(x % 10,len) + IsArmstrong(x/10, len);
}

/* will return if a number is a palindrome */
int isPalindrome(int x) {
    int len = (int) (floor(log10(abs(x)) + 1));
    char charArray[len];
    for (int i = 0; i < len; i++) {
        charArray[len - i - 1] = (char) (x % 10);
        x = x / 10;
    }
    return IsPalindrome(charArray , 0 ,len-1);
}


int IsPalindrome(char x[]  , int start, int end){
        if(start >= end) {
            return 1;
        }
        if(x[start] != x[end]){
            return 0;
        }
        return IsPalindrome(x, start+1 , end-1);

    }


