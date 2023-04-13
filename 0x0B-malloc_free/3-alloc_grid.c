#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **vee;
	int l, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	vee = malloc(sizeof(int *) * height);

	if (vee == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		vee[l] = malloc(sizeof(int) * width);

		if (vee[l] == NULL)
		{
			for (; l >= 0; l--)
				free(vee[l]);

			free(vee);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (r = 0; r < width; r++)
			vee[l][r] = 0;
	}

	return (vee);
}
