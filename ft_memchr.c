
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*p;
	size_t	i;

	i = 0;
	p = (unsigned char *) s;
	a = (unsigned char) c;
	while (i < n)
	{
		if (p[i] == a)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "";
	printf("%p\n", (char *) ft_memchr(s, '\0', 4));
	printf("\n%p\n", (char *) memchr(s, '\0', 4));
	return (0);
}