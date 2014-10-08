#include "../src/libft.h"
#include "stdio.h"

int	main(void)
{
	char	s0[50] = "";
	char	s1[50] = "trololo";
	char	s2[50] = "trololo";
	char	s3[50] = "trolo";
	char	s4[50] = "trilili";

	printf("%s %s\n %d\n", s1, s2, ft_strequ(s1, s2));
	printf("%s %s\n %d\n", s1, s3, ft_strequ(s1, s3));
	printf("%s %s\n %d\n", s1, s4, ft_strequ(s1, s4));
	printf("%s %s\n %d\n", s0, s0, ft_strequ(s0, s0));
	return (0);
}
