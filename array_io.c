#include "array_io.h"

void array_in(double *array, size_t n) {
    for (double *p = array, *e = array + n; p < e; ++p)
        scanf("%lf", p);
}

void array_out(const double *array, size_t n) {
    for (const double *p = array, *e = array + n; p < e; ++p)
        printf("%lf ", *p);
}
