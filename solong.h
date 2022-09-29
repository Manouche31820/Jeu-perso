#ifndef SOLONG_H
# define SOLONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>
# include <mlx.h>
# include "../libft/libft.h"
# include <stdio.h>

# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080
# define UP 13
# define LEFT 0
# define DOWN 1
# define RIGHT 2
# define KEY_PRESS 2
# define KEY_RELEASE 3

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	*map[2000];
	int     x_map;
	int     y_map;
	int     pos_x;
	int     pos_y;
	int     velocity_y;
	int     gravity_y;
	int     velocity_x;
	int     gravity_x;
	int     velocity_xl;
	int     gravity_xl;
	int 	key_up;
	int     key_left;
	int     key_right;
	int 	case_x;
	int 	case_y;
	int 	taille;
	t_img	*img_mur[1];
	t_img	*img_font[1];
	t_img	*img_char[18];
	t_img   *img_flor[1];
	t_img   *img_under[1];
	t_img   *img_water[18];
	int     i;
	int 	j;
	int     z;
	int 	q;
	
}	t_mlx;

char	*ft_non(char	*str);
void	ft_error(void);
int	ft_mouvement_p(int key, t_mlx *param);
int	ft_mouvement_r(int key, t_mlx *param);
int	ft_draw_map(t_mlx *param);
void 	ft_move(t_mlx *param);

#endif