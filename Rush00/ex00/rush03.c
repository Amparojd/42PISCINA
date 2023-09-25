void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	C;
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		C = 1;
		while (C <= x)
		{
			if ((C == 1 && row == 1) || (C == x && row == y && C != 1 && row != 1))
				ft_putchar('A');
			else if ((C == x && row == 1) || (C == 1 && row == y))
				ft_putchar('C');
			else if ((C == 1) || (C == x) || (row == 1) || (row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		C++;
		}
		ft_putchar('\n');
		row++;
	}
}