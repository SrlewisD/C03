int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "World";

	printf("Comparison result of str1 and str2: %d\n", ft_strcmp(str1, str2));
	// Should print 0
	printf("Comparison result of str1 and str3: %d\n", ft_strcmp(str1, str3));
	// Should print a negative value
	printf("Comparison result of str3 and str1: %d\n", ft_strcmp(str3, str1));
	// Should print a positive value

	return 0;
}*/
