#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("%p\n", 0);
	printf("%p\n", 0);
	ft_printf("%p\n", ULONG_MAX);
	printf("%p\n", ULONG_MAX);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	ft_printf("%p\n", -ULONG_MAX);
	printf("%p\n", -ULONG_MAX);

	return 0;
}
