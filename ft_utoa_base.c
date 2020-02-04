
#include "libft.h"

static size_t	number_size(unsigned int n, int base)
{
	size_t	size;

	size = 0;
	while (n != 0)
	{
		n /= (base);
		size++;
	}
	return (size);
}

char			*ft_utoa_base(unsigned int n, const char *base)
{
	char	*res;
	size_t	base_len;
	size_t	i;

	base_len = ft_strlen(base);
	i = number_size(n, base_len);
	if (!(res = malloc(sizeof(*res) * (i + 1))))
		return (0);
	res[i] = 0;
	i--;
	if (n == 0)
		res[i] = '0';
	while (n != 0)
	{
		res[i] = base[n % base_len];
		n /= base_len;
		i--;
	}
	return (res);
}
