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

//void Client::save(Client &obj) {
//	ofstream fout;
//	fout.open("ClientDatabase.txt", ofstream::app);
//	if (!fout.is_open()) {
//		cout << "Openning Error" << endl;
//	}
//	else {
//		cout << "File is ipen" << endl;
//		fout.write((char*)&obj, sizeof(Client));
//	}
//	fout.close();
//}
//
//
//void Client::download(Client &obj) {
//	List<Client>ls;
//	ifstream fin;
//	fin.open("ClientDatabase.txt");
//	if (!fin.is_open()) {
//		cout << "Openning Error" << endl;
//	}
//	else {
//		cout << "File is ipen" << endl;
//
//		while (fin.read((char*)&obj, sizeof(Client))) {
//			ls.addLastElement(obj);
//			obj.print();
//
//		}
//		cout << ls.getSize() << endl;
//	}
//	fin.close();
//}

//вывод на экран
void Client::print() {
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}

