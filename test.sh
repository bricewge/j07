# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/09 08:23:52 by bwaegene          #+#    #+#              #
#    Updated: 2016/07/09 08:52:36 by bwaegene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bold=$(tput bold)
normal=$(tput sgr0)

echo "${bold}Test the norm${normal}"
norminette -R CheckForbiddenSourceHeader ./ex0*/ft*
echo "${bold}Test the compilation${normal}"
find . -path ./git -prune -o -name '*.c' -print -exec gcc {} \;
