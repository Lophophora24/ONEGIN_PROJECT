#include "input.h"
#include "sort.h"
#include <string.h>
#include <stdio.h>

void bubble_sort(char *data[], int nlines)
{
    for(int i = 0; i < nlines; ++i)
        for(int j = 0; j < nlines - 1; ++j) {
            if(strcmp(data[j], data[j+1]) > 0){ 
                swap(data, j, j+1);
                //printf("i = %d, j = %d\n", i, j);
                //print_data();   
            }
        }
}

void qsort(char *data[], int left, int right, int nlines)
{

}

void swap(char *data[], int one, int two)
{
    char *p = data[one];
    data[one] = data[two];
    data[two] = p;
}