# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/07 12:52:28 by thugueno          #+#    #+#              #
#    Updated: 2018/09/07 13:04:10 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

if ifconfig | grep "inet" | grep -v "inet6" | wc -l > 0
then
	ifconfig | grep "inet" | grep -v "inet6" | tr " " "@" | cut -d@ -f 2
else
	echo "I am lost!"
fi
