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
                 :_nombre(nombre),
                  _autor (autor),
                  _editorial(editorial),
                  _pDate(pDate),
                  _categoria(categoria),
                  _next(NULL)
{
}
