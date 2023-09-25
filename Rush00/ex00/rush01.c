

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	Columnas;
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		Columnas = 1;
		while (Columnas <= x)
		{
			if ((Columnas == 1 && row == 1) || (Columnas == x && row == y && Columnas != 1 && row != 1))
				ft_putchar('/');
			else if ((Columnas == x && row == 1) || (Columnas == 1 && row == y))
				ft_putchar('\\');
			else if ((Columnas == 1) || (Columnas == x) || (row == 1) || (row == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		Columnas++;
		}
		ft_putchar('\n');
		row++;
	}
}
