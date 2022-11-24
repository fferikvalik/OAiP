/*
	Из двумерной матрицы размером NxM удалить элементы,
    находящиеся выше главной диагонали.
*/
#include "loccale.h"
int chooseinput(int* matr, int n, int m) {
    int x;
    while (scanf("%d", &x) != 1 || x > 1 || x < 0 || x % 1 != 0 || getchar() != '\n') {
        printf("Error. Try again: ");
        rewind(stdin);
    }
    switch (x)
    {
        case 0:
            printf("\nInput array elements: \n");
            input_matr(matr, n, m);
            break;
        case 1:
            rand_matr(matr, n, m);
            break;
    }
    return matr;
}
int main() {
    int  m, n, ** matr;
    srand(time(NULL));
    printf("Input the size row: ");
    input_row(&n);
    printf("Input the size column: ");
    input_col(&m);
    matr = memory(n, m);
    printf("do you want to use random?:\n1 - Yes\n0 - No\n");
    chooseinput(matr, n, m);
    printf("\nSource array: \n");
    print_matr(matr, n, m);
    printf("\nThe resulting array: \n");
    work_in_matr(matr, n, m);
    freee(n, matr);
    printf("\n");
}
