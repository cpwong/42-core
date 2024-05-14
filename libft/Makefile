# Project settings

LIB = libft.a
INC_FILE = ftlib.h
SRC_DIR = .
INC_DIR = .
ROOT_DIR = $(shell pwd)

# Compiler settings

CC = cc
CFLAGS += -Wall -Wextra -Werror -std=c99 -I $(INC_DIR)
AR = ar
ARFLAGS = cr

# Source and object files

FILES = ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp

# Expand each file with directory and extension, e.g. src/*.c

SOURCES = $(foreach file, $(FILES), $(SRC_DIR)/$(file).c)
OBJECTS = $(foreach file, $(FILES), $(SRC_DIR)/$(file).o)

# Default target

all: $(LIB)

# Build static library
#	$@ - Target $(OBJECTS)
#	$< - All prerequisites

$(LIB): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

# Compile source files into object files
#
# Dependencies:
# 	Any changes in *.c files or ft.h
#
# Automatic variables:
#	$@ - Target $(OBJECTS)
#	$< - First prerequisite

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/$(INC_FILE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Remove all *.o files with -force

clean:
	rm -f $(OBJECTS)

# Remove all *.o and libft.a files

fclean: clean
	rm -f $(LIB)

# Remove all *.o files and libft.a, then generate a new libft.a

re: fclean all
