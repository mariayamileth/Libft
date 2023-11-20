# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricont <maricont@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 12:41:41 by maricont          #+#    #+#              #
#    Updated: 2023/02/25 19:21:44 by maricont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_memchr.c ft_memset.c ft_bzero.c ft_calloc.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_atoi.c ft_memcmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

INCLUDE = -I ./
RM = rm -f
DEPS = $(SRCS:.c=.d)

DEPS_BONUS = $(SRCSBONUS:.c=.d)

%.o: %.c
	${CC} ${CFLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

bonus: $(OBJSBONUS)
	ar -rcs $(NAME) $(OBJSBONUS)
	
-include $(DEPS_BONUS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)
	$(RM) $(OBJSBONUS)
	$(RM) $(DEPS_BONUS)	

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
