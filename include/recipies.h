/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# ifndef _RECIPIES_
# define _RECIPIES_

typedef struct {
	char		*name;
	char		*ingridients;
	sfClock		*c;
	char		*order;
	char		expected[256];
	int		nb;
	sfSprite	*s;
	sfTexture	*t;
	int		time_out;
	int		price;
} recepies_t;

typedef struct {
	int	m;
	int	n;
	int	a;
	int	s;
	int	g;
	int	t;
	int	p;
	int	c;
	int	d;
	int	o;
	int	b;
	int	w;
	int	z;
	int	r;
	int	cook;
} indicate_t;
# endif // _RECIPIES__
