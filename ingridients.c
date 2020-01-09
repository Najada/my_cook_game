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

void	select5(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 230 && mouse.y <= 255) {
		param->i->m = 1;
		my_strcat(param->current.expected, "m");
	}
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 230 && mouse.y <= 255) {
		param->i->n = 1;
		my_strcat(param->current.expected, "n");
	}
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 281 && mouse.y <= 308) {
		param->i->t = 1;
		my_strcat(param->current.expected, "t");
	}
}

void	select1(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 281 && mouse.y <= 308) {
		param->i->a = 1;
		my_strcat(param->current.expected, "a");
	}
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 341 && mouse.y <= 361) {
		param->i->s = 1;
		my_strcat(param->current.expected, "s");
	}
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 428 && mouse.y <= 455) {
		param->i->g = 1;
		my_strcat(param->current.expected, "g");
	}
}

void	select2(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 494 && mouse.y <= 515){
		param->i->o = 1;
		my_strcat(param->current.expected, "o");
	}
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 545 && mouse.y <= 581) {
		param->i->w = 1;
		my_strcat(param->current.expected, "w");
	}
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 360 && mouse.y <= 375) {
		param->i->p = 1;
		my_strcat(param->current.expected, "p");
	}
}

void	select3(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 429 && mouse.y <= 444) {
		param->i->c = 1;
		my_strcat(param->current.expected, "c");
	}
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 495 && mouse.y <= 518) {
		param->i->d = 1;
		my_strcat(param->current.expected, "d");
	}
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 560 && mouse.y <= 585) {
		param->i->b = 1;
		my_strcat(param->current.expected, "b");
	}
}

void	select4(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1609 && mouse.x <= 1709 &&
		mouse.y >= 720 && mouse.y <= 755) {
		param->i->cook = 1;
	}
	if (mouse.x >= 1700 && mouse.x <= 1900 &&
		mouse.y >= 600 && mouse.y <= 645) {
		param->i->r = 1;
		my_strcat(param->current.expected, "r");
	}
	if (mouse.x >= 1420 && mouse.x <= 1620 &&
		mouse.y >= 600 && mouse.y <= 645) {
		param->i->z = 1;
		my_strcat(param->current.expected, "z");
	}
}
