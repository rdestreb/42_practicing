#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dup;
	int		i;

	if (!(dup = (char*)malloc(strlen(s) * sizeof(char))))
		return(NULL);
	i = -1;
	while (s[++i])
		dup[i] = s[i];
	return (dup);
}
