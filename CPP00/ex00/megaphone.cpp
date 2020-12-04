/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iromero- <iromero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:17:07 by iromero-          #+#    #+#             */
/*   Updated: 2020/10/16 18:58:18 by iromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	std::locale loc;
	if (argc > 1)
	{
		for (size_t i = 1; i < (size_t)argc; i++)
			for (size_t j = 0; j < std::strlen(argv[i]); j++)
				std::cout << std::toupper(argv[i][j],loc);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}