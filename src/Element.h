/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	private:
		std::string _nombre;
		std::string _autor;
		std::string _editorial;
		std::string _pDate;
		std::string _categoria;
		Element* _next;

	public:
		Element(std::string nombre, std::string autor, std::string editorial, std::string pDate, std::string categoria);
		std::string getTitle(){return _nombre;}
		std::string getAuthor(){return _autor;}
		std::string getPublisher(){return _editorial;}
		std::string getDate(){return _pDate;}
		std::string getCategory(){return _categoria;}
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */
