#include "Header.h"

//���������� �������
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

//����� ������ �������� � ��������� ����
void Courier::print(int a) {
	if (a == 1) {
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
		cout << "|      ���     |" << "    �������   |" << " ������� |" << " ���� ������ |" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 2) {
		cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 3) {
		cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
		cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
	}
	
}

//����� �������� ��� ������ �������
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

//������� ������ �������
void Courier::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
		cout << "|      ���     |" << "    �������   |" << " ������� |" << " ���� ������ |" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 2) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 2: {
			if (strcmp(this->surname, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 4:
		{
			int inputInteger = atoi(input);
			if (this->experience == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
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
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 2: {
			if (strcmp(this->surname, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 4:
		{
			int inputInteger = atoi(input);
			if (this->experience == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		}
	}
}

//����� �������� ��� ��������������
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

//������� �������������� ���������� � �������
void Courier::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� ���: " << this->name << endl;
		cout << "����� ���: ";
		cin >> this->name;
		break;
	}
	case 2: {
		cout << "������������� �������: " << this->surname << endl;
		cout << "����� �������: ";
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "������������� �������: " << this->age << endl;
		cout << "����� �������: ";
		cin >> this->age;
		break;
	}
	case 4: {
		cout << "������������� ���� ������: " << this->experience << endl;
		cout << "����� ���� ������: ";
		cin >> this->experience;
		break;
	}
	case 5: {
		cout << "������������� ���: " << this->name << endl;
		cout << "����� ���: ";
		cin >> this->name;
		cout << "������������� �������: " << this->surname << endl;
		cout << "����� �������: ";
		cin >> this->surname;
		cout << "������������� �������: " << this->age << endl;
		cout << "����� �������: ";
		cin >> this->age;
		cout << "������������� ���� ������: " << this->experience << endl;
		cout << "����� ���� ������: ";
		cin >> this->experience;
		break;
	}
	}
}