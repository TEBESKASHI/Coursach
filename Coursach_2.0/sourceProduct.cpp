#include "Header.h"

//�������� ������� � ������
void Product::add() {
	cout << "������� �������� ������: ";
	strcpy(this->ProductName, onlystring(30));
	cout << "������� ��� ������: ";
	this->ProductCode = onlyint();
	cout << "������� ��������� ������: ";
	this->ProductCost = onlyint();
}

//����� ������ ��������� � ��������� ����
void Product::print(int a) {
	if (a == 1) {
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
		cout << "| �������� ������ |" << " ��� ������ |" << " ��������� |" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 2) {
		cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 3) {
		cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
		cout << "```````````````````" << "`````````````" << "````````````" << endl;
	}
	}


//����� �������� ��� ������ ��������
int Product::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �������� ������" << endl;
	cout << "2.�� ���� ������" << endl;
	cout << "3.�� ��������� ������" << endl;
	choice = onlyint();
	return choice;
}

//������� ������ ��������
void Product::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
		cout << "| �������� ������ |" << " ��� ������ |" << " ��������� |" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 2) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->ProductName, input) == 0) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		case 2: {
			int inputInteger = atoi(input);
			if (this->ProductCode == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->ProductCost == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		}
	}
	if (a == 3) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->ProductName, input) == 0) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		case 2: {
			int inputInteger = atoi(input);
			if (this->ProductCode == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->ProductCost == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		}
	}
}

//����� �������� ��� ��������������
int Product::selectEditCriteria() {
	int choice;
	cout << "��� ����� �������������, �������?" << endl;
	cout << "1.�������� ������: "  << endl;
	cout << "2.��� ������" << endl;
	cout << "3.��������� ������: "  << endl;
	cout << "4.�c�" << endl;
	choice = onlyint();
	return choice;
}

//������� �������������� ������
void Product::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� �����: " << this->ProductName << endl;
		cout << "����� �������� ������: ";
		strcpy(this->ProductName, onlystring(30));
		break;
	}
	case 2: {
		cout << "������������� ��� ������: " << this->ProductCode << endl;
		cout << "����� ��� ������: ";
		this->ProductCode = onlyint();
		break;
	}
	case 3:
	{
		cout << "������������� ���� ������: " << this->ProductCost << endl;
		cout << "����� ���� ������: ";
		this->ProductCost = onlyint();
		break;
	}
	case 4: {
		cout << "������������� �����: " << this->ProductName << endl;
		cout << "����� �������� ������: ";
		strcpy(this->ProductName, onlystring(30));
		cout << "������������� ��� ������: " << this->ProductCode << endl;
		cout << "����� ��� ������: ";
		this->ProductCode = onlyint();
		cout << "������������� ���� ������: " << this->ProductCost << endl;
		cout << "����� ���� ������: ";
		this->ProductCost = onlyint();
		break;
	}
	}
}