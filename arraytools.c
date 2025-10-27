#include <stdio.h>
#include "arraytools.h"


int maxPosition(int a[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > a[idx])
            idx = i;
    return idx;
}

int minPosition(int a[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[idx])
            idx = i;
    return idx;
}

float avgOfArray(int a[], int n) {
    long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return (float)sum / n;
}

void printArray(int a[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("]\n");
}

void flipArray(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
}

void sortAsc(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int searchLinear(int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}
