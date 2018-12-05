#include "Header.h"
void Order::add() {
	cout << "������� �������� ������: ";
	cin >> this->orderName;
	cout << "������� ��� �������: ";
	cin >> this->clientCode;
	cout << "������� ��������� ������: ";
	cin >> this->OrderCost;
	cout << "������� ��������� ��������: ";
	cin >> this->DeliveryCost;
}
void Order::print() {
	cout << "�������� ������: " << this->orderName << endl;
	cout << "��� �������: " << this->clientCode << endl;
	cout << "��������� ������: " << this->OrderCost << endl;
	cout << "��������� ��������: " << this->DeliveryCost << endl;
}
int Order::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �������� ������" << endl;
	cout << "2.�� ���� �������" << endl;
	cout << "3.�� ��������� ������" << endl;
	cout << "4.�� ��������� ��������" << endl;
	cin >> choice;
	return choice;
}
void Order::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->orderName, input) == 0) {
			print();
		}
		break;
	}
	case 2:
	{
		int inputInteger = atoi(input);
		if (this->clientCode == inputInteger) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->OrderCost == inputInteger) {
			print();
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->DeliveryCost == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Order::selectEditCriteria() {
	int choice;
	cout << "��� ����� �������������, �������?" << endl;
	cout << "1.�������� ������: "  << endl;
	cout << "2.��� �������: "  << endl;
	cout << "3.��������� ������: "  << endl;
	cout << "4.��������� ��������: "  << endl;
	cout << "5.�c�" << endl;
	cin >> choice;
	return choice;
}
void Order::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� �����: " << this->orderName << endl;
		cin >> this->orderName;
		break;
	}
	case 2:
	{
		cout << "������������� ��� �������: " << this->clientCode << endl;
		cin >> this->clientCode;
		break;
	}
	case 3:
	{
		cout << "������������� ���� ������: " << this->OrderCost << endl;
		cin >> this->OrderCost;
		break;
	}
	case 4:
	{
		cout << "������������� ���� ��������: " << this->DeliveryCost << endl;
		cin >> this->DeliveryCost;
		break;
	}
	case 5: {
		cout << "������������� �����: " << this->orderName << endl;
		cin >> this->orderName;
		cout << "������������� ��� �������: " << this->clientCode << endl;
		cin >> this->clientCode;
		cout << "������������� ���� ������: " << this->OrderCost << endl;
		cin >> this->OrderCost;
		cout << "������������� ���� ��������: " << this->DeliveryCost << endl;
		cin >> this->DeliveryCost;
		break;
	}
	}
}