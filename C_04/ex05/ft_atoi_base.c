#include <stdio.h>

int	ft_base_check(char *base, int base_len)
{
	char *temp;

	temp = base + 1;
	if (base_len <= 1)
		return(1);
	while (*base)
	{
		if (*base == 0 || *base == 43 || *base == 45 || (*base >= 9 && *base <= 13))
			return(1);
		while (*temp)
		{
			if (*base == *temp)
				return(1);
			temp++;
		}
		temp = ++base + 1;
	}
	return(0);
}

int	ft_str_base_check(char strchar, char *base)
{
	while (*base)
	{
		if (strchar == *base)
			return(1);
		base++;
	}
	return(0);
}

int	ft_atoi_base(char *str, char *base)
{
	int sign;
	int result;
	int base_len;

	sign = 1;
	result = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (ft_base_check(base, base_len))
		return(0);
	while (*str >= 9 && *str <= 13)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (ft_str_base_check(*str, base))
	{
		result = (result * base_len) + (*str - '0');
		str++;
	}
	return(sign * result);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("1234", "0123456789"));
	return(0);
}
