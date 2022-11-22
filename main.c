#include <stdio.h>
#include "NumClass.h"
#include "math.h"

int main() {
    int start;
    int end;
    int flag;
    char c;
    scanf("%d%d", &start , &end);
    int len = end - start + 1;
    int primes [len];
    int armstrongs [len];
    int palindromes[len];
    int strongs [len];
    int primesInx = 0;
    int armstrongsInx = 0;
    int palindromesInx = 0;
    int strongsInx = 0;
    for(int i = start; i <= end;i=i+1)
    {
        if (isStrong(i) == 1) {
            strongs[strongsInx] = i;
            strongsInx++;
        }
        if (isPrime(i) == 1) {
            primes[primesInx] = i;
            primesInx++;
        }
        if (isArmstrong(i) == 1) {
            armstrongs[armstrongsInx] = i;
            armstrongsInx++;
        }
        if (isPalindrome(i) == 1) {
            palindromes[palindromesInx] = i;
            palindromesInx++;
        }
    }
    printf("The Armstrong numbers are:");
    for(int i = 0; i < armstrongsInx; i = i + 1 )
    {
        printf(" %d", armstrongs[i]);
    }

    printf("\nThe Palindromes are:");
    for(int i = 0; i <palindromesInx; i = i + 1)
    {
        printf(" %d", palindromes[i]);
    }
    printf("\nThe Prime numbers are:");
    for(int i = 0; i < primesInx; i = i + 1)
    {
        printf(" %d", primes[i]);
    }
    printf("\nThe Strong numbers are:");
    for(int i = 0; i < strongsInx; i = i + 1)
    {
        printf(" %d", strongs[i]);
    }
    printf("\n");
    return 0;
}








