CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wno-implicit-function-declaration

FT_STDIO_PATH=stdio/
FT_CTYPE_PATH=ctype/
FT_MEMORY_PATH=memory/
FT_STRING_PATH=string/
FT_STDLIB_PATH=stdlib/

FINAL_OBJS = $(FT_STDIO_PATH)stdio.o   \
			 $(FT_CTYPE_PATH)ctype.o   \
			 $(FT_MEMORY_PATH)memory.o \
			 $(FT_STRING_PATH)string.o \
			 $(FT_STDLIB_PATH)stdlib.o \

final: $(FINAL_OBJS)
	ar rcs libft.a $(FINAL_OBJS)

all:
	cd $(FT_STDIO_PATH) && $(MAKE)
	cd $(FT_CTYPE_PATH) && $(MAKE)
	cd $(FT_MEMORY_PATH) && $(MAKE)
	cd $(FT_STRING_PATH) && $(MAKE)
	cd $(FT_STDLIB_PATH) && $(MAKE)

clean:
	@echo "(*) Removing final object files"
	rm $(FINAL_OBJS)
