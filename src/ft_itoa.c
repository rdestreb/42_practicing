#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;

	i = 0;
	while (n % 10 < 10)
	{
		n = n % 10;
		i++;
	}
	if (n < 0)
	{

		ft_putchar('-');
	}
}
