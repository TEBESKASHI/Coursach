#include "Header.h"
void Product::add() {
	cout << "������� �������� ������: ";
	cin >> this->ProductName;
	cout << "������� ��� ������: ";
	cin >> this->ProductCode;
	cout << "������� ��������� ������: ";
	cin >> this->ProductCost;
}
void Product::print() {
	cout << "�������� ������: " << this->ProductName << endl;
	cout << "������� ��� ������: " << this->ProductCode << endl;
	cout << "��������� ������: " << this->ProductCost << endl;
}
int Product::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �������� ������" << endl;
	cout << "2.�� ���� ������" << endl;
	cout << "3.�� ��������� ������" << endl;
	cin >> choice;
	return choice;
}
void Product::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->ProductName, input) == 0) {
			print();
		}
		break;
	}
	case 2: {
		int inputInteger = atoi(input);
		if (this->ProductCode == inputInteger) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->ProductCost == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Product::selectEditCriteria() {
	int choice;
	cout << "��� ����� �������������, �������?" << endl;
	cout << "1.�������� ������: "  << endl;
	cout << "2.��� ������" << endl;
	cout << "3.��������� ������: "  << endl;
	cout << "4.�c�" << endl;
	cin >> choice;
	return choice;
}
void Product::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� �����: " << this->ProductName << endl;
		cin >> this->ProductName;
		break;
	}
	case 2: {
		cout << "������������� ��� ������: " << this->ProductCode << endl;
		cin >> this->ProductCode;
		break;
	}
	case 3:
	{
		cout << "������������� ���� ������: " << this->ProductCost << endl;
		cin >> this->ProductCost;
		break;
	}
	case 4: {
		cout << "������������� �����: " << this->ProductName << endl;
		cin >> this->ProductName;
		cout << "������������� ��� ������: " << this->ProductCode << endl;
		cin >> this->ProductCode;
		cout << "������������� ���� ������: " << this->ProductCost << endl;
		cin >> this->ProductCost;
		break;
	}
	}
}