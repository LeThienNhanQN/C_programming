#include <stdio.h>
#include "function_array.h"

void init_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

void print_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert_array(int *a, int k, int x, int *n) {
    if (k < 0 || k > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = *n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = x;
    (*n)++;
}

void delete_array(int *a, int k, int *n) {
    if (k < 0 || k >= *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = k; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void sort_array_ascending(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sort_array_descending(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int search_array(int *a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}
