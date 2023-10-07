# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 22:40:36 by tsaguanw          #+#    #+#              #
#    Updated: 2023/10/07 09:11:34 by tsaguanw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_memmove.c ft_strlen.c  ft_strrchr.c \
					ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c ft_calloc.c ft_strdup.c \
					ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_split.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c
					
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
				
fclean:			clean
				$(RM) $(NAME)

re:				fclean all
