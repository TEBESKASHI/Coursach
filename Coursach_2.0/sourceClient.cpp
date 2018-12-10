#include "Header.h"

//получение информации о клиенте
void Client::setMainClientInfo() {
	cout << "Введите имя клиента: ";
	strcpy(this->name, onlystring(20));
	cout << "Введите фамилию клиента: ";
	strcpy(this->surname, onlystring(20));
	cout << "Введите возраст клиента: ";
	this->age = onlyint();
	cout << "Введите название улицы проживания клиента: ";
	strcpy(this->street, onlystring(20));
	cout << "Введите номер дома клиента: ";
	this -> houseNumber = onlyint();
	cout << "Введите номер квартиры клиента: ";
	this->flat = onlyint();
}

//выбор критерия для поиска
int Client::selectSearchCriteria() {
	int choice;
	cout << "Выберите критерий поиска" << endl;
	cout << "1.По имени" << endl;
	cout << "2.По фамилии" << endl;
	cout << "3.По возрасту" << endl;
	cout << "4.По названию улицы" << endl;
	cout << "5.По номеру дома" << endl;
	cout << "6.По номеру квартиры" << endl;
	choice = onlyint();
	return choice;
}

//выбор критерия для фильтрации
int Client::selectFiltrCriteria() {
	int choice;
	cout << "Меню фильтрации" << endl;
	cout << "1.Фильтрация по возрасту" << endl;
	choice = onlyint();
	return choice;
}

//функция фильтрации
void Client::filtr(int choice, int a,int minAge,int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
			cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			cout << "| Имя клиента |" << "  Фамилия  |" << " Возраст|" << "    Улица     |" << " Номер дома |" << " Номер квартиры |" << endl;
		}
		else if (a == 2) {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		}
		else {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
			}
		}
		break;
	}
	}
}

//выбор критерия редактирования данных
int Client::selectEditCriteria() {
	int choice;
	cout << "Выберите критерий редактирования" << endl;
	cout << "1.Имя" << endl;
	cout << "2.Фамилию" << endl;
	cout << "3.Возраст" << endl;
	cout << "4.Название улицы" << endl;
	cout << "5.Номер дома" << endl;
	cout << "6.Номер квартиры" << endl;
	cout << "7.Всё" << endl;
	choice = onlyint();
	return choice;
}

//редактирование данных
void Client::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Введите новое имя: ";
		strcpy(this->name, onlystring(20));
		break;
	}
	case 2:
	{
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Введите новую фамилию: ";
		strcpy(this->surname, onlystring(20));
		break;
	}
	case 3:
	{
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Введите новый возраст: ";
		this->age = onlyint();
		break;
	}
	case 4:
	{
		cout << "Редактируемое название улицы: " << this->street << endl;
		cout << "Введите новое название улицы: ";
		strcpy(this->street, onlystring(20));
		break;
	}
	case 5:
	{
		cout << "Редактируемый номер дома: " << this->houseNumber << endl;
		cout << "Введите новый номер дома: ";
		this->houseNumber = onlyint();
		break;
	}
	case 6:
	{
		cout << "Редактируемый номер квартиры: " << this->flat << endl;
		cout << "Введите новый номер квартиры: ";
		this->flat = onlyint();
		break;
	}
	case 7: {
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Введите новое имя: ";
		strcpy(this->name, onlystring(20));
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Введите новую фамилию: ";
		strcpy(this->surname, onlystring(20));
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Введите новый возраст: ";
		this->age = onlyint();
		cout << "Редактируемое название улицы: " << this->street << endl;
		cout << "Введите новое название улицы: ";
		strcpy(this->street, onlystring(20));
		cout << "Редактируемый номер дома: " << this->houseNumber << endl;
		cout << "Введите новый номер дома: ";
		this->houseNumber = onlyint();
		cout << "Редактируемый номер квартиры: " << this->flat << endl;
		cout << "Введите новый номер квартиры: ";
		this->flat = onlyint(); break;
	}
	}
}

//поиск по критериям
void Client::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
		cout << "| Имя клиента |" << "  Фамилия  |" << " Возраст|" << "    Улица     |" << " Номер дома |" << " Номер квартиры |" << endl;
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
	}
	if (a == 2) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {

				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		case 2:
		{
			if (strcmp(this->surname, input) == 0) {
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age == inputInteger) {
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		case 4:
		{
			if (strcmp(this->street, input) == 0) {
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		case 5:
		{
			int inputInteger = atoi(input);
			if (this->houseNumber == inputInteger) {

				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		case 6:
		{
			int inputInteger = atoi(input);
			if (this->flat == inputInteger) {
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			}
			break;
		}
		}
	}
		if (a == 3) {
			switch (choice) {
			case 1:
			{
				if (strcmp(this->name, input) == 0) {

					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			case 2:
			{
				if (strcmp(this->surname, input) == 0) {
					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			case 3:
			{
				int inputInteger = atoi(input);
				if (this->age == inputInteger) {
					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			case 4:
			{
				if (strcmp(this->street, input) == 0) {
					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			case 5:
			{
				int inputInteger = atoi(input);
				if (this->houseNumber == inputInteger) {

					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			case 6:
			{
				int inputInteger = atoi(input);
				if (this->flat == inputInteger) {
					cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
					cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
				}
				break;
			}
			}
		}
}

//get для клиента
void Client::getMainClientInfo() {
	system("cls");
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}

//функция сортировки клиентов
bool names(char left[30], char right[30]) {
	return strcmp(left, right) > 0;
}
void Client::sort(Client &obj,Client &obj1) {
			if (names(obj.name, obj1.name)) {
				std::swap(obj.name, obj1.name);
				std::swap(obj.surname, obj1.surname);
				std::swap(obj.age, obj1.age);
				std::swap(obj.street, obj1.street);
				std::swap(obj.houseNumber, obj1.houseNumber);
				std::swap(obj.flat, obj1.flat);
	}
}

//вывод списка клиентов в табличном виде
void Client::print(int a) {
	if (a == 1) {
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
		cout << "| Имя клиента |" << "  Фамилия  |" << " Возраст|" << "    Улица     |" << " Номер дома |" << " Номер квартиры |" << endl;
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
	}
	if (a == 2) {
		cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
	}
	if (a == 3) {
		cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
		cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
	}
}

