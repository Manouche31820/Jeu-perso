CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
IFLAGS = -I /usr/local/include ./libft/libft.a \
			-L /usr/local/lib/ -lmlx -framework OpenGL -framework AppKit
OBJ_DIR = obj/

SOLONG_OBJ =  solong.o

SOLONG_PREFIXE = $(addprefix  $(OBJ_DIR),$(SOLONG_OBJ))

NAME_SOLONG = solong

all : mkdir_obj build_libft $(NAME_SOLONG)

bonus : all

$(NAME_SOLONG) : $(SOLONG_PREFIXE)
	$(CC) -o $@ $^ $(IFLAGS) $(CFLAGS) 

$(OBJ_DIR)%.o : $(SOLONG_DIR)%.c
	$(CC) -o $@ -c $< $(CFLAGS)

build_libft:
	make -C ./libft all

mkdir_obj :
	mkdir -p obj

.PHONY : clean

fclean : clean
	make -C ./libft fclean
	rm -f $(NAME_SRV)

clean:
	rm -f $(OBJ_DIR)*.o

re : fclean all