#include <stdio.h>

int	ft_is_lower(char a)
{
	if (a >= 97 && a <= 122)
		return(1);
	else
		return(0);
}

int	ft_is_upper(char b)
{
	if (b >= 65 && b <= 90)
		return(1);
	else
		return(0);
}

int	ft_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return(0);
}

int	ft_iznogoud(char d)
{
	if (ft_is_lower(d) || ft_is_upper(d) || ft_is_numeric(d))
		return(0);
	else
		return(1);
}

char	*ft_strcapitalize2(char *str)
{
	int i;
	i = 0;
	while (str[i] !=0)
	{
		if (ft_is_lower(str[i]))
		{
			if (ft_iznogoud(str[i-1]))
				str[i] = str[i] - 32;
		}
		else if (ft_is_upper(str[i]))
		{
			if (!(ft_iznogoud(str[i-1])))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}



char	*ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i-1] < 48 || (str[i-1] > 57 && 
			str[i-1] < 65) || (str[i-1] > 90 &&
			str[i-1] < 97) || str[i-1] > 122)
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if ((str[i-1] >= 48 && str[i-1] <= 57) ||
					(str[i-1] >= 65 && str[i-1] <= 90) ||
					(str[i-1] >= 97 && str[i-1] <= 122))
					str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char tab[] = "salut, comment tu vas ? 42mots quaRANTe-deux; cinQuAnte+et+un";
	ft_strcapitalize2(tab);
	printf("%s\n", tab);
	return(0);
}
