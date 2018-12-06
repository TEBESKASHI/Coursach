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
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h> 
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
class Product {
protected:
	friend class Order;
	char ProductName[30];
	int ProductCode;
	int ProductCost;
	//int dateOfProduct;
public:
	Product() {
		this->ProductCode = NULL;
		this->ProductCost = NULL;
	}
	virtual void add();
	virtual void print();
	virtual int selectSearchCriteria();
	virtual void search(int choice, char *input);
	virtual int selectEditCriteria();
	virtual void edit(int choice);
	/*void AddClientProduct();*/
};
//класс Клиент
class Client :public Person{
protected:
	friend class Order;
	char street[20];
	int houseNumber;
	int flat;
public:
	virtual void sort(Client &obj, Client &obj1);
	virtual int selectFiltrCriteria();
	virtual void edit(int choice);
	virtual void filtr(int choice,int a, int minAge, int maxAge);
	virtual int selectEditCriteria();
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
	virtual void print();
	virtual int selectSearchCriteria();
	virtual void search(int i, char *input);
};
class Courier :public Person {
protected:
	friend class Order;
	int assigned;
	float fuelcost;
	int experience;
public:
	Courier() {
		this->experience = NULL;
		this->fuelcost = 1.21;
		this->assigned = 0;
	}
	void setInfo();
	void print();
	int selectSearchCriteria();
	void search(int choice, char *input);
	int selectEditCriteria();
	void edit(int choice);
};
class Order :public Client, public Product {
protected:
	int clientCode;
	float DeliveryCost;
	char timeF[30];
	time_t seconds;
	int status;
public:
	Order() {
		this->status = NULL;
		this->clientCode = NULL;
		this->DeliveryCost = NULL;
	}
	int profit();
	void profit(int profit);
	void set(Client &client, Product &product);
	void print();
	void filtr(int choice, int a, int minAge, int maxAge);
	int selectSearchCriteria();
	int selectFiltrCriteria();
	void search(int choice, char *input);
	void addcour(Courier &cour);
	time_t checktime();
	void printC(time_t a);
	Courier cor;
};
class Admin {
protected:
	char password[30];
	char login[30];
	int root;
public:
	void set() {
		cout << "Введите логин: ";
		cin >> this->login;
		cout << "Введите пароль: ";
		cin >> this->password;
	}
	void print() {
		if (strcmp(this->login, "admin") == 0 && strcmp(this->password, "admin") == 0) { return; }
		cout<<"Логин пользователя: "<<this->login << endl;
		cout << "Пароль пользователя: " << this->password << endl;
	}
	Admin() {
		this->root = 1;
	}
	int compare(char *log, char *pas) {
		if (strcmp(this->login, log) == 0 && strcmp(this->password, pas) == 0) {
			return this->root;
		}
		else cout << "Kek";
		return 0;
	}
};