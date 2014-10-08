#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (char*)malloc(size)))
		return (NULL);
	while (size--)
		mem[size] = 0;
	return ((void*)mem);
}
