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

void	catch1(param_t *param)
{
	if (sfKeyboard_isKeyPressed(sfKeyW))
		param->i->w = 1;
	if (sfKeyboard_isKeyPressed(sfKeyM))
		param->i->m = 1;
	if (sfKeyboard_isKeyPressed(sfKeyN))
		param->i->n = 1;
	if (sfKeyboard_isKeyPressed(sfKeyA))
		param->i->a = 1;
	if (sfKeyboard_isKeyPressed(sfKeyS))
		param->i->s = 1;
	if (sfKeyboard_isKeyPressed(sfKeyG))
		param->i->g = 1;
	if (sfKeyboard_isKeyPressed(sfKeyT))
		param->i->t = 1;
	if (sfKeyboard_isKeyPressed(sfKeyP))
		param->i->p = 1;
	if (sfKeyboard_isKeyPressed(sfKeyC))
		param->i->c = 1;
	if (sfKeyboard_isKeyPressed(sfKeyD))
		param->i->d = 1;
}

void	catch2(param_t *param)
{
	if (sfKeyboard_isKeyPressed(sfKeyO))
		param->i->o = 1;
	if (sfKeyboard_isKeyPressed(sfKeyB))
		param->i->b = 1;
	if (sfKeyboard_isKeyPressed(sfKeyB))
		param->i->b = 1;
	if (sfKeyboard_isKeyPressed(sfKeyR))
		param->i->r = 1;
	if (sfKeyboard_isKeyPressed(sfKeyL))
		param->i->z = 1;
}

void	catch_event(param_t *param)
{
	catch1(param);
	catch2(param);
}
