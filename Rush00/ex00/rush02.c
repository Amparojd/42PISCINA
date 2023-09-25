#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int c;
	int r;
	r = 1;
	while (r <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c != 1 && c != x) && (r == 1 || r == y))
				ft_putchar('B');
			else if ((r != 1 && r != y) && (c == 1 || c == x))
				ft_putchar('C');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('A');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
