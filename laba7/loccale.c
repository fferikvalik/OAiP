//
// Created by Valentin Gouriev on 14.12.22.
//

#include <stdio.h>
#include <stdlib.h>
#include "loccale.h"

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

void task1() {

    printArchLogo();
    char* string = (char*)malloc(256);
    int k;
    printf("\nTask 1\n\n\x1b[33m This programm removes words in string \n        with length less than k.\n\n Please, enter k: \x1b[0m");
    while ((scanf("%d", &k) != 1 || getchar() != '\n')) {
        printf("Invalid input. Please, enter correct k: ");
        rewind(stdin);
    }
    printf("\nSuccess! Now enter your string of words: ");
    getString(&string);
    stringRemoveTrailingSpaces(&string);
    stringRemoveWord(&string, k);
    printf("Your new string is: ");
    printf("\x1b[35m%s\x1b[0m", string);
    if (str(string) > 1) {
        free(string);
    }

}

void check_ret(int *a)
{
    int p;
    printf("\n\n\x1b[31mWould you like to return?\n\x1b[0m1-Yes\n0-No\n\n");
    while (scanf("%d", &p)!= 1 || p > 1 || p < 0 || getchar() != '\n'){
        printf("Incorrect Input. Try again\n");
        fflush(stdin);
    }
    *a = p;
}
void task2() {

    printArchLogo();
    char* S = (char*)malloc(256);
    char* S0 = (char*)malloc(256);
    printf("\nTask 2\n\n\x1b[33m This programm removes first substring matching S0 from S.\n If there is no matching strings then output S without changes. \x1b[0m");
    printf("\n\nPlease, enter S: ");
    getString(&S);
    printf("\nSuccess! Now enter S0: ");
    getString(&S0);
    findDeleteSubstring(&S, &S0);
    printf("\nYour result is: ");

    printf("\x1b[35m%s\x1b[0m", S);
    if (str(S) > 1) {
        free(S);
    }
    if (str(S0) > 1) {
        free(S0);
    }

}
int task3(int argc, char** argv) {
    printArchLogo();
    printf("\nTask 3\n\n\x1b[33m     Sort the array of strings using the merge method in\n descending order of the length of the maximum word in each string \x1b[0m\n\n");
    int n= 0;
    int* len = NULL;
    int* max = NULL;
    int* max_ind = NULL;
    char** str = NULL;
    printf("Enter a number of strings:\n");
    while (scanf("%d", &n) != 1 || getchar() != '\n') {
        printf("Pls enter a NUMBER\n");
        rewind(stdin);
    }
    str = (char**)calloc(n, 1 * sizeof(char*));
    printf("\nEnter strings:\n");
    max = (int*)calloc(n, sizeof(int));
    max_ind = (int*)calloc(n, sizeof(int));
    len = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        max_ind[i] = i;
        str[i] = (char*)calloc(1, 1);
        //printf("%d. ", i + 1);
        input_str(&str[i]);
        len[i] = 0;
        str_len(str[i], &len[i]);
    }
    longest_words(str, len, n, max);
    merge(max_ind, max, 0, n - 1);
    printf("\nSorted array: \n\n");
    printf("\x1b[35m");
    for (int i = 0; i < n; i++)
        printf("%s\n", str[max_ind[i]]);
    for (int i = 0; i < n; i++) {
        free(str[i]);
    }
    free(str);
    free(max);
    free(max_ind);
    free(len);

}
void *checkinput(int a) {
    while (scanf("%d", &a) != 1 || getchar() != '\n') {
        printf("Pls enter a NUMBER\n");
        rewind(stdin);
    }
    return checkinput;
}

void *str_len(char* str, int* len) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
        (*len)++;
    }
    return str_len;
}

void *input_str(char** string)
{
    int char_;
    int i = 0;
    rewind(stdin);
    while ((char_ = getchar()) != EOF && char_ != '\n')
    {
        (*string)[i++] = char_;
        (*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
    }
    (*string)[i] = '\0';
    return input_str;
}


void *merge_sort(int* mas_i, int* mas, int l, int r) {
    int p1 = 0, p2 = 0, mid = (l + r) / 2, pos = 0;
    int* b = NULL;
    int* b_i = NULL;
    b_i = (int*)calloc((r + 1), sizeof(int));
    b = (int*)malloc((r + 1) * sizeof(int));
    int i = 0;
    while (p1 + l <= mid && mid + p2 + 1 <= r) {
        if (p1 > mid || mid + 1 + p2 > r) break;

        if (mas[p1 + l] < mas[mid + 1 + p2]) {
            b[i] = mas[p1 + l];
            b_i[i] = mas_i[p1 + l];
            i++;
            p1++;
        }
        else {
            b[i] = mas[mid + 1 + p2];
            b_i[i] = mas_i[mid + 1 + p2];
            i++;
            p2++;
        }

    }
    while (p1 + l <= mid) {
        b[i] = mas[p1 + l];
        b_i[i] = mas_i[p1 + l];
        i++;
        p1++;
    }
    while (mid + 1 + p2 <= r) {
        b[i] = mas[mid + 1 + p2];
        b_i[i] = mas_i[mid + 1 + p2];
        i++;
        p2++;
    }
    pos = 0;
    for (int i = l; i <= r; i++) {
        mas[i] = b[pos];
        mas_i[i] = b_i[pos];
        pos++;
    }
    free(b);
    return merge_sort;
}

void merge(int* mas_i, int* mas, int left, int right) {
    if (left == right)return;
    int mid = (left + right) / 2;
    merge(mas_i, mas, left, mid);
    merge(mas_i, mas, mid + 1, right);
    merge_sort(mas_i, mas, left, right);
}



void *longest_words(char** str, int* length, int n, int* max) {
    for (int i = 0; i < n; i++) {
        int k = 0;
        max[i] = 999;
        for (int j = 0; j < length[i]; j++) {
            k++;
            if (str[i][j + 1] == ' ' || str[i][j + 1] == '\0' || str[i][j + 1] == '\n') {
                if (max[i] > k) {
                    max[i] -= k;
                }
                k = -1;
            }
        }
    }
    return longest_words;
}


void *sorted_string(int argc, char** argv) {
    int* len = NULL;
    int* max = NULL;
    int* max_ind = NULL;
    char** str = NULL;
    int n = 0;
    printf("Enter a number of strings\n");
    while (scanf("%d", &n) != 1 || getchar() != '\n') {
        printf("Pls enter a NUMBER\n");
        rewind(stdin);
    }
    str = (char**)calloc(n, 1 * sizeof(char*));
    printf("\nEnter strings\n\n");
    max = (int*)calloc(n, sizeof(int));
    max_ind = (int*)calloc(n, sizeof(int));
    len = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        max_ind[i] = i;
        str[i] = (char*)calloc(1, 1);
        //printf("%d. ", i + 1);
        input_str(&str[i]);
        len[i] = 0;
        str_len(str[i], &len[i]);
    }
    longest_words(str, len, n, max);
    merge(max_ind, max, 0, n - 1);
    printf("\nSorted array \n");
    for (int i = 0; i < n; i++)
        printf("%s\n", str[max_ind[i]]);
    for (int i = 0; i < n; i++) {
        free(str[i]);
    }
    free(str);
    free(max);
    free(max_ind);
    free(len);
    return sorted_string;
}

void *choice(int n) {
    void (*function[1])(void) = {sorted_string};
    int num = 1;
    function[num - 1]();
    return choice;
}
void taskNum(int* num) {
    printf("\n\t\t\t\t\t\t\x1b[31;40m Hello. User! \x1b[0m\n");
    printf("\n    \x1b[;40mThis programm includes three tasks from LAB 7 and 8. \x1b[0m \n\x1b[;40mWhat task do you want to chose from LAB 8? (1/2) or 8 LAB? (3): \x1b[0m");
    while (scanf("%d", num) == 0 || getchar() != '\n' || ((*num) < 1 || (*num) > 3)) {
        printf("Invaild input. Enter correct task: ");
        rewind(stdin);
    }
    printf("\n\n");
}
int str(const char* string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

void getString(char** string) {

    char chr;
    int i = 0;
    while ((chr = getchar()) != EOF && chr != '\n') {
        (*string)[i++] = chr;
        if (i == 255) {
            (*string) = (char*)realloc((*string), (i * 2) * sizeof(char));
        }
    }
    (*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
    (*string)[i] = '\0';
}

void stringRemoveTrailingSpaces(char** string) {
    int strLen = str((*string));
    int j;
    int k;
    for (int i = 0; i < strLen - 1; i++)
    {
        if ((*string)[i] == ' ' && (*string)[i + 1] == ' ' || (*string)[i] == "\t" ) {
            for (j = i; j < strLen - 1; j++) {
                (*string)[j] = (*string)[j + 1];
            }
            (*string)[j] = '\0';
            strLen--;
            i--;
        }
        if ((*string)[0] == ' ') {
            for (k = 0; k < strLen - 1; k++) {
                (*string)[k] = (*string)[k + 1];
            }
            (*string)[k] = '\0';
            strLen--;
            if ((*string)[strLen - 1] == ' ') {
                for (int l = strLen - 1; l > 0; l--) {
                    if ((*string)[l - 1] != ' ') {
                        (*string)[l] = '\0';
                        strLen--;
                        break;
                    }
                    else {
                        (*string)[l - 1] = (*string)[l];
                        (*string)[l] = '\0';
                        strLen--;
                    }
                }
            }
        }
    }
    if (strLen > 0) {
        (*string) = (char*)realloc((*string), strLen + 1);
    }
}

void stringRemoveWord(char** string, int k) {
    int strLen = str((*string)) + 1;
    int wordLen = 0;
    (*string)[strLen] = '\0';
    (*string)[strLen - 1] = ' ';
    for (int i = 0; i < strLen; i++) {
        if ((*string)[i] == ' ') {
            if (wordLen < k) {
                i -= wordLen;
                for (int j = i; j < strLen - 1; j++) {
                    (*string)[j] = (*string)[j + wordLen + 1];
                }
                i--;
                strLen = strLen - wordLen - 1;
            }
            wordLen = -1;
        }
        wordLen++;
    }
    if ((*string)[strLen - 1] = ' ') {
        (*string)[strLen - 1] = '\0';
        strLen--;
    }
    if (strLen > 0) {
        (*string) = (char*)realloc((*string), strLen + 1);
    }
}

void findDeleteSubstring(char** string1, char** string2) {
    int strLen1 = str(*string1);
    int strLen2 = str(*string2);
    int temp = strLen1 - strLen2;
    int m;
    int flag;
    for (int i = 0; i < strLen1; i++) {
        flag = 0;
        if ((*string1)[i] == (*string2)[0]) {
            int k = 0;
            int border = i + strLen2;
            for (int j = i; j < border; j++) {
                if ((*string1)[j] != (*string2)[k]) {
                    flag = 1;
                    break;
                }
                k++;
            }
            if (flag == 0) {
                for (int l = i; l < l + strLen2; l++)
                {
                    for (m = l; m < strLen1 - 1; m++)
                    {
                        (*string1)[m] = (*string1)[m + 1];
                    }
                    (*string1)[m] = '\0';
                    l--;
                    strLen1--;
                    if (strLen1 == temp) {
                        break;
                    }
                }
            }

        }
        if (strLen1 == temp) {
            break;
        }
        if (strLen1 > 0) {
            (*string1) = (char*)realloc((*string1), strLen1 + 1);
        }
    }
}
void merge1(int*** arr, int left, int right) {
    int leftMinIndex = left;
    int mid = left + (right - left) / 2;
    int rightMinIndex = mid + 1;
    int resultMinIndex = 0;
    int amount = 1;
    int** resultArray;
    resultArray = (int**)calloc((right + 1), sizeof(int*));
    for (int i = 0; i < 4; i++) {
        resultArray[i] = (int*)calloc(2, sizeof(int));
    }

    while (leftMinIndex <= mid && rightMinIndex <= right) {
        if ((*arr)[leftMinIndex][amount] <= (*arr)[rightMinIndex][amount]) {
            for (int i = 0; i < 2; i++) {
                resultArray[resultMinIndex][i] = (*arr)[leftMinIndex][i];
            }
            leftMinIndex++;
        }
        else {
            for (int i = 0; i < 2; i++) {
                resultArray[resultMinIndex][i] = (*arr)[rightMinIndex][i];
            }
            rightMinIndex++;
        }
        resultMinIndex++;
    }
    while (leftMinIndex <= mid) {
        for (int i = 0; i < 2; i++) {
            resultArray[resultMinIndex][i] = (*arr)[leftMinIndex][i];
        }
        leftMinIndex++;
        resultMinIndex++;
    }
    while (rightMinIndex <= right) {
        for (int i = 0; i < 2; i++) {
            resultArray[resultMinIndex][i] = (*arr)[rightMinIndex][i];
        }
        rightMinIndex++;
        resultMinIndex++;
    }
    for (int i = 0; i < resultMinIndex; i++) {
        for (int j = 0; j < 2; j++) {
            (*arr)[left + i][j] = resultArray[i][j];

        }
    }
}

void mergeSort(int*** arr, int left, int right) {
    int* temp;
    temp = (int*)calloc(2, sizeof(int));

    if (left < right) {
        if (right - left == 1) {
            if ((*arr)[left][1] > (*arr)[right][1]) {
                for (int i = 0; i < 2; i++) {
                    temp[i] = (*arr)[left][i];
                }
                for (int i = 0; i < 2; i++) {
                    (*arr)[left][i] = (*arr)[right][i];
                }
                for (int i = 0; i < 2; i++) {
                    (*arr)[right][i] = temp[i];
                }
            }
        }
        else {
            mergeSort(arr, left, left + (right - left) / 2);
            mergeSort(arr, left + (right - left) / 2 + 1, right);
            merge1(arr, left, right);
        }
    }
}
