/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_

class Menu
{
	private:
		void limpiarPantalla();
		bool validate(int option);
		void routeAction(int option);
		void getAllBooks();
		void newBook();
		void getLastBook();
		void getByCategory();
	public:
		void show();
		Menu();
};

#endif /* MENU_H_ */
