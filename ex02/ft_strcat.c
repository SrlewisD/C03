char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[20] = "charles is ";
	char src[] = "the king!";
	ft_strcat(dest, src);
	printf("%s\n", dest); // Should print "Hello, world!"    return 0;
}*/
