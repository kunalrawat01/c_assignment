#include <stdio.h>
#include <math.h>
#include "numutils.h"

int getReverse(int n) {
    int rev = 0;
    for (; n > 0; n /= 10)
        rev = rev * 10 + n % 10;
    return rev;
}


int checkArmstrong(int n) {
    int temp = n, total = 0;
    int digits = (int)log10(n) + 1;

    while (temp != 0) {
        int d = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)  
            power *= d;
        total += power;
        temp /= 10;
    }
    return total == n;
}


int checkAdams(int n) {
    int sq1 = n * n;
    int rev = getReverse(n);
    int sq2 = rev * rev;
    return (getReverse(sq1) == sq2);
}

int checkPrime(int n) {
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}


int checkPrimePalindrome(int n) {
    return (checkPrime(n) && n == getReverse(n));
}

