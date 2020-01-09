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

void	display_selected10(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->o == 1) {
		display1(param, "O", 1710, 465);
		param->assets[7].rec = configure_rect(5500, 0, 500, 120);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "O", 1710, 465);
	if (param->i->b == 1) {
		display1(param, "B", 1420, 535);
		display1(param, "R", 1700, 590);
		param->assets[7].rec = configure_rect(7560, 0, 500, 120);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "B", 1420, 535);
}

void	display_selected3(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->w == 1) {
		display1(param, "W", 1700, 535);
		param->assets[7].rec = configure_rect(730, 0, 300, 100);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "W", 1700, 535);
	if (param->i->r == 1) {
		display1(param, "R", 1700, 590);
		param->assets[7].rec = configure_rect(2560, 0, 500, 120);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "R", 1700, 590);
}
void	display_last(param_t *param)
{
	if (param->i->z == 1) {
		display1(param, "Z", 1430, 590);
		param->assets[7].rec = configure_rect(1700, 0, 200, 150);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfVector2f pos1 = {900, 780};
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "Z", 1430, 590);
}

void	display_green_or_red(param_t *param)
{
	display_selected(param);
	display_selected4(param);
	display_selected1(param);
	display_selected9(param);
	display_selected2(param);
	display_selected10(param);
	display_selected3(param);
	display_last(param);
}
