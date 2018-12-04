#pragma once
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <conio.h>
#include <sstream>
#include <stdlib.h>
#include "List.h"
#include "Stack.h"
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h> 
#include <locale.h>
using namespace std;
class Person {
protected:
	char name[20];
	char surname[20];
	int age;
public:
	Person() {
		//this->name = nullptr;
		//this->surname = nullptr;
		this->age = NULL;
	}
	~Person() {
		//delete name;
		//delete surname;
	}

	//virtual void setMainPrsnInfo() = 0;
	//virtual void getMainPrsnInfo() = 0;
};

//класс заказов
//заказ будет инкапсулирвоан в клиента?????

//класс  лиент
class Client :public Person{
protected:
	class Order {
	protected:
		char **orderName;
		int *orderCode;
		int *clientCode;
		int *OrderCost;
		int *DeliveryCost;
		//int dateOfOrder;
	public:
		Order() {
			this->orderName = nullptr;
			this->orderCode = NULL;
			this->clientCode = NULL;
			this->OrderCost = NULL;
			this->DeliveryCost = NULL;
		}
		~Order() {
			delete orderName;
		}
		void setOrderInf();
		void getOrderInf();
		/*void AddClientOrder();*/
	};
	char street[20];
	int houseNumber;
	int flat;
	char key[20];
	int houseNumberFind;

public:
	void sort(Client &obj, Client &obj1);
	int selectFiltrCriteria();
	void edit(int choice);
	void filtr(int choice,int a, int minAge, int maxAge);
	int selectEditCriteria();
	Client() {
		/*this->street = nullptr;*/
		this->houseNumber = NULL;
		this->flat = NULL;
	}
	~Client() {/*delete street;*/}
	void setMainClientInfo();
	void getMainClientInfo();
	//void save(Client &obj);
	//void download(Client &obj);
	void print();
	void sort(bool a);
	int selectSearchCriteria();
	void search(int i, char *input);
};

class Admin {
protected:
	char *password;
	char *login;
	int root;
public:
	void adminLogIn();
	void encryption();
	void set() {
		cout << "¬ведите логин: ";
		login = new char[30];
		cin >> this->login;
		cout << "¬ведите пароль: ";
		password = new char[30];
		cin >> this->password;
		cout << "¬ведите права: ";
		cin >> this->root;
	}
	void print() {
		cout << this->login << endl;
		cout << this->password << endl;
		cout << this->root << endl;
	}
	Admin() {
		this->root = 1;
		this->login = NULL;
		this->password = NULL;
	}
	int compare(char *log, char *pas) {
		if (strcmp(this->login, log) == 0 && strcmp(this->password, pas) == 0) {
			return this->root;
		}
		else cout << "Kek";
		return 0;
	}
};