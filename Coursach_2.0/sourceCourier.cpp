#include "Header.h"
void Courier::setInfo() {
	cout << "��� �������: ";
	cin >> this->name;
	cout << "������� �������: ";
	cin >> this->surname;
	cout << "������� �������: ";
	cin >> this->age;
	cout << "���� ������: ";
	cin >> this->experience;
}
void Courier::print() {
	cout << "\t\t\t\t��� �������: " << this->name << endl;
	cout << "\t\t\t\t������� �������: " << this->surname << endl;
	cout << "\t\t\t\t������� �������: " << this->age << endl;
	cout << "\t\t\t\t���� ������: " << this->experience << endl;
}
int Courier::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� ��������" << endl;
	cout << "4.�� ����� ������" << endl;
	cin >> choice;
	return choice;
}
void Courier::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->name, input) == 0) {
			print();
		}
		break;
	}
	case 2: {
		if (strcmp(this->surname, input) == 0) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->age == inputInteger) {
			print();
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->experience == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Courier::selectEditCriteria() {
	int choice;
	cout << "��� ����� �������������, �������?" << endl;
	cout << "1.���: " << endl;
	cout << "2.�������" << endl;
	cout << "3.�������: " << endl;
	cout << "4.���� ������" << endl;
	cout << "5.���" << endl;
	cin >> choice;
	return choice;
}
void Courier::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� ���: " << this->name << endl;
		cin >> this->name;
		break;
	}
	case 2: {
		cout << "������������� �������: " << this->surname << endl;
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "������������� �������: " << this->age << endl;
		cin >> this->age;
		break;
	}
	case 4: {
		cout << "������������� ���� ������: " << this->experience << endl;
		cin >> this->experience;
		break;
	}
	case 5: {
		cout << "������������� ���: " << this->name << endl;
		cin >> this->name;
		cout << "������������� �������: " << this->surname << endl;
		cin >> this->surname;
		cout << "������������� �������: " << this->age << endl;
		cin >> this->age;
		cout << "������������� ���� ������: " << this->experience << endl;
		cin >> this->experience;
		break;
	}
	}
}