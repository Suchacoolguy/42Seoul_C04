int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 0;
	result = 0;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign += 1;
		str++;
	}
	sign = (sign %= 2) * -1;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (sign * result);
}
