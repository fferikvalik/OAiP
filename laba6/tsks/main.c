#include "loccale.h"

int main() {
    int x, back;
    printf("\n\x1b[31;40m Приветсвую вас, Пользователь! \x1b[0m\n");
    do {
        printf("\n\x1b[;40m Выбирете номер задания: \x1b[0m\n\n");
        while (scanf("%d", &x) != 1 || getchar() != '\n' || x>2 || x<1){
            printf("Неверный ввод. Попробуйте ещё раз.\n");
            fflush(stdin);
        }
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
            printf("\n\x1b[33mхотите зарандомить массив?\n\x1b[31m0\x1b[34m-Нет\n\x1b[31m1\x1b[34m-Да\n\n");
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
            printf("\n\n\x1b[33mВремя до сортировок = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33mВремя сортировки массива методом выбора = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33mВремя сортировки массива пузырьком = \x1b[32m%i\x1b[33m(мс)\n\nВремя сортировки массива методом выбора в худшем случае = \x1b[32m%i\x1b[33m(мс)\n\n\x1b[33m",(kk - nn) * 1000 / CLOCKS_PER_SEC, t1, t2, t3);
            sravn(t1, t2);
            free(arr);
            final = clock();
            printf("\n\n\x1b[33mЗатраченное время на выполнение всего алгоритма в секундах: \x1b[31m%.3f\n\n",(final - start) / CLOCKS_PER_SEC);
            printf("\x1b[31mХотите выбрать другое задание?\n\x1b[0m1-Да\n0-Нет\n\n");
            check(&back);
        }

        else
        {
            printArchLogo();
            printTsk2();
            int n,m,**arr2;
            size_2(&n,&m);
            arr2=memory_2(n, m);
            printf("\n\x1b[33mхотите зарандомить матрицу? \n\x1b[31m0\x1b[34m-Нет\n\x1b[31m1\x1b[34m-Да\n\n");
            check_matr(arr2, n, m);
            printf("\n\x1b[33mНачальная матрица:\n\n");
            printarr_2(arr2, n, m);
            printf("\n\x1b[33mОтсортированная матрица:\n\n");
            work_in_matr(arr2, n, m);
            freee(n, arr2);
            printf("\n\x1b[31mХотите выбрать другое задание?\n\x1b[0m1-Да\n0-Нет\n\n");
            check(&back);
        }
    if(back!=1)
    {
        printf("\t\n\x1b[35;40m СПАСИБО ЗА ВНИМАНИЕ!!! \x1b[0m\n");
    }
    }
    while (back == 1);
}
