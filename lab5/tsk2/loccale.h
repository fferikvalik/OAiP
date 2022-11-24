//
// Created by Valentin Gouriev on 18.11.22.
//

#ifndef TSK2_LOCCALE_H
#define TSK2_LOCCALE_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void input_col(int* m);
int choose_input(int *matr,int n,int m);
void input_row(int* n);
//выделение памяти под матрицу
int* memory(int n, int m);
// печать матрицы
void print_matr(int** matr, int n,int m);
// ввод элементов матрицы c клавиатуры
void input_matr(int** matr, int n, int m);
// ввод элементов матрицы рандомом
void rand_matr(int** matr, int n, int m);
// работа в матрице
void work_in_matr(int** matr, int n, int m);
int *mem(int n, int m, int** matr);
void* freee(int n, int**matr);
#endif //TSK2_LOCCALE_H
