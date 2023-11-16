CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

OBJS = ft_bzero.o     \
	   ft_memccpy.o   \
	   ft_memchr.o    \
	   ft_memcpy.o    \
	   ft_memmove.o   \
	   ft_memset.o    \

FINAL_OBJ = memory.o

final: $(OBJS)
	ld -relocatable $(OBJS) -o $(FINAL_OBJ)
	$(MAKE) clean

ft_bzero.o: ft_bzero.o
	$(CC) $(CFLAGS) -c ft_bzero.c

ft_memccpy.o: ft_memccpy.c
	$(CC) $(CFLAGS) -c ft_memccpy.c

ft_memchr.o: ft_memchr.c
	$(CC) $(CFLAGS) -c ft_memchr.c

ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) -c ft_memcpy.c

ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) -c ft_memmove.c

ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) -c ft_memset.c

clean:
	@echo "(*) Removing extra files"
	rm $(OBJS)
