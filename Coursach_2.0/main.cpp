#include "Header.h"
int menu() {
	Client client;
	List<Client>lst;
	int x;
	while (1) {
		cout << "1.���������� ������� � ������ ������" << endl;
		cout << "2.���������� ������� � ����� ������" << endl;
		cout << "3.��������" << endl;
		cout << "4.���������� ��������" << endl;
		cout << "5.������ �� �����" << endl;
		cout << "6.�������� ������ ��������" << endl;
		cout << "7.��������� � ����" << endl;
		cout << "8.�����" << endl;
		cout << "0.�����" << endl;
		cout << "9.��������������" << endl;
		cin >> x;
		switch (x) {
		case 1:
		{
			client.setMainClientInfo();
			lst.addFirstElement(client);
			client.getMainClientInfo();
			break;
		}
		case 2:
		{
			client.setMainClientInfo();
			lst.addLastElement(client);
			client.getMainClientInfo();
			break;
		}
		//case 3:
		//{
		//	int del;
		//	cout << "������� ����� �������, �������� ������� �������: ";
		//	cin >> del;
		//	lst.deleteElement(del);
		//	break;
		//}
		case 3: {
			lst.filtr();
			break;
		}
		case 4:
		{
			cout << "���������� ��������: " << lst.getSize() << endl;
			break;
		}
		case 5:
		{
			lst.downloadInfo(client, "ClientDatabase.txt");
			lst.print();
			break;
		}
		case 6:
		{
			lst.print();
			break;
		}
		case 7:
		{
			lst.save("ClientDatabase.txt");
			break;
		}
		case 8:
		{
			lst.search();
			break;
		}
	/*	case 0:
		{
			return 0;
			break;
		}*/
		case 0:
			lst.sort();
			break;
		case 9:lst.edit(); break;
		default:
		{
			cout << "�������� ������������ ����� ����" << endl;
		}
		break;
		}

	}
	system("pause");
	return 0;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Admin admin;
	Stack<Admin>adm;
	admin.set();
	adm.push(admin);
	admin.set();
	adm.push(admin);
	admin.set();
	adm.push(admin);
	adm.show();
	while (1) {
		cout << "1.����" << endl;
		cout << "2.�����" << endl;
		int i;
		cin >> i;
		switch (i) {
		case 1: {
			cout << "������� �����: ";
			char log[30];
			cin >> log;
			cout << "������� ������: ";
			char pas[30];
			cin >> pas;
			int i=adm.compare(log,pas); 
			if (i == 1) {
				system("cls");
				cout << "�� �� �����, ����� �����" << endl;
			}
			else if (i == 2) {
				system("cls");
				cout << "�� ������, �������" << endl;
				menu();
			}
			else { system("cls"); cout << "��������� ������������ ����� ������" << endl; }
			break; }
		case 2:exit(0); break;
		default:system("cls"); cout << "��� ������  ������ ����"; break;
		}
	}
	system("pause");
}