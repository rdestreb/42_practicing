#include "libft.h"

void	ft_putnbr(int n)
{
  if (n < 0)
    {
      ft_putchar('-');
      ft_putnbr(-n);
    }
  else if (n >= 0 && n <= 9)
    ft_putchar(n + '0');
  else
    {
      ft_putnbr(n / 10);
      ft_putnbr(n % 10);
    }
}
