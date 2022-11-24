//
// Created by Valentin Gouriev on 21.11.22.
//
// print arr
#ifndef TSK1_LOCCALE_H
#define TSK1_LOCCALE_H
#include <stdlib.h>
#include <stdio.h>

void inputn(int* n) {
    int x;
    while (scanf("%d", &x) != 1 || x > 100 || x < 1 || getchar() != '\n') {
        printf("Error. Try again: ");
        fflush(stdin);
    }
    *n = x;
}
int* memory(int n)
{
    float* arr = (int*)malloc(n * sizeof(int));
    return arr;
}
void printarr(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(arr + i) );
    }
}
// Input array elements:
void inputarr(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        while (scanf("%f", &*(arr + i)) != 1 || *(arr + i) < 1 || getchar() != '\n') {
            printf("Error. Try again: ");
            fflush(stdin);
        }
    }
}
// work in arr
void workarr(float* arr, int n, int* count) {
    int i, j;
    int p = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] - (int)arr[i] == 0){}
        else
        {
            for (j = i; j < n; j++) {
                arr[j] = arr[j + 1];
            }
            p++;
            i--;
        }
    }
    *count = p;
}
int *mem(int n, float* arr){
    arr=(float*)realloc(arr,n*sizeof(int*));
    return arr;
}
#endif //TSK1_LOCCALE_H
