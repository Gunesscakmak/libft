//#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
			{
				j = 0;
				return ((char *) &big[i + j]);
			}
		}
		i++;
	}
	return (NULL); 
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strnstr("heworld", "world", 7));
	return (0);
}