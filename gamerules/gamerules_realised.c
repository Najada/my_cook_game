/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_released_quit_option(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1490 && mouse.x <= 1710 &&
		mouse.y >= 800 && mouse.y <= 870) {
		sfSleep(sfMilliseconds(150));
		sfRenderWindow_close(param->window);
	}
}

void	if_released_play_option(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1190 && mouse.x <= 1410 &&
		mouse.y >= 800 && mouse.y <= 870) {
		sfSleep(sfMilliseconds(125));
		param->state = gamePlay;
		sfMusic_play(param->music);
	}
}
