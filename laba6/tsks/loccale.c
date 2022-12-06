//
// Created by Valentin Gouriev on 30.11.22.
//
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "loccale.h"
void check(int *a)
{
    int p;
    while (scanf("%d", &p)!= 1 || p > 1 || p < 0 || getchar() != '\n'){
        printf("Неверный ввод. Попробуйте ещё раз.\n");
        fflush(stdin);
    }
    *a = p;
}
void printArchLogo(){

    printf("\x1b[1;40;31m                                                                                          \t\t\t\x1b[0m");
    printf("\n\x1b[0m");
    puts("\x1b[1;40;31m\x1b \t\t\t         $c2,$c1                      _     _ _                               \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t        $c2/$c1#$c2\\$c1        __ _ _ __ ___| |__ | (_)_ __  _   ___  __      \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t       $c2/$c1###$c2\\$c1      / _` | '__/ __| '_ \\| | | '_ \\| | | \\ \\/ /      \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t      $c2/$c1#####$c2\\$c1    | (_| | | | (__| | | | | | | | | |_| |>  <       \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t     $c2/$c1##,-,##$c2\\$c1    \\__,_|_|  \\___|_| |_|_|_|_| |_|\\__,_/_/\\_\\      \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t    $c2/$c1##(   )##$c2\\$c1                                                   \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t   $c2/$c1#.--   --.#$c2\\   \\    A simple, elegant GNU/Linux distribution.    \t\t\t\x1b[0m\x1b");
    puts("\x1b[1;40;31m\x1b \t\t\t  $c2/$c1`           `$c2\\$z                                                  \t\t\t\x1b[0m\x1b");
    printf("\x1b[1;40;31m                                                                                          \t\t\t\x1b[0m");
    printf("\x1b[1;40;31m\x1b[0m\x1b\n\n");
}

void printTsk1()
{
    printf("\tВ одномерном массиве выполнить \n сортировку четных элементов методом выбора\n\n");

}
void size(int *n){
    int p;
    while (scanf("%d", &p) != 1 || getchar() != '\n' || p>999999 || p<1 || p % 1 != 0){
        printf("Неверный ввод. Попробуйте ещё раз.\n");
        fflush(stdin);
    }
    *n = p;
}

void size_2(int *n, int* m){
    int p, b;
    printf("\x1b[36mВведите количество строк : ");
    while (scanf("%d", &p) != 1 || getchar() != '\n' || p>999999 || p<1 || p % 1 != 0){
        printf("Неверный ввод. Попробуйте ещё раз.\n");
        fflush(stdin);
    }
    *n = p;
    printf("\x1b[36mВведите количество столбцов : ");
    while (scanf("%d", &b) != 1 || getchar() != '\n' || b>999999 || b<1 || b % 1 != 0){
        printf("Неверный ввод. Попробуйте ещё раз.\n");
        fflush(stdin);
    }
    *m = b;
}

void* memory(int n, int*arr){
    arr=(int*)malloc(n * sizeof(int));
    return arr;
}

void scan_arr(int *arr, int n){
    for (int i = 0; i < n; i++){
        while (scanf("%d", &*(arr + i)) != 1 || getchar() != '\n' || *(arr + i) % 1 != 0){
            printf("Неверный ввод. Попробуйте ещё раз : ");
            fflush(stdin);
        }
    }
}

void print_arr(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("\x1b[35m%d\x1b[0m ", *(arr + i));
    }
}

void* mem(int n, int* arr){
    arr=(int*)realloc(arr, n*sizeof(int));
    return arr;
}

void rand_arr(int*arr, int* bubbl, int* bb, int n){
    srand(time(NULL));
    for (int i = 0; i < n; ++i){
        *(arr + i) = rand() % 201-100;
    }
    for (int i = 0; i < n; ++i){
        *(bubbl + i) = *(arr + i);
    }
    for (int i = 0; i < n; ++i){
        *(bb + i) = *(arr + i);
    }
}

void check_12(int *arr, int* bubbl, int* bb, int row){
    int yn;
    while (scanf("%d", &yn) != 1 || yn > 1 || yn < 0 || yn % 1 != 0 || getchar() != '\n'){
        printf("Неверный ввод. Попробуйте ещё раз : ");
        fflush(stdin);
    }
    if(yn==0){
        printf("\nВведите элементы массива : \n");
        scan_arr(arr, row);
    }
    else rand_arr(arr, bubbl, bb, row);
}

void chet(int* arr, int n, int* p) {
    int i, j, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] %2 != 0) {
            for (j = i; j < n; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
            count++;
        }
    }
    *p = count;
}

void merge(int* a, int num, int *t1){
    int p;
    chet(a, num,&p);
    num-=p;
    int* c = (int*)malloc(num * sizeof(int));// выделяем память под формируемую последовательность
    int minPosition, tmp;
    clock_t fTimeStart, fTimeStop;
    fTimeStart = clock() / 1000;
    for (int i = 0; i < num; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < num; j++)
            if (a[minPosition] < a[j])
                minPosition = j;
        tmp = a[minPosition];
        a[minPosition] = a[i];
        a[i] = tmp;
    }
    fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
    *t1 = fTimeStop - fTimeStart;
    free(c);


}

void revers_merge(int* a, int num, int* t3){
    int p;
    chet(a, num,&p);
    num-=p;
    int* c = (int*)malloc(num * sizeof(int));// выделяем память под формируемую последовательность
    int minPosition, tmp;
    clock_t fTimeStart, fTimeStop;
    fTimeStart = clock() / 1000;
    for (int i = 0; i < num; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < num; j++)
            if (a[minPosition] > a[j])
                minPosition = j;
        tmp = a[minPosition];
        a[minPosition] = a[i];
        a[i] = tmp;
    }
    fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
    *t3 = fTimeStop - fTimeStart;
    free(c);

}

void zamena(int* arr, int* bubbl, int n) {
    for (int i = 0, z = 0; i < n; i++) {
        if (bubbl[i] > 0) {
            bubbl[i] = arr[z];
            z++;
        }
    }
}

void bubble(int n, int* arr, int* t2){
    int i,j,a,p,m;
    chet(arr, n, &p);
    m=n;
    n-= p;
    clock_t F,S;
    S = clock() * 1000 / CLOCKS_PER_SEC;
    for (i = 0; i < n - 1; i++) { // выбор верхней границы массива
        for (j = n - 1; j > i; j--) // просмотр массива ”снизу” ”вверх”
        {
            if (arr[j - 1] > arr[j]) // условие замены выполнено
            {
                a = arr[j - 1]; // замена j-1 и j элементов
                arr[j - 1] = arr[j];
                arr[j] = a;
            }
        }
    }
    F= clock() * 1000 / CLOCKS_PER_SEC;
    *t2 =F-S;

}

void sravn(int t1, int t2) {
    if (t1 < t2) {
        printf("\x1b[33;40mСортировка выбором быстрее сортировки пузырьком\x1b[0m\n__________________________________________________________\x1b[0m");
    }
    else if (t2 < t1) {
        printf("\x1b[33;40mСортировка пузырьком быстрее сортировки выбором\x1b[0m\n__________________________________________________________\x1b[0m");
    }
    else {
        printf("\x1b[33;40mДве сортировки по времени равны\x1b[0m\n__________________________________________________________\x1b[0m");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printTsk2()
{
    printf("\tВ матрице размером NxM выполнить сортировку строк \n  по возрастанию суммы четных элементов методом слияния\n\n");
}
void* memory_2(int n, int m)
{
    int** matr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        *(matr + i) = (int*)calloc(m, sizeof(int));
    return matr;
}
void* freee(int n, int** matr) {
    for (int i = 0; i < n; i++)
        free(*(matr + i));
    free(matr);
}

void printarr_2(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("\x1b[35m%5d", *(*(matr + i) + j));
        }
        printf("\n");
    }
}

void scanarr_2(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Введите элемент [%d][%d]\n", i + 1, j + 1);
            while (scanf("%d", *(matr + i) + j) != 1) {
                printf("Ошибка. Попробуйте снова:\n");
                rewind(stdin);
            }
        }
    }
}

void randarr_2(int** matr, int n, int m){
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            *(*(matr + i) + j) = rand()%6-1;
        }
    }
}

void work_in_matr(int** matr, int n, int m){

    int arr_buf[100];            // Буфер.
    int s_now = 0, s_prev=0;    // Суммы.

    // !!! Цикл СОРТИРОВКИ !!!
    for(int z=0; z<m; z++)
    {
        int* ptr_arr=&matr[z][0];    // Указатель на первый эллемент z-ого ряда в массиве.
        for (int i = z; i < n; i++)
        {
            // Вычисляем сумму элементов в рядах.
            for (int j = 0; j < m; j++)
            {
                s_prev += *ptr_arr;
                s_now += matr[i][j];
            }
            // Если сумма предыдущего оказалась больше тепущего, меняем их местами .
            if(s_prev > s_now)
            {
                // Перестановка рядов в массиве arr[], путем копирования каждого эллемента стороки в буфер(arr_buf[]).
                for(int k=0; k<n; k++)
                {
                    arr_buf[k]=matr[i][k];   // Заполняем буфер "меньшим" рядом.
                    matr[i][k]=*ptr_arr;     // Заменяем "меньший", "больший".
                    *ptr_arr=arr_buf[k];    // Копируем из буфера "меньший" и вставляем вместо того значения,
                    //на адрес которого указывает указатель.
                    ptr_arr++;  // Присваиваем указателю следующее значение столбца.
                }
                ptr_arr-=n; // Возвращаем указатель на первоночальное значение.
            }
            s_now=0; // Обнуляем суммы.
            s_prev=0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", *(*(matr + i) + j));
        }
        printf("\n");
    }

}

void check_matr(int *arr,int row, int col){
    int yn;
    while (scanf("%d", &yn) != 1 || yn > 1 || yn < 0 || yn % 1 != 0 || getchar() != '\n'){
        printf("Неверный ввод. Попробуйте ещё раз : ");
        fflush(stdin);
    }
    if(yn==0){
        printf("\nВведите элементы массива : \n");
        scanarr_2(arr, row, col);
    }
    else randarr_2(arr, row, col);
}
