// test/test.c
#include <stdio.h>
#include <stdlib.h>

#include "so1.h"
#include "so2.h"

int main(int argc, char **argv)
{
	so2_printf();
    return so2_test(9);
}

