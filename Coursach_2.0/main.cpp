#include "Header.h"
int editMenu(List<Client> &lst, List<Order> &ord) {
	Client client;
	Order order;
	while (1) {
		cout << "1.Редактирование клиентов" << endl;
		cout << "2.Редактирование заказов" << endl;
		cout << "3.Редактирование курьеров" << endl;
		cout << "4.Выход" << endl;
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
			ord.edit();
			system("pause");
			break;
		}
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int searchMenu(List<Client> &lst, List<Order> &ord) {
	Client client;
	Order order;
	while (1) {
		cout << "1.Поиск клиентов" << endl;
		cout << "2.Поиск заказов" << endl;
		cout << "3.Поиск курьеров" << endl;
		cout << "4.Выход" << endl;
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
			ord.search();
			system("pause");
			break;
		}
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int delMenu(List<Client> &lst, List<Order> &ord) {
	Client client;
	Order order;
	while (1) {
		cout << "1.Удаление клиентов" << endl;
		cout << "2.Удаление заказов" << endl;
		cout << "3.Удаление курьеров" << endl;
		cout << "4.Выход" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			int del;
			cout << "Введите номер клиента, которого желаете удалить: ";
			cin >> del;
			cout << "Вы удалили:" << endl;
			lst.deleteElement(del);
			system("pause");
			break; }
		case 2: {
			system("cls"); 	int del;
			cout << "Введите номер заказа, который желаете удалить: ";
			cin >> del;
			cout << "Вы удалили:" << endl;
			ord.deleteElement(del); system("pause");
			break;
		}
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int printMenu(List<Client> &lst, List<Order> &ord) {
	Client client;
	Order order;
	while (1) {
		cout << "1.Просмотр клиентов" << endl;
		cout << "2.Просмотр заказов" << endl;
		cout << "3.Просмоттр курьеров" << endl;
		cout << "4.Выход" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			lst.print();
			system("pause");
			break; }
		case 2: {
			system("cls"); ord.print(); system("pause");
			break;
		}
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int addMenu(List<Client> &lst,List<Order> &ord) {
	Client client;
	Order order;
	while (1) {
		cout << "1.Добавление клиента" << endl;
		cout << "2.Добавление заказа" << endl;
		cout << "3.Добавление курьера" << endl;
		cout << "4.Выход" << endl;
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
		case 2: {order.add(); 
			ord.addLastElement(order);
			order.print();
			system("pause");
			break;
		}
		case 3:break;
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int menu(List<Client> &lst, List<Order> &ord) {
	int a = 0;
	Client client;
	Order order;
	int x;
	while (1) {
		cout << "1.Добавление" << endl;
		cout << "2.Удаление" << endl;
		cout << "3.Фильтрация" << endl;
		cout << "4.База данных" << endl;
		cout << "5.Сохранить в файл" << endl;
		cout << "6.Поиск" << endl;
		cout << "7.Редактирование" << endl;
		cout << "8.Сортировка" << endl;
		cout << "0.Выход" << endl;
		cin >> x;
		switch (x) {
		case 1:
		{
			addMenu(lst,ord);
			break;
		}
		case 2:
		{
			delMenu(lst,ord);
			break;
		}
		case 3: {
			lst.filtr();
			break;
		}
		case 4:
		{
			printMenu(lst,ord);
			break;
		}
		case 5:
		{
			a = 1;
			lst.save("ClientDatabase.txt");
			ord.save("OrderDatabase.txt");
			break;
		}
		case 6:
		{
			searchMenu(lst,ord);
			break;
		}
		case 0:
		{
			if (a == 0) {
				while (1) {
					cout << "Вы забыли сохранить изменения\nСделать это?" << endl;
					cout << "1.Да" << endl;
					cout << "2.Нет" << endl;
					int x;
					cin >> x;
					switch (x) {
					case 1: {
						lst.save("ClientDatabase.txt");
						ord.save("OrderDatabase.txt");
						return 0;
						break;
					}
					case 2:return 0; break;
					default:system("cls"); cout << "Нет такого пункта меню" << endl; break;
					}
				}
			}
			return 0;
			break;
		}
		case 8:
			lst.sort();
			break;
		case 7:editMenu(lst,ord); break;
		default:
		{
			cout << "Выберите существующих пункт меню" << endl;
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
	List<Order>ord;
	Client client;
	Order order;
	lst.downloadInfo(client, "ClientDatabase.txt");
	ord.downloadInfo(order, "OrderDatabase.txt");
	admin.set();
	adm.push(admin);
	adm.save("Admin.txt");
	adm.downloadInfo(admin,"Admin.txt");
	adm.show();
	while (1) {
		cout << "1.Вход" << endl;
		cout << "2.Выход" << endl;
		int i;
		cin >> i;
		switch (i) {
		case 1: {
			cout << "Введите логин: ";
			char log[30];
			cin >> log;
			cout << "Введите пароль: ";
			char pas[30];
			cin >> pas;
			int i=adm.compare(log,pas); 
			if (i == 1) {
				system("cls");
				cout << "Вы не админ, пошли нахуй" << endl;
			}
			else if (i == 2) {
				system("cls");
				cout << "Ну привет, любимый" << endl;
				menu(lst,ord);
			}
			else { system("cls"); cout << "Проверьте правильность ввода данных" << endl; }
			break; }
		case 2:exit(0); break;
		default:system("cls"); cout << "Нет такого  пункта меню"; break;
		}
	}
	system("pause");
}