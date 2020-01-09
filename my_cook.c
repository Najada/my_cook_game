/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** my_hunter functions
*/

# include "events.h"
# include "utils.h"
# include "cook.h"
# include <string.h>

void change_state(param_t *param)
{
	if (param->state == gameWait) {
		sfRenderWindow_clear(param->window, sfBlack);
			sfVector2f change = { 0, (rand() % 400) };
		sfSprite_setPosition(param->assets[6].sprite, change);
		param->state = gamePlay;
	} else if (param->state == gamePlay) {
		sfRenderWindow_clear(param->window, sfBlack);
		param->state = gameEnd;
	}
}

void game_loader(param_t *param)
{
	sfRenderWindow_clear(param->window, sfBlack);
	sfRenderWindow_setView(param->window, param->fixedView);
	game_wait(param);
	game_play(param);
	if (param->state == gamePause)
		game_pause(param);
	if (param->state == gamePlay)
		game_play(param);
	if (param->state == gameRules)
		game_rules(param);
	if (param->state == gameEnd) {
		sfRenderWindow_drawSprite(param->window,
		param->assets[8].sprite, NULL);
		sfRenderWindow_setMouseCursorVisible(param->window, sfTrue);
		sfRenderWindow_display(param->window);
		sfSleep(sfSeconds(3));
		sfRenderWindow_close(param->window);
	}
	sfRenderWindow_drawSprite(param->window,
	param->assets[4].sprite, NULL);
	sfRenderWindow_display(param->window);
}

void game_management(param_t *param)
{
	sfEvent event;

	while (sfRenderWindow_isOpen(param->window) && param->game_over != 1) {
		while (sfRenderWindow_pollEvent(param->window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(param->window);
			else if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
				param->state = gamePause;
				sfMusic_pause(param->music);
			}
			catch_event(param);
			events_manager(param, event);
		}
		game_loader(param);
		game_over(param);
	}
}
