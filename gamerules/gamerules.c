/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "events.h"
# include "utils.h"
# include "cook.h"
# include <string.h>

void game_rules(param_t *param)
{
	if (param->state == gameRules) {
		sfRenderWindow_clear(param->window, sfBlack);
		sfRenderWindow_drawSprite(param->window,
		param->assets[1].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[2].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[8].sprite, NULL);
		sfRenderWindow_drawSprite(param->window,
		param->assets[11].sprite, NULL);
		display_score(param);
		sfVector2f pos2 = {1190, 800};
		sfSprite_setPosition(param->assets[2].sprite, pos2);
		sfVector2f pos = {1490, 800};
		sfSprite_setPosition(param->assets[11].sprite, pos);
		sfVector2f pos1 = {120, 50};
		sfSprite_setPosition(param->assets[8].sprite, pos1);
	}
}
