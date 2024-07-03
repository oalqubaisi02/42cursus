# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 17:08:29 by oalqubai          #+#    #+#              #
#    Updated: 2024/07/03 19:58:15 by oalqubai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

CLIENT = client.c minitalk_utils.c

SERVER = server.c minitalk_utils.c

CLIENT_BONUS = client_bonus.c minitalk_utils_bonus.c

SERVER_BONUS = server_bonus.c minitalk_utils_bonus.c

SOURCES = client.c server.c minitalk_utils.c

SOURCES_BONUS = client_bonus.c server_bonus.c minitalk_utils_bonus.c

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CLIENT_NAME = client

SERVER_NAME = server

CLIENT_NAME_BONUS = client_bonus

SERVER_NAME_BONUS = server_bonus

all:  $(CLIENT_NAME) $(SERVER_NAME)

$(SERVER_NAME) : $(OBJECTS)
	$(CC) $(FLAGS) $(SERVER) -o $(SERVER_NAME)

$(CLIENT_NAME) : $(OBJECTS)
	$(CC) $(FLAGS) $(CLIENT) -o $(CLIENT_NAME)

$(SERVER_NAME_BONUS) : $(OBJECTS_BONUS)
	$(CC) $(FLAGS) $(SERVER_BONUS) -o $(SERVER_NAME_BONUS)

$(CLIENT_NAME_BONUS) : $(OBJECTS_BONUS)
	$(CC) $(FLAGS) $(CLIENT_BONUS) -o $(CLIENT_NAME_BONUS)

bonus: $(CLIENT_NAME_BONUS) $(SERVER_NAME_BONUS)

clean:
	$(RM) server.o client.o minitalk_utils.o server_bonus.o client_bonus.o minitalk_utils_bonus.o 

fclean: clean
	$(RM) server client server_bonus client_bonus

re: fclean all bonus
