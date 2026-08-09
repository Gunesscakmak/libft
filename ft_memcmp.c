
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (p1[i] - p2[i]);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_memcmp("abcdef", "abc", 3));
	printf("%d\n", memcmp("abcde", "abc", 3));
	return (0);
}