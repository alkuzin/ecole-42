CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

OBJS = ft_atoi.o   \
	   ft_range.o  \
	   ft_calloc.o

FINAL_OBJ = stdlib.o

final: $(OBJS)
	ld -relocatable $(OBJS) -o $(FINAL_OBJ)
	$(MAKE) clean

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c ft_atoi.c

ft_range.o: ft_range.c
	$(CC) $(CFLAGS) -c ft_range.c

ft_calloc.o: ft_calloc.c
	$(CC) $(CFLAGS) -c ft_calloc.c

clean:
	@echo "(*) Removing extra files"
	rm $(OBJS)
