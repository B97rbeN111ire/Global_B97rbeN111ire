# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/07 00:01:34 by thugueno          #+#    #+#              #
#    Updated: 2018/09/07 00:11:06 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

touch -A -000001 -a bomb.txt | stat bomb.txt | tr " " "@" | cut -d@ -f 12
