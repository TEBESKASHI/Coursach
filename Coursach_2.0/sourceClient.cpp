#include "Header.h"

//��������� ���������� � �������
void Client::setMainClientInfo() {
	cout << "������� ��� �������: ";
	strcpy(this->name, onlystring(20));
	cout << "������� ������� �������: ";
	strcpy(this->surname, onlystring(20));
	cout << "������� ������� �������: ";
	this->age = onlyint();
	cout << "������� �������� ����� ���������� �������: ";
	strcpy(this->street, onlystring(20));
	cout << "������� ����� ���� �������: ";
	this -> houseNumber = onlyint();
	cout << "������� ����� �������� �������: ";
	this->flat = onlyint();
}

//����� �������� ��� ������
int Client::selectSearchCriteria() {
	int choice;
	cout << "�������� �������� ������" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� ��������" << endl;
	cout << "4.�� �������� �����" << endl;
	cout << "5.�� ������ ����" << endl;
	cout << "6.�� ������ ��������" << endl;
	choice = onlyint();
	return choice;
}

//����� �������� ��� ����������
int Client::selectFiltrCriteria() {
	int choice;
	cout << "���� ����������" << endl;
	cout << "1.���������� �� ��������" << endl;
	choice = onlyint();
	return choice;
}

//������� ����������
void Client::filtr(int choice, int a,int minAge,int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
			cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
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

//����� �������� �������������� ������
int Client::selectEditCriteria() {
	int choice;
	cout << "�������� �������� ��������������" << endl;
	cout << "1.���" << endl;
	cout << "2.�������" << endl;
	cout << "3.�������" << endl;
	cout << "4.�������� �����" << endl;
	cout << "5.����� ����" << endl;
	cout << "6.����� ��������" << endl;
	cout << "7.��" << endl;
	choice = onlyint();
	return choice;
}

//�������������� ������
void Client::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� ���: " << this->name << endl;
		cout << "������� ����� ���: ";
		strcpy(this->name, onlystring(20));
		break;
	}
	case 2:
	{
		cout << "������������� �������: " << this->surname << endl;
		cout << "������� ����� �������: ";
		strcpy(this->surname, onlystring(20));
		break;
	}
	case 3:
	{
		cout << "������������� �������: " << this->age << endl;
		cout << "������� ����� �������: ";
		this->age = onlyint();
		break;
	}
	case 4:
	{
		cout << "������������� �������� �����: " << this->street << endl;
		cout << "������� ����� �������� �����: ";
		strcpy(this->street, onlystring(20));
		break;
	}
	case 5:
	{
		cout << "������������� ����� ����: " << this->houseNumber << endl;
		cout << "������� ����� ����� ����: ";
		this->houseNumber = onlyint();
		break;
	}
	case 6:
	{
		cout << "������������� ����� ��������: " << this->flat << endl;
		cout << "������� ����� ����� ��������: ";
		this->flat = onlyint();
		break;
	}
	case 7: {
		cout << "������������� ���: " << this->name << endl;
		cout << "������� ����� ���: ";
		strcpy(this->name, onlystring(20));
		cout << "������������� �������: " << this->surname << endl;
		cout << "������� ����� �������: ";
		strcpy(this->surname, onlystring(20));
		cout << "������������� �������: " << this->age << endl;
		cout << "������� ����� �������: ";
		this->age = onlyint();
		cout << "������������� �������� �����: " << this->street << endl;
		cout << "������� ����� �������� �����: ";
		strcpy(this->street, onlystring(20));
		cout << "������������� ����� ����: " << this->houseNumber << endl;
		cout << "������� ����� ����� ����: ";
		this->houseNumber = onlyint();
		cout << "������������� ����� ��������: " << this->flat << endl;
		cout << "������� ����� ����� ��������: ";
		this->flat = onlyint(); break;
	}
	}
}

//����� �� ���������
void Client::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
		cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
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

//get ��� �������
void Client::getMainClientInfo() {
	system("cls");
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
}

//������� ���������� ��������
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

//����� ������ �������� � ��������� ����
void Client::print(int a) {
	if (a == 1) {
		cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
		cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
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

