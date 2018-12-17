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
	cout << "\t\t\t\t\t\t����� �����������" << endl;
	cout << "\t\t\t\t���: " << client.name << endl;
	strcpy(this->name,client.name);
	cout << "\t\t\t\t�������: " << client.surname << endl;
	strcpy(this->surname,client.surname);
	cout << "\t\t\t\t����� ����������: " << client.street <<" " <<client.houseNumber<<", "<<client.flat<< endl;
	strcpy(this->street,client.street);
	this->houseNumber = client.houseNumber;
	this->flat = client.flat;
	cout << "\t\t\t\t�����: " << product.ProductName << endl;
	strcpy(this->ProductName,product.ProductName);
	cout << "\t\t\t\t���������: " << product.ProductCost << endl;
	this->ProductCost = product.ProductCost;
	this->clientCode = client.flat*client.houseNumber*client.age;
	time_t result = time(nullptr);
	strcpy(this->timeF, asctime(localtime(&result)));
	this->seconds = result;
	this->status = 1;
	cout << "\t\t\t\t����� ����������: " << this->timeF << endl;
	cout << "������: ������� ��������" << endl;
	cout << "\t\t\t\tPress any key...\n";
	cin.get();
	cin.get();
	system("cls");
}
void Order::printC(time_t a) {
	system("cls");
	system("color F0");
	cout << "\t\t\t\t���: " << this->name << endl;
	cout << "\t\t\t\t�������: " << this->surname << endl;
	cout << "\t\t\t\t����� ����������: " << this->street << " " << this->houseNumber << ", " << this->flat << endl;
	cout << "\t\t\t\t�����: " << this->ProductName << endl;
	cout << "\t\t\t\t���������: " << this->ProductCost << endl; 
	cout << "\t\t\t\t����� ����������: " << this->timeF << endl;
	cout << "\t\t\t\t���������  " << asctime(localtime(&a)) << endl;
	cin.get();
	cin.get();
	system("color 0F");
}
void Order::print(int a) {
	if (a == 1) {
		cout << "___________________________________________________________________________________________________________________" << endl;
		return;
	}
	cout << "\t\t\t\t���: " << this->name << endl;
	cout << "\t\t\t\t�������: " << this->surname << endl;
	cout << "\t\t\t\t����� ����������: " << this->street << " " << this->houseNumber << ", " << this->flat << endl;
	cout << "\t\t\t\t�����: " << this->ProductName << endl;
	cout << "\t\t\t\t���������: " << this->ProductCost << endl;
	cout << "\t\t\t\t����� ����������: " << this->timeF << endl;
	if (cor.assigned == 0) {
		cout << "�������� �� ���������" << endl;
	}
	else if (cor.assigned == 1) {
		cout << "\t\t������: " << endl;
		cor.print(1);
		cor.print(3);
		cout << "\t\t\t\t��������� ��������: " << this->DeliveryCost << endl;
		if (this->status == 2) {
			cout << "������: �������� �������� ��������" << endl;
		}
		else cout << "������: ��������� " << asctime(localtime(&this->seconds)) << endl;
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
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� �������� �����" << endl;
	cout << "4.�� ��������� ������ " << endl;
	choice = onlyint();
	return choice;
}
int Order::selectFiltrCriteria() {
	int choice;
	system("cls");
	cout << "���� ����������" << endl;
	cout << "1.���������� �� ���������" << endl;
	choice = onlyint();
	return choice;
}
void Order::filtr(int choice, int a, int minAge, int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
			cout << "|`````````|" << "```````````|" << endl;
			cout << "|   ���   |" << " ��������� |" << endl;
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
int Order::SelectSortCriteria() {
	cout << "����������� �� ����" << endl;
	cout << "����������� �� ����� ������" << endl;
	int choice;
	choice = onlyint();
	return choice;
}
bool sums(int left, int right) {
	return left < right;
}
bool t(time_t left, time_t right) {
	return left < right;
}
void Order::sort(Order &obj, Order &obj1, int choice) {
	switch (choice) {
	case 1: {if (t(obj.seconds, obj1.seconds)) {
		std::swap(obj, obj1);
	}
			break;
	}
	case 2: {if (sums(obj.DeliveryCost, obj1.DeliveryCost)) {
		std::swap(obj, obj1);
	}
			break;
	}
	}
}
//����� �� ���������
void Order::search(int a,int choice, char *input) {
	system("cls");
	switch (choice) {
	case 1:
	{
		if (strcmp(this->name, input) == 0) {
			print(a);
		}
		break;
	}
	case 2:
	{
		if (strcmp(this->surname, input) == 0) {
			print(a);
		}
		break;
	}
	case 3:
	{
		if (strcmp(this->street, input) == 0) {
			print(a);
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->ProductCost == inputInteger) {
			print(a);
		}
		break;
	}
	}
}
int Order::profit() {
	return this->ProductCost;
}
void Order::profit(int profit) {
	cout << "��������� ������� �� �������: " << profit << endl;
	cout << "������� �� ������� ������: " << (profit * 0.75) << endl;
	cout << "������ �������: " << (profit*0.25) << endl;
}