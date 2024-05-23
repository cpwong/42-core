# Project settings

LIB = libft.a
MAIN = main.c
TEST = test
TEST_DIR = ./tests
INC_FILE = ftlib.h
INC_DIR = ./include
SRC_DIR = .
INC_DIR = .
ROOT_DIR = $(shell pwd)
OBJ_DIR = ./obj

# Compiler settings

CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99
AR = ar
ARFLAGS = cr

# Source and object files

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
	ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strncmp \
	ft_strchr ft_strrchr ft_memchr ft_memcmp ft_strnstr \
	ft_atoi

# Expand each file with directory and extension, e.g. src/*.c

SOURCES = $(foreach file, $(FILES), $(SRC_DIR)/$(file).c)
OBJECTS = $(foreach file, $(FILES), $(OBJ_DIR)/$(file).o)

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

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Remove all *.o files with -force

clean:
	rm -rf $(OBJ_DIR)

# Remove all *.o and libft.a files

fclean: clean
	rm -f $(LIB)

# Remove all *.o files and libft.a, then generate a new libft.a

re: fclean all

# Additional recipes

test: all
	$(CC) $(MAIN) -o $(TEST) $(LIB)

test_%: $(SRC_DIR)/%.c $(LIB)
	mkdir -p $(TEST_DIR)
	$(CC) $(TEST_DIR)/test_$< -o $@ $(LIB)

print_obj:
	@echo $(OBJ_DIR)
	@echo $(OBJECTS)