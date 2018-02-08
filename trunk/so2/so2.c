#include <stdio.h>
#include <stdlib.h>
#include "so.h"
#include "so1.h"
#include "so2.h"

int so2_printf()
{
	printf("so2_printf\n");
	so_printf(1,2);
}

int so2_test(int a)
{
    for (int i=0; i<a; ++i)
    {
        printf("so1_test(%d+%d)=%d\n", i, i, so1_test(i, i));
    }
    
    return 0;
}

