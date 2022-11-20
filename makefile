# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: randolph <just_a_fan_of_42>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 03:44:07 by randolph          #+#    #+#              #
#    Updated: 2022/11/20 03:44:09 by randolph         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Work on makefile later:
.PHONY: all

all: hello world

hello world: foo foo foo bar bar

foo:
	@echo "Hello foo"

bar:
	@echo "Hello Bar"