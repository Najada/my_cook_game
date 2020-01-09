/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "events.h"
# include "utils.h"
# include "cook.h"

void game_wait(param_t *param)
{
	if (param->state == gameWait) {
		sfRenderWindow_clear(param->window, sfBlack);
		sfRenderWindow_drawSprite(param->window,
		param->assets[0].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[2].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[11].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[12].sprite, NULL);
		sfVector2f pos1 = {1650, 280};
		sfSprite_setPosition(param->assets[2].sprite, pos1);
		sfVector2f pos = {1650, 480};
		sfSprite_setPosition(param->assets[11].sprite, pos);
		sfVector2f pos2 = {1650, 380};
		sfSprite_setPosition(param->assets[12].sprite, pos2);
	}
}
