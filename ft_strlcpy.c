#include <stddef.h>
size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	while (s[i] != '\0' && i < size - 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (len);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char d[] = "abcdefgh";
	char s[] = "xxxxxx";
	printf("%ld", ft_strlcpy(d, s, 8));
	printf("\n%s", d);
	return (0);
}