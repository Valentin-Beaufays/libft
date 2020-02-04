#include "libft.h"

static size_t	number_size(unsigned int n)
{
	size_t	size;

	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char			*ft_utoa(unsigned int n)
{
	char	*res;
	size_t	i;

	i = number_size(n);
	if (!(res = malloc(sizeof(*res) * (i + 1))))
		return (0);
	res[i] = 0;
	i--;
	if (n == 0)
		res[i] = '0';
	while (n != 0)
	{
		res[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (res);
}
