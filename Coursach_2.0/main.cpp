#include "Header.h"
int orderMenu(List<Client> &lst, List<Product> &pro, List<Order> &ord) {
	Client client;
	Product product;
	Order order;
	while (1) {
		cout << "\t\t\t\t\t���� �������" << endl;
		cout << "1.�������� �����" << endl;
		cout << "2.������ �������" << endl;
		cout << "3.��������� �����( ��������)" << endl;
		cout << "4.����������� ������" << endl;
		cout << "5.���������� �������" << endl;
		cout << "6.����� �������" << endl;
		cout << "0.�����" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			client = lst.perebor(); product = pro.perebor(); order.set(client, product); ord.addLastElement(order); break;
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
		case 0:return 0; break;
		}
	}
}
int editMenu(List<Client> &lst, List<Product> &pro) {
	Client client;
	Product product;
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
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int searchMenu(List<Client> &lst, List<Product> &pro) {
	Client client;
	Product product;
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
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int delMenu(List<Client> &lst, List<Product> &pro) {
	Client client;
	Product product;
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
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int printMenu(List<Client> &lst, List<Product> &pro) {
	Client client;
	Product product;
	while (1) {
		cout << "1.�������� ��������" << endl;
		cout << "2.�������� �������" << endl;
		cout << "3.��������� ��������" << endl;
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
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int addMenu(List<Client> &lst,List<Product> &pro) {
	Client client;
	Product product;
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
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "��� ������ ������ ����"; break;
		}
	}
}
int menu(List<Client> &lst, List<Product> &pro,List<Order> &ord) {
	int a = 0;
	Client client;
	Product product;
	Order order;
	int x;
	while (1) {
		cout << "1.����������" << endl;
		cout << "2.��������" << endl;
		cout << "3.����������" << endl;
		cout << "4.���� ������" << endl;
		cout << "5.��������� � ����" << endl;
		cout << "6.�����" << endl;
		cout << "7.��������������" << endl;
		cout << "8.����������" << endl;
		cout << "9.�������� �����" << endl;
		cout << "0.�����" << endl;
		cin >> x;
		switch (x) {
		case 1:
		{
			addMenu(lst,pro);
			break;
		}
		case 2:
		{
			delMenu(lst,pro);
			break;
		}
		case 3: {
			lst.filtr();
			break;
		}
		case 4:
		{
			printMenu(lst,pro);
			break;
		}
		case 5:
		{
			a = 1;
			lst.save("ClientDatabase.txt");
			pro.save("ProductDatabase.txt");
			ord.save("OrderDatabase.txt");
			break;
		}
		case 6:
		{
			searchMenu(lst,pro);
			break;
		}
		case 9: {orderMenu(lst,pro,ord); break; }
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
						return 0;
						break;
					}
					case 2:return 0; break;
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
		case 7:editMenu(lst,pro); break;
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
	List<Client>lst;
	List<Product>pro;
	List<Order>ord;
	Client client;
	Product product;
	Order order;
	ord.downloadInfo(order,"OrderDatabase.txt");
	lst.downloadInfo(client, "ClientDatabase.txt");
	pro.downloadInfo(product, "ProductDatabase.txt");
	admin.set();
	adm.push(admin);
	adm.save("Admin.txt");
	adm.downloadInfo(admin,"Admin.txt");
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
				menu(lst,pro,ord);
			}
			else { system("cls"); cout << "��������� ������������ ����� ������" << endl; }
			break; }
		case 2:exit(0); break;
		default:system("cls"); cout << "��� ������  ������ ����"; break;
		}
	}
	system("pause");
}