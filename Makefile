
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	main.c 					\
		assets_utils.c 			\
		utils.c 					\
		my_cook.c 				\
		events.c 					\
		score.c 					\
		ingridients.c	\
		gamewait/gamewait_move.c	\
		gamewait/gamewait_click.c	\
		gamewait/gamewait_release.c	\
		gamewait/gamewait.c	\
		gamerules/gamerules_move.c	\
		gamerules/gamerules_click.c	\
		gamerules/gamerules_realised.c	\
		gamerules/gamerules.c		\
		gamepause/gamepause_move.c	\
		gamepause/gamepause_realised.c	\
		gamepause/gamepause_click.c	\
		gamepause/gamepause.c	\
		inventory.c	\
		init_recepies.c	\
		display_ingridients.c	\
		display_ingridients_1.c	\
		gameplay.c	\
		unlock_recepies.c	\
		my_malloc.c	\
		mouse_move_event.c	\
		mouse_click_event.c	\
		display.c	\
		catch_key.c	\
		configure_assets.c	\
		gameover.c		\
		my_strcat.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	my_cook

LDFLAGS =	-lc_graph_prog

CFLAGS	=	-I./include -W -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm *~ -f $(NAME)
		rm *.gcda  -f $(NAME)
		rm *.gcno  -f $(NAME)
		rm *~ -f $(NAME)
		rm *.o -f $(NAME)

re:		fclean all

tests_run:
		make -C ./tests/
		./tests/units
