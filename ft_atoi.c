
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;
	int	i;
// num'i neden long tanımlamamıza gerek kalmiyordu?
	sign = 1;
	num = 0;
	i = 0;
	while ((nptr[i] < 14 && nptr[i] > 8) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] < 58 && nptr[i] > 47)
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}
