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

void	display_selected(param_t *param)
{
	if (param->i->cook == 1)
		display1(param, "COOK", 1600, 700);
	else
		display(param, "COOK", 1600, 700);
	if (param->i->m == 1) {
		display1(param, "M", 1420, 210);
		param->assets[7].rec = configure_rect(0, 0, 500, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfVector2f pos1 = {900, 780};
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "M", 1420, 210);
}

void	display_selected4(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->n == 1) {
		display1(param, "N", 1700, 200);
		param->assets[7].rec = configure_rect(6500, 0, 2000, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "N", 1700, 200);
	if (param->i->a == 1) {
		display1(param, "A", 1700, 255);
		param->assets[7].rec = configure_rect(9500, 0, 500, 100);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "A", 1700, 255);
}

void	display_selected1(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->p == 1) {
		display1(param, "P", 1420, 330);
		param->assets[7].rec = configure_rect(1000, 0, 500, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "P", 1420, 330);
	if (param->i->s == 1) {
		display1(param, "S", 1700, 315);
		param->assets[7].rec = configure_rect(8550, 0, 500, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "S", 1700, 315);
}

void	display_selected9(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->g == 1) {
		display1(param, "G", 1700, 400);
		param->assets[7].rec = configure_rect(3550, 0, 2000, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "G", 1700, 400);
	if (param->i->t == 1) {
		display1(param, "T", 1420, 265);
		param->assets[7].rec = configure_rect(4500, 0, 700, 120);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "T", 1420, 265);
}

void	display_selected2(param_t *param)
{
	sfVector2f pos1 = {900, 780};
	if (param->i->c == 1) {
		display1(param, "C", 1420, 395);
		param->assets[7].rec = configure_rect(2340, 0, 500, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "C", 1420, 395);
	if (param->i->d == 1) {
		display1(param, "D", 1420, 470);
		param->assets[7].rec = configure_rect(440, 0, 300, 137);
		sfSprite_setTextureRect(param->assets[7].sprite,
		*param->assets[7].rec);
		sfSprite_setPosition(param->assets[7].sprite, pos1);
		sfRenderWindow_drawSprite(param->window,
		param->assets[7].sprite, NULL);
	} else
		display(param, "D", 1420, 470);
}
