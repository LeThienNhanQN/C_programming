#include <stdio.h>
#include "function_array.h"

int init_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    return -1;
}

int print_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return -1;
}

int insert_array(int *a, int k, int x, int *n) {
    if (k < 0 || k > *n) {
        printf("Vi tri khong hop le.\n");
        return -1;
    }

    for (int i = *n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = x;
    (*n)++;
    return -1;
}

int delete_array(int *a, int k, int *n) {
    if (k < 0 || k >= *n) {
        printf("Vi tri khong hop le.\n");
        return -1;
    }

    for (int i = k; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    return -1;
}

int sort_array_ascending(int *a, int n) {
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
    return -1;
}

int sort_array_descending(int *a, int n) {
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
    return -1;
}

int search_array(int *a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}