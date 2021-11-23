# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 21:04:12 by jaewoo            #+#    #+#              #
#    Updated: 2021/11/22 23:58:57 by jaewoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar
ARFLAGS = crv
CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a

INCLUDES_DIR = ./includes
INCLUDES = ft.h

SRCS_DIR = ./srcs
SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c
OBJS = $(addprefix $(SRCS_DIR)/, $(SRCS:.c=.o))

all : $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(TARGET)

re : fclean all

$(TARGET) : $(addprefix $(INCLUDES_DIR)/, $(INCLUDES)) $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.c.o :
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $(<:.c=.o)
