/*
    1.	Заполнить массив с клавиатуры вещественными числами.
        Удалить все дробные числа.
*/
#include "loccale.h"
int main() {
    int  n, count = 0;
    float *x;
    float *arr;
    printf("Input the size array: ");
    inputn(&n);
    arr = memory(n);
    printf("\nInput array elements: \n");
    inputarr(arr, n);
    printf("\nSource array: \n");
    printarr(arr, n);
    workarr(arr, n, &count);
    n -= count;
    printf("\nThe resulting array: \n");
    arr = mem( n, arr);
    printarr(arr, n);
    free(arr);
    return 0;
}
