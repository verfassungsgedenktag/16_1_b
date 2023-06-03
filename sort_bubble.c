#include "sort_bubble.h"

void swap(double *a, double *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

void sort_bubble(double *array, size_t n) {
    int flag;
    size_t i = n - 1;
    do {
        flag = 0;
        for (double *p = array, *e = array + i; p < e; ++p)
            if (*p > *(p + 1)) {
                swap(p, p + 1);
                flag = 1;
            }
        --i;
    } while (flag);
}
