/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** my_hunter functions (header file)
*/

# include <SFML/Graphics.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <limits.h>
# include <SFML/Audio/Export.h>
# include <SFML/Audio/SoundStatus.h>
# include <SFML/Audio/Types.h>
# include <SFML/System/Time.h>
# include <SFML/System/Vector3.h>
# include <SFML/Audio.h>
# include <recipies.h>

# ifndef __COOK_H__
# define __COOK_H__

# define NB_RECEPIES	8
# define ANNIMA_CNT 1
# define ASSETS_CNT 14
# define RULES 		"The player is a cook in\
a restaurant.\n\
Orders will appear randomly \nto the player.\n\
Orders will have a limited time to be done.\n\
Orders will be of different types.\
The player will have to \nchoose the right\
ingredients in the right order.\n"



typedef enum state {
	gameWait,
	gamePlay,
	gameEnd,
	gamePause,
	gameRules
} state_e;

typedef struct assets {
	sfIntRect 				*rec;
	sfTexture 				*texture;
	sfSprite 				*sprite;
} assets_t;

typedef struct params {
	sfRenderWindow 				*window;
	const sfView 				*fixedView;
	assets_t 				*assets;
	sfText 					*text;
	sfFont 					*default_font;
	state_e 				state;
	sfSound					*click_sound;
	sfSoundBuffer				*soundbuffer_click;
	sfMusic					*music;
	recepies_t 				current;
	recepies_t 				nextt;
	recepies_t 				nextnext;
	sfClock					*c;
	recepies_t				recepies[NB_RECEPIES];
	int					money;
	int					next;
	indicate_t				*i;
	int					unlock;
	int					game_over;
} param_t;

void 				check_flags(int ac, char **av);
void 				change_state(param_t *param);
void 				game_wait(param_t *param);
void 				game_play(param_t *param);
void 				game_loader(param_t *param);
void				game_management(param_t *param);
void 				display_score(param_t *param);

//manage move mouse events

void	if_play(param_t *param, sfMouseMoveEvent mouse);
void	if_option(param_t *param, sfMouseMoveEvent mouse);
void	if_quit(param_t *param, sfMouseMoveEvent mouse);
void	if_play_option(param_t *param, sfMouseMoveEvent mouse);
void	if_quit_option(param_t *param, sfMouseMoveEvent mouse);

//manage click mouse event

void	if_click_play(param_t *param, sfMouseButtonEvent mouse);
void	if_click_option(param_t *param, sfMouseButtonEvent mouse);
void	if_click_quit(param_t *param, sfMouseButtonEvent mouse);
void	if_click_quit_option(param_t *param, sfMouseButtonEvent mouse);
void	if_click_play_option(param_t *param, sfMouseButtonEvent mouse);
//manage released mose event

void	if_released_quit(param_t *param, sfMouseButtonEvent mouse);
void	if_released_play(param_t *param, sfMouseButtonEvent mouse);
void	if_released_quit_option(param_t *param, sfMouseButtonEvent mouse);
void	if_released_play_option(param_t *param, sfMouseButtonEvent mouse);

//manage released mose event pause mode

void	if_released_quit_pause(param_t *param, sfMouseButtonEvent mouse);
void	if_released_play_pause(param_t *param, sfMouseButtonEvent mouse);
void	if_released_option(param_t *param, sfMouseButtonEvent mouse);

//manage click mose event pause mode

void	if_click_play_pause(param_t *param, sfMouseButtonEvent mouse);
void	if_click_quit_pause(param_t *param, sfMouseButtonEvent mouse);

//manage move mouse events pause mode

void	if_move_play_pause(param_t *param, sfMouseMoveEvent mouse);
void	if_move_quit_pause(param_t *param, sfMouseMoveEvent mouse);

//inventory

void	select_ingridients(param_t *param, sfMouseButtonEvent mouse);
void	reset_inventory(param_t *param);
void	update_inventory(param_t *param, sfMouseButtonEvent mouse);
void	select5(param_t *param, sfMouseButtonEvent mouse);
void	select1(param_t *param, sfMouseButtonEvent mouse);
void	select2(param_t *param, sfMouseButtonEvent mouse);
void	select3(param_t *param, sfMouseButtonEvent mouse);
void	select4(param_t *param, sfMouseButtonEvent mouse);
void	display_green_or_red(param_t *param);
//game scenes

void	game_rules(param_t *param);
void	game_wait(param_t *param);
void	game_pause(param_t *param);
void	game_play(param_t *param);
void	game_over(param_t *param);
//text

char	*score_to_string(int score);
void	display_score(param_t *param);
void	display_ing(param_t *param, char *str);
void	display_title(param_t *param, char *str);
void	display_time(param_t *param, char *str, int x);
void	display(param_t *param, char *str, int x, int y);
void	display1(param_t *param, char *str, int x, int y);

//recepies

void		unlock_recepies(param_t *param);
recepies_t	create_recepie_from_file(char const *filepath);
void		init_recipies(param_t *param);
//utils

void *my_malloc(unsigned int size);

//get input from keyboard
void	catch_event(param_t *param);
void	my_bzero(char *buffer, int size);
char    *my_strcat(char *dest , char const * src);
int	my_strlen(char const *str);
//display ingridients

void	display_selected(param_t *param);
void	display_selected4(param_t *param);
void	display_selected1(param_t *param);
void	display_selected9(param_t *param);
void	display_selected2(param_t *param);
# endif // __COOK_H_
