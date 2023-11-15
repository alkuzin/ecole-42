CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

OBJS = ft_isalpha.o ft_isdigit.o ft_isprint.o ft_toupper.o ft_isalnum.o ft_isascii.o ft_isupper.o ft_islower.o  ft_tolower.o

FINAL_OBJ = ctype.o

final: $(OBJS)
	ld -relocatable $(OBJS) -o $(FINAL_OBJ)
	$(MAKE) clean

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c ft_isprint.c

ft_isupper.o: ft_isupper.c
	$(CC) $(CFLAGS) -c ft_isupper.c

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c ft_toupper.c

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c ft_isascii.c

ft_islower.o: ft_islower.c
	$(CC) $(CFLAGS) -c ft_islower.c

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c ft_tolower.c

clean:
	@echo "(*) Removing extra files"
	rm $(OBJS)