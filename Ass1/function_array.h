#ifndef ARRAY_H
#define ARRAY_H

void init_array(int *a, int n);
void print_array(int *a, int n);
void insert_array(int *a, int k, int x, int *n);
void delete_array(int *a, int k, int *n);
int search_array(int *a, int n, int x);
void sort_array_ascending(int *a, int n);
void sort_array_descending(int *a, int n);

#endif
