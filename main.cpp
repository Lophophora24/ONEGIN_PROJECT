#include "input.h"
#include "sort.h"

main(void)
{
    readlines();
    print_data();
    bubble_sort(data, nlines);
    print_data();
    return 0;
}



