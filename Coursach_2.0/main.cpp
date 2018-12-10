#include "Header.h"
List<Admin>adm;
int onlyint() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char number;
	int all = 0;
	int k = 0;
	do
	{
		number = _getch();
		if (isdigit(number) != 0) {
			cout << number;
			int x = (int)number - 48;
			all = all * 10 + x;
			k++;
		}
		else if (number == 8 && k != 0) {
			cout << "\b \b";
			k--;
			all = (all - all % 10) / 10;
		}
		else if (number == '\n') { break; }
	} while (k<8 && number != 13);
	cout << endl;
	return all;
}
char* onlystring(int N) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char number;
	char *str = new char[N];
	int k = 0;
	do
	{
		number = _getch();
		if (k < N) {
			if (isdigit(number) == 0 && number != 8 && number != 13) {
				cout << number;
				str[k] = number;
				k++;
			}
		}

			 if (number == 8 && k != 0) {
				cout << "\b \b";
				str[k] = '\0';
				k--;
			}
		else if (number == '\n') { break; }
	} while (number != 13);
	cout << endl;
	str[k] = '\0';
	return str;
}
void user(List<Client> &lst, List<Product> &pro, List<Order> &ord, List<Courier> &cour, List<Admin> &adm) {
	while (1) {
		system("cls");
		cout << "1.�������(������ - �������)" << endl;
		cout << "2.����������" << endl;
		cout << "3.���� ������(��������)" << endl;
		cout << "4.�����" << endl;
		cout << "0.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1:{system("cls");
			ord.profit();
			system("pause");
			break;
		}
		case 2:system("cls"); lst.filtr(); system("pause"); break;
		case 3:system("cls"); printMenu(lst, pro, cour); system("pause"); break;
		case 4:system("cls"); searchMenu(lst,pro,cour); system("pause"); break;
		case 0:return; break;
		default:system("cls"); cout << "��� ������ ������ ����" << endl; break;
		}
	}
}
void userMenu(List<Admin> &adm) {
	Admin admin;
	while (1) {
		system("cls");
		cout << "1.�������� ������������" << endl;
		cout << "2.������ �������������" << endl;
		cout << "3.������� ������������" << endl;
		cout << "4.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			system("cls");
			admin.set();
			adm.addLastElement(admin);
			adm.saveA("Admin.txt");
			system("pause");
			break; }
		case 2: {
			system("cls");
			adm.print();
			system("pause");
			break; }
		case 3: {
			system("cls");
			int del;
			cout << "������� ����� ������������, �������� ������� �������: ";
			del = onlyint();
			del++;
			cout << "�� �������:" << endl;
			adm.deleteElement(del);
			adm.saveA("Admin.txt");
			system("pause");
			break; }
		case 4:system("cls"); return; break;
		default:system("cls"); cout << "��� ������ ������ ����" << endl; break;
		}
	}
}
int orderMenu(List<Client> &lst, List<Product> &pro, List<Order> &ord,List<Courier> &cour) {
	Client client;
	Product product;
	Order order;
	Courier courier;
	while (1) {
		cout << "\t\t\t\t\t���� �������" << endl;
		if (lst.getSize() < 1 || pro.getSize() < 1 || cour.getSize()<1) {
			HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "1.�������� �����" << endl;
		}
		else {
			HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "1.�������� �����" << endl;
		}
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2.������ �������" << endl;
			cout << "3.��������� �����(��������)" << endl;
			cout << "4.����������� ������" << endl;
			cout << "5.���������� �������" << endl;
			cout << "6.����� �������" << endl;
			cout << "7.�������(������ - �������)" << endl;
			cout << "8.��������� ������� �� �������� ������" << endl;
			cout << "0.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			if (lst.getSize() < 1 || pro.getSize() < 1 || cour.getSize()<1) {
				system("cls");
				cout << "�� �� ������ �������� �����" << endl;
				break;
			}
			else {
				system("cls");
				client = lst.perebor(); product = pro.perebor(); system("cls"); order.set(client, product); system("cls"); ord.addLastElement(order); break;
			}
		}
		case 2: {
			system("cls"); ord.print(); system("pause"); break;
		}
		case 3: {
			system("cls"); 	int del;
			cout << "������� ����� ������, ������� ������� �������: ";
			del = onlyint();
			cout << "�� �������:" << endl;
			ord.deleteElement(del); system("pause");
			break;
		}
		case 4:break;
		case 5: {
			system("cls");
			ord.filtr();
			system("pause");
			break;
		}
		case 6: {
			system("cls");
			ord.search();
			system("pause");
			break;
		}
		case 7: {
			system("cls");
			ord.profit();
			system("pause");
			break; }
		case 8: {
			system("cls"); 	
			int del=0;
			courier=cour.perebor();
			order = ord.perebor(&del);
			order.addcour(courier);
			system("cls");
			ord.deleteElement(del);
			order.print(1);
			ord.addLastElement(order);
			system("pause");
			break;
		}
		case 0:return 0; break;
		}
	}
}
int editMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		system("cls");
		cout << "1.�������������� ��������" << endl;
		cout << "2.�������������� �������" << endl;
		cout << "3.�������������� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			system("cls");
			lst.edit();
			system("pause");
			break; }
		case 2: {
			system("cls");
			pro.edit();
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			cour.edit();
			system("pause");
			break; }
		case 4:system("cls"); return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int searchMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		system("cls");
		cout << "1.����� ��������" << endl;
		cout << "2.����� �������" << endl;
		cout << "3.����� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			system("cls");
			lst.search();
			system("pause");
			break; }
		case 2: {
			system("cls");
			pro.search();
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			cour.search();
			system("pause");
			break; }
		case 4:system("cls"); return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int delMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		system("cls");
		cout << "1.�������� ��������" << endl;
		cout << "2.�������� �������" << endl;
		cout << "3.�������� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			int del;
			lst.print();
			cout << "������� ����� �������, �������� ������� �������: ";
			del = onlyint();
			cout << "�� �������:" << endl;
			lst.deleteElement(del);
			system("pause");
			break; }
		case 2: {
			system("cls"); 	int del;
			pro.print();
			cout << "������� ����� ������, ������� ������� �������: ";
			del = onlyint();
			cout << "�� �������:" << endl;
			pro.deleteElement(del); system("pause");
			break;
		}
		case 3: {
			system("cls");
			int del;
			cour.print();
			cout << "������� ����� ������, ������� ������� �������: ";
			del = onlyint();
			cout << "�� �������:" << endl;
			cour.deleteElement(del); system("pause");
			break; }
		case 4:system("cls"); return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int printMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		system("cls");
		cout << "1.�������� ��������" << endl;
		cout << "2.�������� �������" << endl;
		cout << "3.�������� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			system("cls");
			lst.print();
			system("pause");
			break; }
		case 2: {
			system("cls"); pro.print(); system("pause");
			break;
		}
		case 3: {
			system("cls");
			cour.print();
			system("pause");
			break; }
		case 4:system("cls"); return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int addMenu(List<Client> &lst,List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		system("cls");
		cout << "1.���������� �������" << endl;
		cout << "2.���������� ������" << endl;
		cout << "3.���������� �������" << endl;
		cout << "4.�����" << endl;
		int x;
		x = onlyint();
		switch (x) {
		case 1: {
			system("cls");
			client.setMainClientInfo();
			lst.addLastElement(client);
			client.getMainClientInfo(); 
			system("pause"); 
			break; }
		case 2: {product.add();
			pro.addLastElement(product);
			product.print(1);
			product.print(3);
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			courier.setInfo();
			cour.addLastElement(courier);
			courier.print(1);
			courier.print(3);
			system("pause");
			break; }
		case 4:system("cls"); return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int menu(List<Client> &lst, List<Product> &pro,List<Order> &ord,List<Courier> &cour,List<Admin> &adm) {
	int a = 0;
	Client client;
	Product product;
	Order order;
	Courier courier;
	Admin admin;
	int x;
	while (1) {
		int i=ord.getSize();
		if (i != 0) {
			ord.check();
		}
		cout << "1.����������" << endl;
		cout << "2.��������" << endl;
		cout << "3.����������" << endl;
		cout << "4.���� ������(��������)" << endl;
		cout << "5.��������� � ����" << endl;
		cout << "6.�����" << endl;
		cout << "7.��������������" << endl;
		cout << "8.����������" << endl;
		cout << "9.���������� ������" << endl;
		cout << "10.���������� ��������������" << endl;
		cout << "0.�����" << endl;
		x = onlyint();
		switch (x) {
		case 1:
		{
			addMenu(lst,pro,cour);
			break;
		}
		case 2:
		{
			delMenu(lst,pro,cour);
			break;
		}
		case 3: {
			system("cls");
			lst.filtr();
			break;
		}
		case 4:
		{
			printMenu(lst,pro,cour);
			break;
		}
		case 5:
		{
			a = 1;
			lst.save("ClientDatabase.txt");
			pro.save("ProductDatabase.txt");
			ord.save("OrderDatabase.txt");
			cour.save("CourierDatabase.txt");
			adm.saveA("Admin.txt");
			break;
		}
		case 6: {
			searchMenu(lst,pro,cour);
			break;
		}
		case 7:editMenu(lst, pro, cour); break;
		case 8: {
			lst.sort();
			break;
		}
		case 9: {orderMenu(lst,pro,ord,cour); break; }
		case 0:
		{
			system("cls");
			if (a == 0) {
				while (1) {
					cout << "�� ������ ��������� ���������\n������� ���?" << endl;
					cout << "1.��" << endl;
					cout << "2.���" << endl;
					int x;
					x = onlyint();
					switch (x) {
					case 1: {
						lst.save("ClientDatabase.txt");
						pro.save("ProductDatabase.txt");
						ord.save("OrderDatabase.txt");
						cour.save("CourierDatabase.txt");
						adm.saveA("Admin.txt");
						return 0;
						break;
					}
					case 2:adm.saveA("Admin.txt"); return 0; break;
					default:system("cls"); cout << "��� ������ ������ ����" << endl; break;
					}
				}
			}
			return 0;
			break;
		}
		case 10:userMenu(adm); break;
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
BOOL WINAPI CtrlHandler(DWORD fdwCtrlType) {
	switch (fdwCtrlType)
	{
	case CTRL_CLOSE_EVENT:
		adm.saveA("Admin.txt");
		return TRUE;
	case CTRL_BREAK_EVENT:
		adm.saveA("Admin.txt");
		return TRUE;
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	system("color 0F");
	Admin admin;
	List<Client>lst;
	List<Product>pro;
	List<Order>ord;
	List<Courier>cour;
	Courier courier;
	Client client;
	Product product;
	Order order;
	SetConsoleCtrlHandler(CtrlHandler, TRUE);
	cour.downloadInfo(courier,"CourierDatabase.txt");
	ord.downloadInfo(order,"OrderDatabase.txt");
	lst.downloadInfo(client, "ClientDatabase.txt");
	pro.downloadInfo(product, "ProductDatabase.txt");
	adm.downloadInfoA(admin,"Admin.txt");
	while (1) {
		cout << "\t����� ���������� � ���������" << endl;
		cout << "1.����" << endl;
		cout << "2.�����" << endl<<endl;
		cout << "��� �����: ";
		int i;
		i = onlyint();
		switch (i) {
		case 1: {
			cout << "������� �����: ";
			char log[30];
			strcpy(log,onlystring(30));
			cout << "������� ������: ";
			char pas[30];
			strcpy(pas, onlystring(30));
			int i=adm.compare(log,pas); 
			if (i == 1) {
				system("cls");
				user(lst, pro, ord, cour, adm);
			}
			else if (i == 2) {
				system("cls");
				cout << "����������, �������������" << endl;
				menu(lst,pro,ord, cour,adm);
			}
			else { system("cls"); cout << "��������� ������������ ����� ������" << endl; }
			break; }
		case 2:adm.saveA("Admin.txt"); exit(0); break;
		default:system("cls"); cout << "��� ������  ������ ����"<<endl; break;
		}
	}
	system("pause");
}