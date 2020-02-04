#include "libft.h"
#include <stdio.h>

unsigned long	ft_strtoul(const char *str, char **endptr, int base)
{
	unsigned long	res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	while (*str && ft_isalnum(*str))
	{
		printf("%lu\n", res);
		if (ft_isdigit(*str))
			res = (res * base) + (*str - 48);
		else if (*str >= 'a' && *str <= ('a' + base - 10))
			res = (res * base) + (*str - 87);
		else if (*str >= 'A' && *str <= ('A' + base - 10))
			res = (res * base) + (*str - 55);
		str++;
	}
	return (res);
}²:
