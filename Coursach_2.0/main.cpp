#include "Header.h"
void userMenu(List<Admin> &adm) {
	Admin admin;
	while (1) {
		system("cls");
		cout << "1.Добавить пользователя" << endl;
		cout << "2.Список пользователей" << endl;
		cout << "3.Удалить пользователя" << endl;
		cout << "4.Выход" << endl;
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
			cout << "Введите номер пользователя, которого желаете удалить: ";
			cin >> del;
			del++;
			cout << "Вы удалили:" << endl;
			adm.deleteElement(del);
			system("pause");
			break; }
		case 4:return; break;
		default:system("cls"); cout << "Нет такого пункта меню" << endl; break;
		}
	}
}
int orderMenu(List<Client> &lst, List<Product> &pro, List<Order> &ord,List<Courier> &cour) {
	Client client;
	Product product;
	Order order;
	Courier courier;
	while (1) {
		cout << "\t\t\t\t\tМеню заказов" << endl;
		cout << "1.Оформить заказ" << endl;
		cout << "2.Список заказов" << endl;
		cout << "3.Завершить заказ( досрочно)" << endl;
		cout << "4.Сортировать заказы" << endl;
		cout << "5.Фильтрация заказов" << endl;
		cout << "6.Поиск заказов" << endl;
		cout << "7.Прибыль" << endl;
		cout << "8.Назначить курьера на заказ" << endl;
		cout << "0.Выход" << endl;
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
			cout << "Введите номер заказа, который желаете удалить: ";
			cin >> del;
			cout << "Вы удалили:" << endl;
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
		cout << "1.Редактирование клиентов" << endl;
		cout << "2.Редактирование товаров" << endl;
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
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int searchMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.Поиск клиентов" << endl;
		cout << "2.Поиск товаров" << endl;
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
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int delMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.Удаление клиентов" << endl;
		cout << "2.Удаление товаров" << endl;
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
			cout << "Введите номер товара, который желаете удалить: ";
			cin >> del;
			cout << "Вы удалили:" << endl;
			pro.deleteElement(del); system("pause");
			break;
		}
		case 3: {
			system("cls");
			int del;
			cout << "Введите номер товара, который желаете удалить: ";
			cin >> del;
			cout << "Вы удалили:" << endl;
			cour.deleteElement(del); system("pause");
			break; }
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int printMenu(List<Client> &lst, List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.Просмотр клиентов" << endl;
		cout << "2.Просмотр товаров" << endl;
		cout << "3.Просмотр курьеров" << endl;
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
			system("cls"); pro.print(); system("pause");
			break;
		}
		case 3: {
			system("cls");
			cour.print();
			system("pause");
			break; }
		case 4:return 0; break;
		default:system("cls"); cout << "Нет такого пункта меню"; break;
		}
	}
}
int addMenu(List<Client> &lst,List<Product> &pro,List<Courier> &cour) {
	Client client;
	Product product;
	Courier courier;
	while (1) {
		cout << "1.Добавление клиента" << endl;
		cout << "2.Добавление товара" << endl;
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
		default:system("cls"); cout << "Нет такого пункта меню"; break;
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
		cout << "1.Добавление" << endl;
		cout << "2.Удаление" << endl;
		cout << "3.Фильтрация" << endl;
		cout << "4.База данных" << endl;
		cout << "5.Сохранить в файл" << endl;
		cout << "6.Поиск" << endl;
		cout << "7.Редактирование" << endl;
		cout << "8.Сортировка" << endl;
		cout << "9.Оформить заказ" << endl;
		cout << "10.Управление пользователями" << endl;
		cout << "0.Выход" << endl;
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
					cout << "Вы забыли сохранить изменения\nСделать это?" << endl;
					cout << "1.Да" << endl;
					cout << "2.Нет" << endl;
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
		case 7:editMenu(lst,pro,cour); break;
		case 10:userMenu(adm); break;
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
void setcur(int x, int y)//установка курсора на позицию  x y 
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
				menu(lst,pro,ord, cour,adm);
			}
			else { system("cls"); cout << "Проверьте правильность ввода данных" << endl; }
			break; }
		case 2:adm.saveA("Admin.txt"); exit(0); break;
		default:system("cls"); cout << "Нет такого  пункта меню"; break;
		}
	}
	system("pause");
}