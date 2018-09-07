# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 19:41:25 by thugueno          #+#    #+#              #
#    Updated: 2018/09/06 20:18:11 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/s

cat contacts_hard.txt | grep -i ^nicolas | grep -i "bauer" | grep -v "Bomber" | rev | tr "\t" "$" | cut -d$ -f 2 | rev | grep -v ".0.42"
