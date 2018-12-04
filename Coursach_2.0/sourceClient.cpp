#include "Header.h"

//��������� ���������� � �������
void Client::setMainClientInfo() {
	cout << "������� ��� �������: ";
	cin >> this->name;
	cout << "������� ������� �������: ";
	cin >> this->surname;
	cout << "������� ������� �������: ";
	cin >> this->age;
	cout << "������� �������� ����� ���������� �������: ";
	cin >> this->street;
	cout << "������� ����� ���� �������: ";
	cin >> this->houseNumber;
	cout << "������� ����� �������� �������: ";
	cin >> this->flat;
}

//����� �������� ��� ������
int Client::selectSearchCriteria() {
	int choice;
	cout << "�� ��� ����� ������, �����?" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� ��������" << endl;
	cout << "4.�� �������� �����" << endl;
	cout << "5.�� ������ ����" << endl;
	cout << "6.�� ������ ��������" << endl;
	cin >> choice;
	return choice;
}

//����� �� ���������
void Client::search(int choice, char *input) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
			cout << "��� �������: " << this->name << endl;
			cout << "������� �������: " << this->surname << endl;
			cout << "������� �������: " << this->age << endl;
			cout << "����� ���������� �������: " << this->street << endl;
			cout << "����� ���� �������: " << this->houseNumber << endl;
			cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
		case 2:
		{
			if (strcmp(this->surname, input) == 0) {
			cout << "��� �������: " << this->name << endl;
			cout << "������� �������: " << this->surname << endl;
			cout << "������� �������: " << this->age << endl;
			cout << "����� ���������� �������: " << this->street << endl;
			cout << "����� ���� �������: " << this->houseNumber << endl;
			cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age==inputInteger) {
				cout << "��� �������: " << this->name << endl;
				cout << "������� �������: " << this->surname << endl;
				cout << "������� �������: " << this->age << endl;
				cout << "����� ���������� �������: " << this->street << endl;
				cout << "����� ���� �������: " << this->houseNumber << endl;
				cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
		case 4:
		{
			if (strcmp(this->street, input) == 0) {
				cout << "��� �������: " << this->name << endl;
				cout << "������� �������: " << this->surname << endl;
				cout << "������� �������: " << this->age << endl;
				cout << "����� ���������� �������: " << this->street << endl;
				cout << "����� ���� �������: " << this->houseNumber << endl;
				cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
		case 5:
		{
			int inputInteger = atoi(input);
			if (this->houseNumber == inputInteger) {
				cout << "��� �������: " << this->name << endl;
				cout << "������� �������: " << this->surname << endl;
				cout << "������� �������: " << this->age << endl;
				cout << "����� ���������� �������: " << this->street << endl;
				cout << "����� ���� �������: " << this->houseNumber << endl;
				cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
		case 6:
		{
			int inputInteger = atoi(input);
			if (this->flat == inputInteger) {
				cout << "��� �������: " << this->name << endl;
				cout << "������� �������: " << this->surname << endl;
				cout << "������� �������: " << this->age << endl;
				cout << "����� ���������� �������: " << this->street << endl;
				cout << "����� ���� �������: " << this->houseNumber << endl;
				cout << "����� �������� �������: " << this->flat << endl;
			}
		    break;
		}
	}
}

void Client::sort(bool a) {
	system("cls");
	List<Client>client;
	while (true) {
		cout << "1.���������� �� ����� �������" << endl;
		char i;
		cin >> i;
		switch (i) {
		case '1': {
			if (a == true) {

			}
			else {
			}
		}
		default:system("cls"); cout << "��� ������ ������ ����" << endl; break;
		}
	}
}
void Client::getMainClientInfo() {
	system("cls");
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
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

//����� �� �����
void Client::print() {
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
}

