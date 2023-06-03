#include <stdio.h>
#include <stdlib.h>

#include "array_io.h"
#include "sort_bubble.h"

int main(int argc, const char * argv[]) {
    size_t n = 10;
    double *array = malloc(n * sizeof(n));
    
    array_in(array, n);
    
    sort_bubble(array, n);
    
    array_out(array, n);
}
