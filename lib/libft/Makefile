# @author   clemedon (Clément Vidon)
####################################### BEG_4 ####

NAME		:= libft.a

#------------------------------------------------#
#   INGREDIENTS                                  #
#------------------------------------------------#
# SRC_DIR   source directory
# SRCS      source files
#
# BUILD_DIR object directory
# OBJS      object files
# DEPS      dependency files
#
# CC        compiler
# CFLAGS    compiler flags
# CPPFLAGS  preprocessor flags

SRC_DIR     := src
SRCS        := \
	dlst/ft_dlstadd_back.c \
	dlst/ft_dlstadd_front.c \
	dlst/ft_dlstclear.c \
	dlst/ft_dlstdelfirst.c \
	dlst/ft_dlstdelone.c \
	dlst/ft_dlstiter.c \
	dlst/ft_dlstlast.c \
	dlst/ft_dlstmap.c \
	dlst/ft_dlstnew.c \
	dlst/ft_dlstsize.c \
	lst/ft_lstadd_back.c \
	lst/ft_lstadd_front.c \
	lst/ft_lstclear.c \
	lst/ft_lstdelfirst.c \
	lst/ft_lstdelone.c \
	lst/ft_lstiter.c \
	lst/ft_lstlast.c \
	lst/ft_lstmap.c \
	lst/ft_lstnew.c \
	lst/ft_lstsize.c \
	is/ft_isalnum.c \
	is/ft_isalpha.c \
	is/ft_isascii.c \
	is/ft_isdigit.c \
	is/ft_isprint.c \
	is/ft_isspace.c \
	int/ft_abs.c \
	int/ft_max.c \
	int/ft_min.c \
	int/ft_numlen.c \
	mem/ft_bzero.c \
	mem/ft_calloc.c \
	mem/ft_memchr.c \
	mem/ft_memcmp.c \
	mem/ft_memcpy.c \
	mem/ft_memmove.c \
	mem/ft_memset.c \
	mem/ft_free.c \
	mem/ft_freetab.c \
	mem/ft_freetab_size.c \
	io/ft_get_next_line.c \
	io/ft_putchar_fd.c \
	io/ft_putendl_fd.c \
	io/ft_putnbr_fd.c \
	io/ft_putstr_fd.c \
	str/ft_split.c \
	str/ft_strchr.c \
	str/ft_strcmp.c \
	str/ft_strdup.c \
	str/ft_striteri.c \
	str/ft_strjoin.c \
	str/ft_strjoin_free.c \
	str/ft_strjoin_free_s1.c \
	str/ft_strjoin_free_s2.c \
	str/ft_strlcat.c \
	str/ft_strlcpy.c \
	str/ft_strlen.c \
	str/ft_strmapi.c \
	str/ft_strncmp.c \
	str/ft_strnstr.c \
	str/ft_strrchr.c \
	str/ft_strtrim.c \
	str/ft_substr.c \
	to/ft_atoi.c \
	to/ft_atol.c \
	to/ft_itoa.c \
	to/ft_tolower.c \
	to/ft_toupper.c
SRCS        := $(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR   := .build
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        := $(OBJS:.o=.d)

CC          := clang
CFLAGS      := -Wall -Wextra -Werror
CPPFLAGS    := -MMD -MP -I include
AR          := ar
ARFLAGS     := -r -c -s

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM        force remove
# MAKE      quietly make
# DIR_DUP   duplicate directory tree
#
# CRUSH     used to print on the same line
# ECHO      echo statement
# R         red color output
# G         green color output
# END       reset color output to default

RM          := rm -f
MAKE        := $(MAKE) --jobs --no-print-directory
DIR_DUP     = mkdir -p $(@D)

CRUSH		:= \r\033[K
ECHO		:= echo -n "$(CRUSH)$(NAME): "
R			:= $(shell tput setaf 1)
G			:= $(shell tput setaf 2)
END			:= $(shell tput sgr0)

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all       default goal
# $(NAME)   link .o -> library
# %.o       compilation .c -> .o
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(ECHO)"$(G)created$(END) $(NAME)\n"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(ECHO)"$(G)created$(END) $@"

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

asan: CFLAGS += -O0 -g3
asan: CFLAGS += -fsanitize=address,undefined,signed-integer-overflow
asan: CFLAGS += -fno-optimize-sibling-calls
asan: all

ansi: CFLAGS += -W -pedantic -std=c89
ansi: all

every: CFLAGS += -Weverything
every: all

norm:
	norminette | grep -v "OK" || true

update:
	git stash
	git pull
	git submodule update --init
	git stash pop

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#

.PHONY: clean fclean re norm update
.SILENT:

####################################### END_4 ####
