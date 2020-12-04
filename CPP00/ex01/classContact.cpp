/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iromero- <iromero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:46:33 by iromero-          #+#    #+#             */
/*   Updated: 2020/10/16 20:46:40 by iromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

//SETTERS -----------------------------------------------------------------

void	Contact::setFirstName(const std::string &first_name)
{ 
    this->_first_name = first_name; 
}

void	Contact::setLastName(const std::string &last_name)
{ 
    this->_last_name = last_name; 
}

void	Contact::setNickname(const std::string &nickname)
{ 
    this->_nickname = nickname; 
}

void	Contact::setLogin(const std::string &login)
{ 
    this->_login = login; 
}

void	Contact::setPostalAddress(const std::string &postal_address)
{ 
    this->_postal_address = postal_address; 
}

void	Contact::setEmailAddress(const std::string &email_address)
{ 
    this->_email_address = email_address; 
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{ 
    this->_phone_number = phone_number; 
}

void	Contact::setBirthdayDate(const std::string &birthday_date)
{ 
    this->_birthday_date = birthday_date; 
}

void	Contact::setFavoriteMeal(const std::string &favorite_meal)
{ 
    this->_favorite_meal = favorite_meal; 
}

void	Contact::setUnderwearColor(const std::string &underwear_color)
{ 
    this->_underwear_color = underwear_color; 
}

void	Contact::setDarkestSecret(const std::string &darkest_secret)
{ 
    this->_darkest_secret = darkest_secret; 
}

//GETTERS -----------------------------------------------------------------

const std::string    &Contact::getFirstName()
{
     return (this->_first_name); 
}

const std::string    &Contact::getLastName()
{
     return (this->_last_name); 
}

const std::string    &Contact::getNickname()
{
     return (this->_nickname); 
}

const std::string    &Contact::getLogin()
{
     return (this->_login); 
}

const std::string    &Contact::getPostalAddress()
{
     return (this->_postal_address); 
}

const std::string    &Contact::getEmailAdress()
{
     return (this->_email_address); 
}

const std::string    &Contact::getPhoneNumber()
{
     return (this->_phone_number); 
}

const std::string    &Contact::getBirthdayDate()
{
     return (this->_birthday_date); 
}

const std::string    &Contact::getFavoriteMeal()
{
     return (this->_favorite_meal); 
}

const std::string    &Contact::getUnderwearColor()
{
     return (this->_underwear_color); 
}

const std::string    &Contact::getDarkestSecret()
{
     return (this->_darkest_secret); 
}



Contact::Contact() {}

Contact::Contact(const Contact& copy)
:
	_first_name(copy._first_name),
	_last_name(copy._last_name),
	_nickname(copy._last_name),
	_login(copy._login),
	_postal_address(copy._postal_address),
	_email_address(copy._email_address),
	_phone_number(copy._phone_number),
	_birthday_date(copy._birthday_date),
	_favorite_meal(copy._favorite_meal),
	_underwear_color(copy._underwear_color),
	_darkest_secret(copy._darkest_secret)
{}

//Destructor
Contact::~Contact() {}

Contact & Contact::operator=(const Contact& op)
{
	if (this == &op)
		return (*this); 
	this->_first_name = op._first_name;
	this->_last_name = op._last_name;
	this->_nickname = op._nickname;
	this->_login = op._login;
	this->_postal_address = op._postal_address;
	this->_email_address = op._email_address;
	this->_phone_number = op._phone_number;
	this->_birthday_date = op._birthday_date;
	this->_favorite_meal = op._favorite_meal;
	this->_underwear_color = op._underwear_color;
	this->_darkest_secret = op._darkest_secret;
	return (*this);
}