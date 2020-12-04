/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iromero- <iromero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 19:59:43 by iromero-          #+#    #+#             */
/*   Updated: 2020/10/19 18:35:17 by iromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

static size_t ft_strlen(std::string str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return (i);
}

static	void	title()
{
	std::cout << "─────────────────────────────────────────────────────────────────────────────────────────────────── " << std::endl;
	std::cout << "─██████████████─██████████████─██████████████─██████──────────██████─████████████───██████████████─ " << std::endl;
	std::cout << "─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░██████████──██░░██─██░░░░░░░░████─██░░░░░░░░░░██─ " << std::endl;
	std::cout << "─██░░██████░░██─██░░██████████─██░░██████████─██░░░░░░░░░░██──██░░██─██░░████░░░░██─██░░██████░░██─ " << std::endl;
	std::cout << "─██░░██──██░░██─██░░██─────────██░░██─────────██░░██████░░██──██░░██─██░░██──██░░██─██░░██──██░░██─ " << std::endl;
	std::cout << "─██░░██████░░██─██░░██─────────██░░██████████─██░░██──██░░██──██░░██─██░░██──██░░██─██░░██████░░██─ " << std::endl;
	std::cout << "─██░░░░░░░░░░██─██░░██──██████─██░░░░░░░░░░██─██░░██──██░░██──██░░██─██░░██──██░░██─██░░░░░░░░░░██─ " << std::endl;
	std::cout << "─██░░██████░░██─██░░██──██░░██─██░░██████████─██░░██──██░░██──██░░██─██░░██──██░░██─██░░██████░░██─ " << std::endl;
	std::cout << "─██░░██──██░░██─██░░██──██░░██─██░░██─────────██░░██──██░░██████░░██─██░░██──██░░██─██░░██──██░░██─ " << std::endl;
	std::cout << "─██░░██──██░░██─██░░██████░░██─██░░██████████─██░░██──██░░░░░░░░░░██─██░░████░░░░██─██░░██──██░░██─ " << std::endl;
	std::cout << "─██░░██──██░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░██──██████████░░██─██░░░░░░░░████─██░░██──██░░██─ " << std::endl;
	std::cout << "─██████──██████─██████████████─██████████████─██████──────────██████─████████████───██████──██████─ " << std::endl;
	std::cout << "─────────────────────────────────────────────────────────────────────────────────────────────────── " << std::endl;
	std::cout << "Esto es Agenda de espionaje, prueba los siguientes Comandos:\n - ADD | SEARCH | EXIT" << std::endl;
}

int ft_read_command()
{
	std::string entry;
	std::locale loc;
	std::cout << ":";

	std::getline(std::cin, entry);
	for (size_t i = 0; i < ft_strlen(entry); i++)
		entry[i]  = std::toupper(entry[i],loc);
	if (std::cin.eof())
		return (3);
	if (!entry.compare("ADD"))
		return (1);
	if (!entry.compare("SEARCH"))
		return (2);
	if (!entry.compare("EXIT"))
		return (3);
	return (0);
}

int ft_add(Contact *agenda)
{
	std::string entry;
    int i = 0;
	bool input = false;

    while (agenda[i].getFirstName() != "" && i < 8)
	{
        i++;
	}
	if (i == 8)
	{
		std::cout << "Ya sabes lo que dicen, si espias a más de 8...\n" ;
	}
	else
	{
		//Fisrtname
		while (!input)
		{
			std::cout << "Introduce su Nombre:";
			std::getline(std::cin, entry);
			if (entry != "")
				input = true;
		}
		input = false;
		agenda[i].setFirstName(entry);
		//LastName
		while (!input)
		{
			std::cout << "Introduce su Apellido:";
			std::getline(std::cin, entry);
			if (entry != "")
				input = true;
		}
		input = false;
		agenda[i].setLastName(entry);
		//NickName
		while (!input)
		{
			std::cout << "Introduce su Apodo:" ;
			std::getline(std::cin, entry);
			if (entry != "")
				input = true;
		}
		input = false;
		agenda[i].setNickname(entry);
		//Login
		std::cout << "Introduce su Login:" ;
		std::getline(std::cin, entry);
		agenda[i].setLogin(entry);
		//PostalAdress
		std::cout << "Introduce su Codigo Postal:" ;
		std::getline(std::cin, entry);
		agenda[i].setPostalAddress(entry);
		//EmailAddress
		std::cout << "Introduce su Email:" ;
		std::getline(std::cin, entry);
		agenda[i].setEmailAddress(entry);
		//PhoneNumber
		std::cout << "Introduce su Numero de telefono:" ;
		std::getline(std::cin, entry);
		agenda[i].setPhoneNumber(entry);
		//birthdate
		std::cout << "Introduce su Fecha de nacimiento:" ;
		std::getline(std::cin, entry);
		agenda[i].setBirthdayDate(entry);
		//FavoriteMeal
		std::cout << "Introduce su Comida Favorita:" ;
		std::getline(std::cin, entry);
		agenda[i].setLogin(entry);
		//UnderwearColor
		std::cout << "Introduce el color de su ropa interior:" ;
		std::getline(std::cin, entry);
		agenda[i].setUnderwearColor(entry);
		//DarkestSecret
		std::cout << "Introduce su secreto más oscuro:" ;
		std::getline(std::cin, entry);
		agenda[i].setDarkestSecret(entry);
	}
	return (0);
}

static void cleanOutput(const std::string src)
{
	std::string dest;
	size_t len = ft_strlen(src);
	size_t i = 0;

	if (len < 10)
	{
		while (10 - len > i)
		{
			std::cout << " ";
			i++;
		}
		std::cout << src + "|";
	}
	else
	{
		dest = src.substr(0,9);
		std::cout << dest + ".|";
	}
}

static bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

static void	ft_show(Contact *agenda, int i)
{
	std::cout << "Nombre: " <<  agenda[i].getFirstName();
	std::cout << "\nApellidos: " <<  agenda[i].getLastName();
	std::cout << "\nApodo: " <<  agenda[i].getNickname();
	std::cout << "\nLogin: " <<  agenda[i].getLogin();
	std::cout << "\nCodigo Postal: " <<  agenda[i].getPostalAddress();
	std::cout << "\nEmail: " <<  agenda[i].getEmailAdress();
	std::cout << "\nNumero de telefono: " <<  agenda[i].getPhoneNumber();
	std::cout << "\nCumpleaños: " <<  agenda[i].getBirthdayDate();
	std::cout << "\nComida Favorita: " <<  agenda[i].getFavoriteMeal();
	std::cout << "\nColor ropa interior: " <<  agenda[i].getUnderwearColor();
	std::cout << "\nSecreto Oscuro: " <<  agenda[i].getDarkestSecret() << "\n";
}

static int ft_search(Contact *agenda)
{
    int i = 0;
	std::string temp;
	bool entry = false;
	int x = 0; 
	
    while (agenda[i].getFirstName() != "" && i < 8)
	{
		std::cout <<   "        "<< i <<"|";
		cleanOutput(agenda[i].getFirstName());
		cleanOutput(agenda[i].getLastName());
		cleanOutput(agenda[i].getNickname());
		std::cout << "\n" ;
        i++;
	}
	if (agenda[0].getFirstName() != "")
	{
		while (!entry)
		{
			std::cout << "Introduce el indice para ver su secreto más oscuro:";
			std::getline(std::cin, temp);
			std::stringstream geek(temp); 
			geek >> x; 
			if (!is_number(temp) || agenda[x].getFirstName() == "")
				std::cout << "Introduzca un numero correcto\n";
			else
				entry = true;
		}
		ft_show(agenda, x);
	}
	return (0);
}

int main()
{
	int estado;
	Contact agenda[8];
	estado = 0;
	title();
	while(1)
	{
		if (estado == 0)
			estado = ft_read_command();
		if (estado == 1)
			estado = ft_add(agenda);
		if (estado == 2)
			estado = ft_search(agenda);
		if (estado == 3)
			break ;
	}
}
