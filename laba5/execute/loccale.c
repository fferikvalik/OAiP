//
// Created by Valentin Gouriev on 29.11.22.
//
#include <stdlib.h>
#include <stdio.h>
#include "loccale.h"
void printArchLogo(){

    printf("\x1b[1;47;31m\x1b");
    printf("\n\n");
    puts(" \t\t\t         $c2,$c1                      _     _ _");
    puts(" \t\t\t        $c2/$c1#$c2\\$c1        __ _ _ __ ___| |__ | (_)_ __  _   ___  __");
    puts(" \t\t\t       $c2/$c1###$c2\\$c1      / _` | '__/ __| '_ \\| | | '_ \\| | | \\ \\/ /");
    puts(" \t\t\t      $c2/$c1#####$c2\\$c1    | (_| | | | (__| | | | | | | | | |_| |>  <");
    puts(" \t\t\t     $c2/$c1##,-,##$c2\\$c1    \\__,_|_|  \\___|_| |_|_|_|_| |_|\\__,_/_/\\_\\");
    puts(" \t\t\t    $c2/$c1##(   )##$c2\\$c1");
    puts(" \t\t\t   $c2/$c1#.--   --.#$c2\\   \\    A simple, elegant GNU/Linux distribution.");
    puts(" \t\t\t  $c2/$c1`           `$c2\\$z");
    printf("\n\n");
    printf("\x1b[0m\x1b\n");
}

void inputn1(int* n) {
    int x;
    while (scanf("%d", &x) != 1 || x > 100 || x < 1 || getchar() != '\n') {
        printf("Error. Try again: ");
        fflush(stdin);
    }
    *n = x;
}
int* memory1(int n)
{
    float* arr = (int*)malloc(n * sizeof(int));
    return arr;
}
void printarr1(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(arr + i) );
    }
}
// Input array elements:
void inputarr1(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        while (scanf("%f", &*(arr + i)) != 1 || *(arr + i) < 1 || getchar() != '\n') {
            printf("Error. Try again: ");
            fflush(stdin);
        }
    }
}
// work in arr
void workarr1(float* arr, int n, int* count) {
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
int *mem1(int n, float* arr){
    arr=(float*)realloc(arr,n*sizeof(int*));
    return arr;
}
void* freee2(int n, int**matr){
    for (int i = 0; i < n; ++i) {
        free(*(matr+i));
    }
    free(matr);
}

void input_col2(int* m)
{
    int x;
    while (scanf("%d", &x) != 1 || x > 100 || x < 1 || x % 1 != 0 || getchar() != '\n')
    {
        printf("Error. Try again: ");
        rewind(stdin);
    }
    *m = x;
}
void input_row2(int* n)
{
    int x;
    while (scanf("%d", &x) != 1 || x > 100 || x < 1 || x % 1 != 0 || getchar() != '\n')
    {
        printf("Error. Try again: ");
        rewind(stdin);
    }
    *n = x;
}
//выделение памяти под матрицу
int* memory2(int n, int m)
{
    int **matr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        *(matr + i) = (int*)calloc(m, sizeof(int));
    return matr;
}
// печать матрицы
void print_matr2(int** matr, int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", *(*(matr + i) + j));
        }
        printf("\n");
    }
}
// ввод элементов матрицы c клавиатуры
void input_matr2(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("input element [%d][%d]\n", i + 1, j + 1);
            while (scanf("%d", *(matr + i) + j) != 1)
            {
                printf("input error\n");
                rewind(stdin);
            }
        }
    }
}
void work_in_matr3(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= j )
            {
                printf("%5d ", *(*(matr + i) + j));

            }
            *(matr+i) = realloc(*(matr+i), (m-1)*sizeof(int));
        }
        printf("\n");
    }
}
// работа в матрице
void work_in_matr2(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + j > m - 1 || i + j < m - 1)
            {
                printf("%5d ", *(*(matr + i) + j));

            }
        }
        *(matr+i) = realloc(*(matr+i), (m-1)*sizeof(int));
        printf("\n");
    }
}
int choose_input2(int **matr, int n,int m) {
    int x;
    while (scanf("%d", &x) != 1 || x > 1 || x < 0 || getchar() != '\n') {
        printf("Please, use 1 or 0 ");
        rewind(stdin);
    }
    switch (x)
    {
        case 0:
            printf("\nInput array elements: \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("input element [%d][%d]\n", i + 1, j + 1);
                    while (scanf("%d", *(matr + i) + j) != 1)
                    {
                        printf("input error\n");
                        rewind(stdin);
                    }
                }
            }
            break;
        case 1:
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    *(*(matr + i) + j) = rand() % 6;
                }
            }
            break;
    }
    return matr;
}
