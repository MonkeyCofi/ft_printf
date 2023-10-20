#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

int main(void)
{
	int test = -15;

	ft_printf("Print memory: %p\n", &test);
	ft_printf("Print number: %d\n", test);
	ft_printf("Print hexadecimal: Lowercase: %x\tUppercase: %X\n", test, test);
	ft_printf("Print character: %c\n", 97);
	ft_printf("Print string: %s\n", "hello, world");
	ft_printf("Print unsigned: %u\n", test);
	ft_printf("Print multiple: %d %c %d %s %d\n", 5, '+', 12, "is equal to", 5 + 12);
	ft_printf("%% %% %% %d\n", 25);
}
