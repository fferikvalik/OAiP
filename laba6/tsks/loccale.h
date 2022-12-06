//
// Created by Valentin Gouriev on 30.11.22.
//

#ifndef TSK1_LOCCALE_H
#define TSK1_LOCCALE_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void printArchLogo();
void printTsk1();
void printTsk2();
void size(int *n);
void size_2(int *n, int* m);
void* memory(int n, int*arr);
void scan_arr(int *arr, int n);
void print_arr(int *arr, int n);
void* mem(int n, int* arr);
void rand_arr(int*arr, int* bubbl, int* bb, int n);
void check_12(int *arr, int* bubbl, int* bb, int row);
void chet(int* arr, int n, int* p);
void merge(int* a, int num, int *t1);
void revers_merge(int* a, int num, int* t3);
void bubble(int n, int* arr, int* t2);
void sravn(int t1, int t2);
void zamena(int* arr, int* bubbl, int n);
///*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*///
void* memory_2(int n, int m);
void* freee(int n, int** matr);
void printarr_2(int** matr, int n, int m);
void scanarr_2(int** matr, int n, int m);
void randarr_2(int** matr, int n, int m);
void work_in_matr(int** matr, int n, int m);
void check_12_2(int *arr,int row, int col);

#endif //TSK1_LOCCALE_H
