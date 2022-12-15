
#include "loccale.h"
int main(void) {
    int back;
    do
    {
        int num;
        void (*function[3])(void) = {&task1, &task2, &task3};
        taskNum(&num);
        function[num - 1]();
        check_ret(&back);
        if(back!=1)
        {
            printf("\t\n\x1b[35;40m THANKS FOR YOUR REVIEW!!! \x1b[0m\n");
        }
    }

    while (back == 1);
}
