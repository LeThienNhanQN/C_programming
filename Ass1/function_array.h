#ifndef ARRAY_H
#define ARRAY_H

int init_array(int *a, int n);
int print_array(int *a, int n);
int insert_array(int *a, int k, int x, int *n);
int delete_array(int *a, int k, int *n);
int search_array(int *a, int n, int x);
int sort_array_ascending(int *a, int n);
int sort_array_descending(int *a, int n);

#endif