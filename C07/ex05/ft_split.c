#include <stdlib.h>

int	count_words(char *str,  char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i] != charset[j])
		{
			if(str[i] == charset[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{



}
