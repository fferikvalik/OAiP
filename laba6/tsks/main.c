#include "loccale.h"

int main() {
    int x, back;
    do {
        printf("Выбирете номер задания:\n");
        scanf("%d", &x);
        if (x == 1)
        {

            printArchLogo();
            printTsk1();
            int n, *arr, *bubbl, *bb, t1 = 0, t2 = 0, t3=0;
            float final, start = clock();
            clock_t nn = clock(), kk;
            printf("\x1b[36mВведите размер массива: ");
            size(&n);
            arr=memory(n, arr);
                bubbl=memory(n, bubbl);
                bb=memory(n,bb);
                printf("\n\x1b[33mхотите зарандомить массив?\n\x1b[31m0\x1b[34m-Нет\n\x1b[31m1\x1b[34m-Да\n");
                check_12(arr, bubbl, bb, n);
                printf("\n\x1b[33mИсходный массив:\n");
                print_arr(arr, n);
                arr=mem(n, arr);
                kk=clock();
                printf("\n\n\x1b[33mОтсортированный методом выбора массив:\n");
                merge(arr, n, &t1);
                arr=mem(n,arr);
                zamena(arr,bubbl,n);
                bubbl=mem(n,bubbl);
                print_arr(bubbl, n);
                printf("\n\n\x1b[33mОбратная сортировка методом выбора:\n");
                revers_merge(arr, n, &t3);
                arr=mem(n, arr);
                zamena(arr,bubbl,n);
                bubbl=mem(n, bubbl);
                print_arr(bubbl, n);
                printf("\n\n\x1b[33mОтсортированный пузырьком массив:\n");
                bubble(n, bb, &t2);
                bb=mem(n,bb);
                zamena(bb,bubbl,n);
                bubbl=mem(n,bubbl);
                print_arr(bubbl, n);
                printf("\n\n\x1b[33mВремя до сортировок = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33mВремя сортировки массива слиянием = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33mВремя сортировки массива пузырьком = \x1b[32m%i\x1b[33m(мс)\n\nВремя сортировки массива слиянием в худшем случае = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33m",(kk - nn) * 1000 / CLOCKS_PER_SEC, t1, t2, t3);
                sravn(t1, t2);
                free(arr);
                final = clock();
                printf("\n\n\x1b[33mЗатраченное время на выполнение всего алгоритма в секундах :\x1b[31m%.3f\n\n",(final - start) / CLOCKS_PER_SEC);
                printf("\x1b[31mХотите выбрать другое задание?\n\x1b[0m\n1-Да\n0-Нет\n");
            while (scanf("%d", &back) != 1 || back > 1 || back < 0 || getchar() != '\n')
            {
                printf("Error. Try again: ");
                rewind(stdin);
            }
        }

        if (x == 2)
        {
            printArchLogo();
            printTsk2();
            int n,m,**arr2;
            size_2(&n,&m);
            arr2=memory_2(n, m);
            printf("\n\x1b[33mхотите зарандомить матрицу? :\n\x1b[31m0\x1b[34m-Нет\n\x1b[31m1\x1b[34m-Да\n");
            check_12_2(arr2, n, m);
            printf("\n\x1b[33mНачальная матрица:\n\n");
            printarr_2(arr2, n, m);
            printf("\n\x1b[33mОтсортированная матрица:\n\n");
            work_in_matr(arr2, n, m);
            freee(n, arr2);
            printf("\n\x1b[31mХотите выбрать другое задание?\n\x1b[0m\n1-Да\n0-Нет\n");
            while (scanf("%d", &back) != 1 || back > 1 || back < 0 || getchar() != '\n')
            {
                printf("Error. Try again: ");
                rewind(stdin);
            }
        }
    }
    while (back == 1);
    if(x=!1)
    {
        return 0;
    }
}
