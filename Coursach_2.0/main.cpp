#include "Header.h"
void userMenu(List<Admin> &adm) {
	Admin admin;
	while (1) {
		system("cls");
		cout << "1.�������� ������������" << endl;
		cout << "2.������ �������������" << endl;
		cout << "3.������� ������������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			admin.set();
			adm.addLastElement(admin);
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
			cin >> del;
			del++;
			cout << "�� �������:" << endl;
			adm.deleteElement(del);
			system("pause");
			break; }
		case 4:return; break;
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
		cout << "1.�������� �����" << endl;
		cout << "2.������ �������" << endl;
		cout << "3.��������� �����( ��������)" << endl;
		cout << "4.����������� ������" << endl;
		cout << "5.���������� �������" << endl;
		cout << "6.����� �������" << endl;
		cout << "7.�������" << endl;
		cout << "8.��������� ������� �� �����" << endl;
		cout << "0.�����" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			client = lst.perebor(); product = pro.perebor(); system("cls"); order.set(client, product); system("cls"); ord.addLastElement(order); break;
		}
		case 2: {
			system("cls"); ord.print(); system("pause"); break;
		}
		case 3: {
			system("cls"); 	int del;
			cout << "������� ����� ������, ������� ������� �������: ";
			cin >> del;
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
			order.print();
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
		cout << "1.�������������� ��������" << endl;
		cout << "2.�������������� �������" << endl;
		cout << "3.�������������� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
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
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int searchMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.����� ��������" << endl;
		cout << "2.����� �������" << endl;
		cout << "3.����� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
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
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int delMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
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
			cout << "������� ����� �������, �������� ������� �������: ";
			cin >> del;
			cout << "�� �������:" << endl;
			lst.deleteElement(del);
			system("pause");
			break; }
		case 2: {
			system("cls"); 	int del;
			cout << "������� ����� ������, ������� ������� �������: ";
			cin >> del;
			cout << "�� �������:" << endl;
			pro.deleteElement(del); system("pause");
			break;
		}
		case 3: {
			system("cls");
			int del;
			cout << "������� ����� ������, ������� ������� �������: ";
			cin >> del;
			cout << "�� �������:" << endl;
			cour.deleteElement(del); system("pause");
			break; }
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int printMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.�������� ��������" << endl;
		cout << "2.�������� �������" << endl;
		cout << "3.�������� ��������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
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
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int addMenu(List<Client> &lst,List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.���������� �������" << endl;
		cout << "2.���������� ������" << endl;
		cout << "3.���������� �������" << endl;
		cout << "4.�����" << endl;
		int x;
		cin >> x;
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
			product.print();
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			courier.setInfo();
			cour.addLastElement(courier);
			courier.print();
			system("pause");
			break; }
		case 4:return 0; break;
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
		cout << "4.���� ������" << endl;
		cout << "5.��������� � ����" << endl;
		cout << "6.�����" << endl;
		cout << "7.��������������" << endl;
		cout << "8.����������" << endl;
		cout << "9.�������� �����" << endl;
		cout << "10.���������� ��������������" << endl;
		cout << "0.�����" << endl;
		cin >> x;
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
		case 6:
		{
			searchMenu(lst,pro,cour);
			break;
		}
		case 9: {orderMenu(lst,pro,ord,cour); break; }
		case 0:
		{
			if (a == 0) {
				while (1) {
					cout << "�� ������ ��������� ���������\n������� ���?" << endl;
					cout << "1.��" << endl;
					cout << "2.���" << endl;
					int x;
					cin >> x;
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
		case 8:
			lst.sort();
			break;
		case 7:editMenu(lst,pro,cour); break;
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
void setcur(int x, int y)//��������� ������� �� �������  x y 
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
};
BOOL WINAPI CtrlHandler(DWORD fdwCtrlType) {
	switch (fdwCtrlType)
	{ 
	case CTRL_CLOSE_EVENT:
		Beep(600, 200);
		system("cls");
		string str="";
		while (str.length()< 35) {
			setcur(0, 0);
			Sleep(70);
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t"<<str;
			str += "||";
		}
		return TRUE;
	}
}
int main() {
	string str = "";
	while (str.length()< 35) {
		setcur(0, 0);
		Sleep(70);
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << str;
		str += "||";
	}
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	system("color 0F");
	Admin admin;
	List<Admin>adm;
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
	adm.print();
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
				menu(lst,pro,ord, cour,adm);
			}
			else { system("cls"); cout << "��������� ������������ ����� ������" << endl; }
			break; }
		case 2:adm.saveA("Admin.txt"); exit(0); break;
		default:system("cls"); cout << "��� ������  ������ ����"; break;
		}
	}
	system("pause");
}