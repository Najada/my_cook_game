/*
** EPITECH PROJECT, 2018
** my_cook.c
** File description:
** my_cook
*/

# include "events.h"
# include "utils.h"
# include "cook.h"
# include <string.h>

void	game_pause(param_t *param)
{
	if (param->state == gamePause) {
		sfRenderWindow_clear(param->window, sfBlack);
		sfRenderWindow_drawSprite(param->window,
		param->assets[1].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[8].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[11].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[2].sprite, NULL);
		sfVector2f pos1 = {800, 550};
		sfSprite_setPosition(param->assets[2].sprite, pos1);
		sfVector2f pos2 = {1200, 550};
		sfSprite_setPosition(param->assets[11].sprite, pos2);
		sfVector2f pos = {120, 50};
		sfSprite_setPosition(param->assets[8].sprite, pos);
	}
}
