int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Helim";
	char	str3[] = "Helloworld";

	printf("test1: %d\n", ft_strncmp(str1, str2, 3));
	// Should print 0
	printf("test2: %d\n", ft_strncmp(str1, str2, 5));
	// Should print a negative value
	printf("test3: %d\n", ft_strncmp(str1, str3, 7));
	// Should print a positive value
	return 0;
}*/
