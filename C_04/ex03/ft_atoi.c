#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str){
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return(sign*result);
}

int	main(void)
{
	printf("%d", ft_atoi("\r\f\n\t\v++++-----1234ab123"));
	return(0);
}
