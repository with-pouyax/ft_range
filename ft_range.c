#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	n_elements;

	i = 0;
	if (min >= max)
		return (NULL);
	n_elements = max - min;
	array = malloc(n_elements * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
