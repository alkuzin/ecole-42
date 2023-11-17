CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

OBJS = ft_strchr.c   \
	   ft_strlcat.c  \
	   ft_strlen.c   \
	   ft_strnstr.c  \
	   ft_strlcpy.c  \
	   ft_strncmp.c  \
	   ft_strrchr.c	 \

FINAL_OBJ = string.o

final: $(OBJS)
	ld -relocatable $(OBJS) -o $(FINAL_OBJ)
	$(MAKE) clean

ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) -c ft_strchr.c

ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) -c ft_strlcat.c
	
ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c
	
ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) -c ft_strnstr.c

ft_strlcpy.o: ft_strlcpy.c
	$(CC) $(CFLAGS) -c ft_strlcpy.c
	
ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) -c ft_strncmp.c

ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) -c ft_strrchr.c

clean:
	@echo "(*) Removing extra files"
	rm $(OBJS)
