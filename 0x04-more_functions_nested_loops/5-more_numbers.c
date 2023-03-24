int _putchar(char);

/**
 * more_numbers - print 14 times number from 0 to 14
 *
 * Return: None.
 */

void more_numbers(void)
{

	int i = 0;

	while (i < 14)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
