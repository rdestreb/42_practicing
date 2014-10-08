#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				return (0);
			else
				i++;
		}
		return (1);
	}
	return (0);
}
