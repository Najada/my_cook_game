/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "utils.h"
# include "cook.h"

void	game_over(param_t *param)
{
	sfTime time = sfClock_getElapsedTime(param->c);
	float t = sfTime_asSeconds(time);

	if (t > 180) {
		sfRenderWindow_clear(param->window, sfBlack);
		param->game_over = 1;
	}
}
