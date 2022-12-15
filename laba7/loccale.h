//
// Created by Valentin Gouriev on 14.12.22.
//
#ifndef TSKS_LOCCALE_H
#define TSKS_LOCCALE_H
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void *input_str(char** string);
void *str_len(char* str, int* len);
void *choice(int n);
void *merge_sort(int* mas_i, int* mas, int l, int r);
void merge(int* mas_i, int* mas, int left, int right);
void *longest_words(char** str, int* length, int n, int* max);
void *sorted_string(int argc, char** argv);
void check_ret(int *a);
void printArchLogo();
void task1();
void task2();
int task3(int argc, char** argv);
int str(const char* string);
void getString(char** string);
void taskNum(int* num);
void stringRemoveTrailingSpaces(char** string);
void stringRemoveWord(char** string, int k);
void findDeleteSubstring(char** string1, char** string2);
void merge1(int*** arr, int left, int right);
void mergeSort(int*** arr, int left, int right);
#endif //TSKS_LOCCALE_H
