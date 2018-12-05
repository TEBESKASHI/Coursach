#include "Header.h"
void Order::set(Client &client, Product &product) {
	system("cls");
	cout << "\t\t\t\t\t\t����� �����������" << endl;
	cout << "\t\t\t\t\t\t���: " << client.name << endl;
	strcpy(this->name,client.name);
	cout << "\t\t\t\t\t\t�������: " << client.surname << endl;
	strcpy(this->surname,client.surname);
	cout << "\t\t\t\t\t\t����� ����������: " << client.street <<" " <<client.houseNumber<<", "<<client.flat<< endl;
	strcpy(this->street,client.street);
	this->houseNumber = client.houseNumber;
	this->flat = client.flat;
	cout << "\t\t\t\t\t\t�����: " << product.ProductName << endl;
	strcpy(this->ProductName,product.ProductName);
	cout << "\t\t\t\t\t\t���������: " << product.ProductCost << endl;
	this->ProductCost = product.ProductCost;
	this->clientCode = client.flat*client.houseNumber*client.age;
	cout << "\t\t\t\t\t\tPress any key...\n";
	cin.get();
	cin.get();
	system("cls");
}
void Order::print() {
	cout << "\t\t\t\t\t\t���: " << this->name << endl;
	cout << "\t\t\t\t\t\t�������: " << this->surname << endl;
	cout << "\t\t\t\t\t\t����� ����������: " << this->street << " " << this->houseNumber << ", " << this->flat << endl;
	cout << "\t\t\t\t\t\t�����: " << this->ProductName << endl;
	cout << "\t\t\t\t\t\t���������: " << this->ProductCost << endl;
}
int Order::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� �������� �����" << endl;
	cout << "4.�� ��������� ������ " << endl;
	cin >> choice;
	return choice;
}
int Order::selectFiltrCriteria() {
	int choice;
	system("cls");
	cout << "���� ����������" << endl;
	cout << "1.���������� �� ���������" << endl;
	cin >> choice;
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
//����� �� ���������
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