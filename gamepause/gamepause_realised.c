/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_released_quit_pause(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1200 && mouse.x <= 1430 &&\
		mouse.y >= 550 && mouse.y <= 620) {
		sfSleep(sfMilliseconds(150));
		sfRenderWindow_close(param->window);
	}
}

void	if_released_play_pause(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 800 && mouse.x <= 1030 &&\
		mouse.y >= 550 && mouse.y <= 620) {
		param->state = gamePlay;
		sfMusic_play(param->music);
	}
}
