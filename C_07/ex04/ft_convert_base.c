#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)//STRLEN WILL SAVE OUR SOULS
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	ft_base_check(char *base)//VERIFIE QUE LES BASES SONT OK
{
	char *temp;

	temp = base + 1;
	if (temp == 0)
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
		temp = ++base +1;
	}
	return(0);
}

int	ft_nbr_base_check(char nbr, char *base)//VERIFIE QUE NBR EST BIEN DANS base_from
{
	while (*base)
	{
		if (nbr == *base)
			return(1);
		base++;
	}
	return(0);
}

int	ft_base_to_int(char nbr, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (nbr == base[i])
			return(i);
		i++;
	}
	return(-1);
}


int	ft_atoi_base(char *nbr, char *base)
{
	int sign;
	int result;
	int base_len;

	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	while (*nbr >= 9 && *nbr <= 13)
		nbr++;
	while (*nbr == 43 || *nbr == 45)
	{
		if (*nbr == 45)
			sign *= -1;
		nbr++;
	}
	while (ft_nbr_base_check(*nbr, base))
	{
		result = (result * base_len) + ft_base_to_int(*nbr, base);
		nbr++;
	}
	return(sign * result);
}

char	*ft_int_to_base(int base_10, char *base, int base_len, int div, char *new)
{
	int i;

	i = div;
	while (i != -1)
	{
		new[i] = base[base_10 % base_len];
		base_10 /= base_len;
		i--;
	}
	return(new);
}

char	*ft_convert_int_to_base(int base_10, char *base, int base_len)//CONVERTI L'INT EN BASE 10 VERS base_to
{
	int temp;
	int i;
	char *new;

	temp = base_10;
	i = 0;
	while (temp / base_len)
	{
		temp /= base_len;
		i++;
	}
	if (base_10 < 0)
		i++;
	new = malloc(sizeof(*new) * i + 1);
	if (base_10 < 0)
	{
		*new = '-';
		base_10 *= -1;
	}
	new = ft_int_to_base(base_10, base, base_len, i, new);
	return(new);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)//BEAUCOUP TROP LONG
{
	int baset_len;
	int base_10;

	baset_len = ft_strlen(base_to);
	if (ft_base_check(base_from) || ft_base_check(base_to))
		return(0);
	base_10 = ft_atoi_base(nbr, base_from);//TRANSFORME NBR EN INT BASE 10
	return(ft_convert_int_to_base(base_10, base_to, baset_len));
}

int	main(void)
{
	char *base_dec = "01";
	char *base_hex = "0123456789";
	char *fuck = "100111101";

	printf("%s\n", ft_convert_base(fuck, base_dec, base_hex));
	return(0);
}
