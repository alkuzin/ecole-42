CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

SRC_PATH=libft/
FT_STDIO_PATH=stdio/

final: ft_putchar.o ft_puts.o ft_putstr.o
	ar rcs libft.a ft_putchar.o ft_puts.o ft_putstr.o

ft_putchar.o: $(FT_STDIO_PATH)ft_putchar.c
	$(CC) $(CFLAGS) -c $(FT_STDIO_PATH)ft_putchar.c

ft_puts.o: $(FT_STDIO_PATH)ft_puts.c
	$(CC) $(CFLAGS) -c $(FT_STDIO_PATH)ft_puts.c

ft_putstr.o: $(FT_STDIO_PATH)ft_putstr.c
	$(CC) $(CFLAGS) -c $(FT_STDIO_PATH)ft_putstr.c

clean:
	@echo "(*) Removing extra files"
	rm ft_putchar.o ft_puts.o ft_putstr.o
