#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "loccale.h"
int main() {
    int x, back;
    do
    {
        printf("choose number of your task:\n");
        scanf("%d",&x);
        if (x == 1)
        {
            int n, count = 0;
            float *x;
            float *arr;
            printArchLogo();
            printf("Input the size array: ");
            inputn1(&n);
            arr = memory1(n);
            printf("\nInput array elements: \n");
            inputarr1(arr, n);
            printf("\nSource array: \n");
            printarr1(arr, n);
            workarr1(arr, n, &count);
            n -= count;
            printf("\nThe resulting array: \n");
            arr = mem1(n, arr);
            printarr1(arr, n);
            free(arr);
            printf("\nWould you like to restart?\n");
            while (scanf("%d", &back) != 1 || back > 1 || back<0 || getchar() != '\n')
            {
                printf("Error. Try again: ");
                rewind(stdin);
            }
        }
        if (x==2)
        {
            int  m, n, ** matr;
            srand(time(NULL));
            printArchLogo();
            printf("Input the size row: ");
            input_row2(&n);
            printf("Input the size column: ");
            input_col2(&m);
            matr = memory2(n,m);
            printf("do you want to use random?:\n1 - Yes\n0 - No\n");
            choose_input2(matr,n,m);
            printf("\nSource array: \n");
            print_matr2(matr, n, m);
            printf("\nThe resulting array: \n\n");
            work_in_matr2(matr, n, m);
            freee2(n, matr);
            printf("\nWould you like to restart?\n");
            while (scanf("%d", &back) != 1 || back > 1 || back < 0 || getchar() != '\n')
            {
                printf("Error. Try again: ");
                rewind(stdin);
            }
        }
        if (x==3)
        {
            int  m, n, ** matr;
            srand(time(NULL));
            printArchLogo();
            printf("Input the size row: ");
            input_row2(&n);
            printf("Input the size column: ");
            input_col2(&m);
            matr = memory2(n, m);
            printf("do you want to use random?:\n1 - Yes\n0 - No\n");
            choose_input2(matr, n, m);
            printf("\nSource array: \n");
            print_matr2(matr, n, m);
            printf("\nThe resulting array: \n");
            work_in_matr3(matr, n, m);
            freee2(n, matr);
            printf("\n");
            printf("\nWould you like to restart?\n");
            while (scanf("%d", &back) != 1 || back > 1 || back < 0 || getchar() != '\n')
            {
                printf("Error. Try again: ");
                rewind(stdin);
            }
        }
    }
    while(back == 1);
}

