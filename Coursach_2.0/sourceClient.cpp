#include "Header.h"

//получение информации о клиенте
void Client::setMainClientInfo() {
	cout << "Введите имя клиента: ";
	cin >> this->name;
	cout << "Введите фамилию клиента: ";
	cin >> this->surname;
	cout << "Введите возраст клиента: ";
	cin >> this->age;
	cout << "Введите название улицы проживания клиента: ";
	cin >> this->street;
	cout << "Введите номер дома клиента: ";
	cin >> this->houseNumber;
	cout << "Введите номер квартиры клиента: ";
	cin >> this->flat;
}

//выбор критерия для поиска
int Client::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По имени" << endl;
	cout << "2.По фамилии" << endl;
	cout << "3.По возрасту" << endl;
	cout << "4.По названию улицы" << endl;
	cout << "5.По номеру дома" << endl;
	cout << "6.По номеру квартиры" << endl;
	cin >> choice;
	return choice;
}
int Client::selectFiltrCriteria() {
	int choice;
	cout << "Меню фильтрации" << endl;
	cout << "1.Фильтрация по возрасту" << endl;
	cin >> choice;
	return choice;
}
void Client::filtr(int choice, int a,int minAge,int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
				cout << "|`````````|" << "```````````|" << endl;
				cout << "|   Имя   |" << "  Возраст  |" << endl;
		}
		else if (a == 2) {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````|" << "```````````|" << endl;
				cout << "|" << setw(9) << this->name << "|" << setw(11) << this->age << "|" << endl;
			}
		}
		else {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````|" << "```````````|" << endl;
				cout << "|"<<setw(9) << this->name << "|"<<setw(11) << this->age <<"|"<< endl;
				cout << "``````````" << "`````````````" << endl;
			}
		}
		break;
	}
	}
}
int Client::selectEditCriteria() {
	int choice;
	cout << "Что будем редактировать, простак?" << endl;
	cout << "1.Имя" << endl;
	cout << "2.Фамилию" << endl;
	cout << "3.Возраст" << endl;
	cout << "4.Название улицы" << endl;
	cout << "5.Номер дома" << endl;
	cout << "6.Номер квартиры" << endl;
	cout << "7.ВСе" << endl;
	cin >> choice;
	return choice;
}
void Client::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемое имя: " << this->name << endl;
		cin >> this->name;
		break;
	}
	case 2:
	{
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "Редактируемый возраст: " << this->age << endl;
		cin >> this->age;
		break;
	}
	case 4:
	{
		cout << "Редактируемое название улицы: " << this->street << endl;
		cin >> this->street;
		break;
	}
	case 5:
	{
		cout << "Редактируемый номер дома: " << this->houseNumber << endl;
		cin >> this->houseNumber;
		break;
	}
	case 6:
	{
		cout << "Редактируемый номер квартиры: " << this->flat << endl;
		cin >> this->flat;
		break;
	}
	case 7: {
		cout << "Редактируемое имя: " << this->name << endl;
		cin >> this->name;
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cin >> this->surname;
		cout << "Редактируемый возраст: " << this->age << endl;
		cin >> this->age;
		cout << "Редактируемое название улицы: " << this->street << endl;
		cin >> this->street;
		cout << "Редактируемый номер дома: " << this->houseNumber << endl;
		cin >> this->houseNumber;
		cout << "Редактируемый номер квартиры: " << this->flat << endl;
		cin >> this->flat; break;
	}
	}
}
//поиск по критериям
void Client::search(int choice, char *input) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
			cout << "Имя клиента: " << this->name << endl;
			cout << "Фамилия клиента: " << this->surname << endl;
			cout << "Возраст клиента: " << this->age << endl;
			cout << "Улица проживания клиента: " << this->street << endl;
			cout << "Номер дома клиента: " << this->houseNumber << endl;
			cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
		case 2:
		{
			if (strcmp(this->surname, input) == 0) {
			cout << "Имя клиента: " << this->name << endl;
			cout << "Фамилия клиента: " << this->surname << endl;
			cout << "Возраст клиента: " << this->age << endl;
			cout << "Улица проживания клиента: " << this->street << endl;
			cout << "Номер дома клиента: " << this->houseNumber << endl;
			cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age==inputInteger) {
				cout << "Имя клиента: " << this->name << endl;
				cout << "Фамилия клиента: " << this->surname << endl;
				cout << "Возраст клиента: " << this->age << endl;
				cout << "Улица проживания клиента: " << this->street << endl;
				cout << "Номер дома клиента: " << this->houseNumber << endl;
				cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
		case 4:
		{
			if (strcmp(this->street, input) == 0) {
				cout << "Имя клиента: " << this->name << endl;
				cout << "Фамилия клиента: " << this->surname << endl;
				cout << "Возраст клиента: " << this->age << endl;
				cout << "Улица проживания клиента: " << this->street << endl;
				cout << "Номер дома клиента: " << this->houseNumber << endl;
				cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
		case 5:
		{
			int inputInteger = atoi(input);
			if (this->houseNumber == inputInteger) {
				cout << "Имя клиента: " << this->name << endl;
				cout << "Фамилия клиента: " << this->surname << endl;
				cout << "Возраст клиента: " << this->age << endl;
				cout << "Улица проживания клиента: " << this->street << endl;
				cout << "Номер дома клиента: " << this->houseNumber << endl;
				cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
		case 6:
		{
			int inputInteger = atoi(input);
			if (this->flat == inputInteger) {
				cout << "Имя клиента: " << this->name << endl;
				cout << "Фамилия клиента: " << this->surname << endl;
				cout << "Возраст клиента: " << this->age << endl;
				cout << "Улица проживания клиента: " << this->street << endl;
				cout << "Номер дома клиента: " << this->houseNumber << endl;
				cout << "Номер квартиры клиента: " << this->flat << endl;
			}
		    break;
		}
	}
}

void Client::sort(bool a) {
	system("cls");
	List<Client>client;
	while (true) {
		cout << "1.Сортировка по имени клиента" << endl;
		char i;
		cin >> i;
		switch (i) {
		case '1': {
			if (a == true) {

			}
			else {
			}
		}
		default:system("cls"); cout << "Нет такого пункта меню" << endl; break;
		}
	}
}
void Client::getMainClientInfo() {
	system("cls");
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}
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
void Client::print() {
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}

