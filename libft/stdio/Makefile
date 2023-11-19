CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

OBJS = ft_putchar.o      \
		ft_puts.o        \
		ft_putstr.o      \
		ft_putchar_fd.o  \
	    ft_putendl_fd.o  \
	    ft_putnbr_fd.o    \
	    ft_putstr_fd.o

FINAL_OBJ = stdio.o

final: $(OBJS)
	ld -relocatable $(OBJS) -o $(FINAL_OBJ)
	$(MAKE) clean

ft_putchar.o: ft_putchar.c
	$(CC) $(CFLAGS) -c ft_putchar.c

ft_puts.o: ft_puts.c
	$(CC) $(CFLAGS) -c ft_puts.c

ft_putstr.o: ft_putstr.c
	$(CC) $(CFLAGS) -c ft_putstr.c

ft_putchar_fd.o: ft_putchar_fd.c
	$(CC) $(CFLAGS) -c ft_putchar_fd.c

ft_putendl_fd.o: ft_putendl_fd.c
	$(CC) $(CFLAGS) -c ft_putendl_fd.c

ft_putstr_fd.o: ft_putstr_fd.c
	$(CC) $(CFLAGS) -c ft_putstr_fd.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	$(CC) $(CFLAGS) -c ft_putnbr_fd.c

clean:
	@echo "(*) Removing extra files"
	rm $(OBJS)