#include "Header.h"
time_t Order::checktime() {
	if (this->status == 1) {
		return 0;
	}
		time_t result = time(nullptr);
		int res = result / 60;
		int res1 = this->seconds / 60;
		if (res-res1 >= (1 + rand() % 2)) {
			this->status = 3;
			this->seconds = result;
			return result;
		}
		return 0;
}
void Order::set(Client &client, Product &product) {
	system("cls");
	cout << "\t\t\t\t\t\tЗаказ сформирован" << endl;
	cout << "\t\t\t\tИмя: " << client.name << endl;
	strcpy(this->name,client.name);
	cout << "\t\t\t\tФамилия: " << client.surname << endl;
	strcpy(this->surname,client.surname);
	cout << "\t\t\t\tАдрес проживания: " << client.street <<" " <<client.houseNumber<<", "<<client.flat<< endl;
	strcpy(this->street,client.street);
	this->houseNumber = client.houseNumber;
	this->flat = client.flat;
	cout << "\t\t\t\tТовар: " << product.ProductName << endl;
	strcpy(this->ProductName,product.ProductName);
	cout << "\t\t\t\tСтоимость: " << product.ProductCost << endl;
	this->ProductCost = product.ProductCost;
	this->clientCode = client.flat*client.houseNumber*client.age;
	time_t result = time(nullptr);
	strcpy(this->timeF, asctime(localtime(&result)));
	this->seconds = result;
	this->status = 1;
	cout << "\t\t\t\tВремя заключения: " << this->timeF << endl;
	cout << "Статус: Ожидает доставки" << endl;
	cout << "\t\t\t\tPress any key...\n";
	cin.get();
	cin.get();
	system("cls");
}
void Order::printC(time_t a) {
	system("cls");
	system("color F0");
	cout << "\t\t\t\tИмя: " << this->name << endl;
	cout << "\t\t\t\tФамилия: " << this->surname << endl;
	cout << "\t\t\t\tАдрес проживания: " << this->street << " " << this->houseNumber << ", " << this->flat << endl;
	cout << "\t\t\t\tТовар: " << this->ProductName << endl;
	cout << "\t\t\t\tСтоимость: " << this->ProductCost << endl; 
	cout << "\t\t\t\tВремя заключения: " << this->timeF << endl;
	cout << "\t\t\t\tДоставлен  " << asctime(localtime(&a)) << endl;
	cin.get();
	cin.get();
	system("color 0F");
}
void Order::print() {
	cout << "\t\t\t\tИмя: " << this->name << endl;
	cout << "\t\t\t\tФамилия: " << this->surname << endl;
	cout << "\t\t\t\tАдрес проживания: " << this->street << " " << this->houseNumber << ", " << this->flat << endl;
	cout << "\t\t\t\tТовар: " << this->ProductName << endl;
	cout << "\t\t\t\tСтоимость: " << this->ProductCost << endl;
	cout << "\t\t\t\tВремя заключения: " << this->timeF << endl;
	if (cor.assigned == 0) {
		cout << "Доставка не назначена" << endl;
	}
	else if (cor.assigned == 1) {
		cout << "\t\tКурьер: " << endl;
		cor.print();
		cout << "\t\t\t\tСтоимость доставки: " << this->DeliveryCost << endl;
		if (this->status == 2) {
			cout << "Статус: Ожидание доставки курьером" << endl;
		}
		else cout << "Статус: Доставлен " << asctime(localtime(&this->seconds)) << endl;
		cout << "___________________________________________________________________________________________________________________" << endl;
	}
}
void Order::addcour(Courier &cour) {
	this->DeliveryCost = cor.fuelcost * (1 + rand() % 100);
	cor.age = cour.age;
	cor.experience = cour.experience;
	cor.assigned = 1;
	strcpy(cor.name, cour.name);
	strcpy(cor.surname, cour.surname);
	this->status = 2;
}
int Order::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По имени" << endl;
	cout << "2.По фамилии" << endl;
	cout << "3.По названию улицы" << endl;
	cout << "4.По стоимости товара " << endl;
	cin >> choice;
	return choice;
}
int Order::selectFiltrCriteria() {
	int choice;
	system("cls");
	cout << "Меню фильтрации" << endl;
	cout << "1.Фильтрация по стоимости" << endl;
	cin >> choice;
	return choice;
}
void Order::filtr(int choice, int a, int minAge, int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
			cout << "|`````````|" << "```````````|" << endl;
			cout << "|   Имя   |" << " Стоимость |" << endl;
		}
		else if (a == 2) {
			if (this->ProductCost > minAge && this->ProductCost < maxAge) {
				cout << "|`````````|" << "```````````|" << endl;
				cout << "|" << setw(9) << this->name << "|" << setw(11) << this->ProductCost << "|" << endl;
			}
		}
		else {
			if (this->ProductCost > minAge && this->ProductCost < maxAge) {
				cout << "|`````````|" << "```````````|" << endl;
				cout << "|" << setw(9) << this->name << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "``````````" << "`````````````" << endl;
			}
		}
		break;
	}
	}
}
//поиск по критериям
void Order::search(int choice, char *input) {
	system("cls");
	switch (choice) {
	case 1:
	{
		if (strcmp(this->name, input) == 0) {
			print();
		}
		break;
	}
	case 2:
	{
		if (strcmp(this->surname, input) == 0) {
			print();
		}
		break;
	}
	case 3:
	{
		if (strcmp(this->street, input) == 0) {
			print();
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->ProductCost == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Order::profit() {
	return this->ProductCost;
}
void Order::profit(int profit) {
	cout << "Ожидаемая прибыль от заказов: " << profit << endl;
	cout << "Затраты на покупку товара: " << (profit * 0.75) << endl;
	cout << "Чистая прибыль: " << (profit*0.25) << endl;
}