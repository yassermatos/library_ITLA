/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"
Element::Element(std::string nombre,
                 std::string autor,
                 std::string editorial,
                 std::string pDate,
                 std::string categoria)
                 :_name(nombre),
                  _author (autor),
                  _editorial(editorial),
                  _pDate(pDate),
                  _category(categoria),
                  _next(NULL)
{
}
