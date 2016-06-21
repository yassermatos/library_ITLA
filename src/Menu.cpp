/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::show()

{
    int option;
	do
	{
    cout << "\n\t Bienvenido A BiblioTKOnline \n" << endl;
	cout << "1- Listar Libros" << endl;
	cout << "2- Insertar Libro" << endl;
	cout << "3- Solicitar ultimo libro de la pila" << endl;
	cout << "4- Buscar libro por categoria" << endl;
	cout << "5- Salir \n" << endl;
	cout << "Elija la opcion deseada";
		cin >> option;
		if(validate(option))
		{
					action(option);
		}
	} while (option != 5);
	//TODO: Implement this method.

}
void Menu::pushBook()
{
	string nombre;
	string autor;
	string editorial;
	string pDate;
	string categoria;

	Element* book;
	Stack* stack;

	cout << "Nombre del Tipo de libro: ";
	cin >> nombre;
	cout << "\n Autor del libro: ";
	cin >> autor;
	cout << "\n Editorial del libro: ";
	cin >> editorial;
	cout << "\n Fecha de publicacion: ";
	cin >> pDate;
	cout << "Categoria : ";
	cin >> categoria;

	book ->_nombre = nombre;
	book ->_autor = autor;
	book->_editorial = editorial;
	book ->_pDate = pDate;
	book ->_categoria = categoria;

	stack->push(book);
	cout << "Libro anadido con exito!" << endl;

}

void Menu::popBook()
{
	Stack* stack;

	stack->pop();
	cout << "Libro completado." << endl;

}

void Menu::action(int option)
{
	switch (option)
	{
		case 1:
		{
			listBook();
		}
		case 2:
		{
			pushBook();
		}
		case 3:
		{
			popBook();
		}
		case 4:
		{
			findBook();
		}
		case 5:
		{
			cout << "Gracias por utilizar el Software" << endl;
		}
	}
}

bool Menu::validate(int option)
{
	if(option >= 1 && option <= 5)
	{
		return true;
	}else
	{
		cout << "Eliga una opcion del 1 al 5"<< endl;
		return false;
	}
}

Menu::Menu()
{

}
