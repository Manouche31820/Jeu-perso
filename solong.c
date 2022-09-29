#include "solong.h"

void	ft_sleep(int timer)
{
	timer *= 1000;
	while (timer)
		timer --;
}

void	ft_limit_map(t_mlx *param)
{
	if (param->pos_x > 1840)
		param->pos_x = 1840;
	if (param->pos_x < -30)
		param->pos_x = -30;
}
void	ft_init_char(t_mlx *param)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while(param->map[a]!= NULL)
	{
		while (param->map[a][b] != '\0')
		{
			if (param->map[a][b] == '4')
			{
				param->pos_x = b * 80;
				param->pos_y = a * 80;
			}
			b++;
		}
		b = 0;
		a++;
	}
	printf("pos_x[%d], pos_y[%d]\n", param->pos_x, param->pos_y);
}

void	ft_collision(t_mlx *param)
{
	int x;
	int y;
	int incr_x;
	int incr_y;
	int taille_char;

	taille_char = param->taille;
	incr_y = param->velocity_y + 1;
	incr_x = param->velocity_x + 1;
	x = param->pos_x;
	y = param->pos_y;

	if (param->key_up == 1 || param->key_up == 1)
	{
		
		while(--incr_y)
		{
			if(param->map[param->pos_x][param->pos_y])
		}
	}

void 	ft_move(t_mlx *param)
{
	param->pos_y -= param->velocity_y;
	param->velocity_y -= param->gravity_y;
	param->pos_x += param->velocity_x;
	param->velocity_x -= param->gravity_x;
	if (param->key_left == 1 || param->key_right == 1 || param->key_up == 1)
	{
		param->i ++;
		if (param->i == 17)
			(param->i = 0);
	}
	if (param->velocity_x < 0)
		param->velocity_x = 0;
	if (param->key_up == 1)
	{
		//if(param->map[param->case_y + 1][param->case_x] == '2')	
			param->velocity_y = 20;
	}
	if (param->key_left == 1)
		param->velocity_x = -5;
	if (param->key_right == 1)
		param->velocity_x = 5;
	//ft_collision(param);
//	printf("x :[%d],y :[%d]\n", param->pos_x, param->pos_y);
}

void	ft_set_img(t_mlx *param)
{
	int x;
	int y;

	param->img_font[0] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/fond.xpm", &x, &y);
	param->img_flor[0] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/flor.xpm", &x, &y);
	param->img_under[0] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/under.xpm", &x, &y);
	param->img_water[0] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 1.xpm", &x, &y);
	param->img_water[1] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 2.xpm", &x, &y);
	param->img_water[2] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 3.xpm", &x, &y);
	param->img_water[3] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 4.xpm", &x, &y);
	param->img_water[4] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 5.xpm", &x, &y);
	param->img_water[5] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 6.xpm", &x, &y);
	param->img_water[6] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 7.xpm", &x, &y);
	param->img_water[7] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 8.xpm", &x, &y);
	param->img_water[8] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 9.xpm", &x, &y);
	param->img_water[9] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 11.xpm", &x, &y);
	param->img_water[10] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 12.xpm", &x, &y);
	param->img_water[11] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 13.xpm", &x, &y);
	param->img_water[12] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 14.xpm", &x, &y);
	param->img_water[13] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 15.xpm", &x, &y);
	param->img_water[14] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 16.xpm", &x, &y);
	param->img_water[15] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/water/image 17.xpm", &x, &y);
	if (param->img_font[0] == NULL)
	{
		exit(printf("error when opening image\n"));
	}
	param->img_char[0] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/1.xpm", &x, &y);
	param->img_char[1] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/2.xpm", &x, &y);
	param->img_char[2] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/3.xpm", &x, &y);
	param->img_char[3] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/4.xpm", &x, &y);
	param->img_char[4] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/5.xpm", &x, &y);
	param->img_char[5] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/6.xpm", &x, &y);
	param->img_char[6] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/7.xpm", &x, &y);
	param->img_char[7] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/8.xpm", &x, &y);
	param->img_char[8] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/9.xpm", &x, &y);
	param->img_char[9] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/10.xpm", &x, &y);
	param->img_char[10] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/11.xpm", &x, &y);
	param->img_char[11] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/12.xpm", &x, &y);
	param->img_char[12] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/13.xpm", &x, &y);
	param->img_char[13] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/14.xpm", &x, &y);
	param->img_char[14] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/15.xpm", &x, &y);
	param->img_char[15] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/16.xpm", &x, &y);
	param->img_char[16] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/17.xpm", &x, &y);
	param->img_char[17] = mlx_xpm_file_to_image(param->mlx_ptr, "../game/char/18.xpm", &x, &y);

	if (param->img_char[0] == NULL)
	{
		exit(printf("error when opening image\n"));
	}
}

char	*ft_non(char	*s1)
{
	int	i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == '\n')
			s1[i] = '\0';
		i++;
	}
	return (s1);
}

void	ft_set_map(t_mlx *param)
{
	int fd;
	int y;

	y = 0;
	fd = open("../game/map.ber", O_RDONLY);
	param->map[y] = ft_non(get_next_line(fd));
	while (param->map[y++] != NULL)
		param->map[y] = ft_non(get_next_line(fd));
	for (int i = 0; param->map[i] != NULL; i++)
		printf("[%s]\n", param->map[i]);
}

void	ft_solong(t_mlx *param)
{
	ft_set_img(param);
	ft_set_map(param);
	ft_init_char(param);
}
void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit (1);
}

int	ft_draw_map(t_mlx *param)
{
	mlx_clear_window(param->mlx_ptr, param->win_ptr);
	mlx_put_image_to_window(param->mlx_ptr, param->win_ptr, param->img_font[0], 0, 0);
	ft_move(param);
	ft_limit_map(param);
	int a;
	int b;

	a = 0;
	b = 0;
	
	// ft_printf("%c", param->map[0][0]);
	param->x_map = 0;
	param->y_map = 0;
	while(param->map[a]!= NULL)
	{
		while (param->map[a][b] != '\0')
		{
			if (param->map[a][b] == '2')
			{
				mlx_put_image_to_window(param->mlx_ptr, param->win_ptr, param->img_flor[0], param->x_map, param->y_map);
				param->x_map += 80;
			}

			if (param->map[a][b] == '5')
			{
				mlx_put_image_to_window(param->mlx_ptr, param->win_ptr, param->img_flor[0], param->x_map - 100 + (param->z -= 10 * param->q), param->y_map);
				if (param->z < 300 || param->z > 650)
					param->q *= -1;
				param->x_map += 80;
			}
			if (param->map[a][b] == '0')
				param->x_map += 80;
			if (param->map[a][b] == '4')
			{
				mlx_put_image_to_window(param->mlx_ptr, param->win_ptr, param->img_char[param->i], param->pos_x, param->pos_y);
				param->x_map += 80;
			}

			if (param->map[a][b] == '3')
			{
				param->j++;
				mlx_put_image_to_window(param->mlx_ptr, param->win_ptr, param->img_water[param->j], param->x_map, param->y_map);
				if (param->j == 15)
					param->j = 0;
				param->x_map += 80;
			}
			b++;
		}
		a++;
		b = 0;
		param->y_map += 80;
		param->x_map = 0;
	}
	return (0);
}

int	ft_mouvement_p(int key, t_mlx *param)
{
	if (key == 53)
	{
		mlx_destroy_window(param->mlx_ptr, param->win_ptr);
		free(param);
		exit(1);
	}
	if (key == UP)
		param->key_up = 1;
	if (key == LEFT)
		param->key_left = 1;
	if (key == RIGHT)
		param->key_right = 1;
	return(0);
}

int	ft_mouvement_r(int key, t_mlx *param)
{
	if (key == UP)
		param->key_up = 0;
	if (key == LEFT)
		param->key_left = 0;
	if (key == RIGHT)
		param->key_right = 0;
	return(0);
}

int main()
{
	t_mlx	*all;
 
	all = malloc(sizeof(*all));
	if (all == NULL)
		ft_error();
	all->key_up = 0;
	all->key_left = 0;
	all->key_right = 0;
	all->gravity_x = 1;
	all->gravity_y = 1;
	all->taille = 0;
	all->z = 300;
	all->q = 1;
	all->mlx_ptr = mlx_init();
	all->win_ptr = mlx_new_window(all->mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "mlx 42");
	ft_solong(all);
	mlx_hook(all->win_ptr, KEY_PRESS, 0, ft_mouvement_p, all);
	mlx_hook(all->win_ptr, KEY_RELEASE, 0, ft_mouvement_r, all);
	mlx_loop_hook(all->mlx_ptr, ft_draw_map, all);
	mlx_loop(all->mlx_ptr);

	printf("j'ai finit\n");
	system("leaks solong");
	return (0);
}