//
// Created by Valentin Gouriev on 21.11.22.
//
#ifndef TSK3_LOCCALE_H
#define TSK3_LOCCALE_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void* freee(int n, int**matr){
    for (int i = 0; i < n; ++i) {
        free(*(matr+i));
    }
    free(matr);
}
void input_col(int* m)
{
    int x;
    while (scanf("%d", &x) != 1 || x > 100 || x < 1 || x % 1 != 0 || getchar() != '\n')
    {
        printf("Error. Try again: ");
        rewind(stdin);
    }
    *m = x;
}
void input_row(int* n)
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
int* memory(int n, int m)
{
    int **matr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        *(matr + i) = (int*)calloc(m, sizeof(int));
    return matr;
}
// печать матрицы
void print_matr(int** matr, int n,int m)
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
void input_matr(int** matr, int n, int m)
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
// ввод элементов матрицы рандомом
void rand_matr(int** matr, int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            *(*(matr + i) + j) = rand() % 6;
        }
    }
}// работа в матрице
void work_in_matr(int** matr, int n, int m)
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
#endif //TSK3_LOCCALE_H
