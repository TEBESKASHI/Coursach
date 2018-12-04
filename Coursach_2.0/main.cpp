#include "Header.h"
int menu() {
	Client client;
	List<Client>lst;
	int x;
	while (1) {
		cout << "1.Добавление клиента в начало списка" << endl;
		cout << "2.Добавление клиента в конец списка" << endl;
		cout << "3.Удаление" << endl;
		cout << "4.Количество клиентов" << endl;
		cout << "5.Чтение из файла" << endl;
		cout << "6.Показать список клиентов" << endl;
		cout << "7.Сохранить в файл" << endl;
		cout << "8.Поиск" << endl;
		cout << "0.Выход" << endl;
		cout << "9.Редактирование" << endl;
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
		//	cout << "Введите номер клиента, которого желаете удалить: ";
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
			cout << "Количество клиентов: " << lst.getSize() << endl;
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
	admin.set();
	adm.push(admin);
	admin.set();
	adm.push(admin);
	admin.set();
	adm.push(admin);
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
				menu();
			}
			else { system("cls"); cout << "Проверьте правильность ввода данных" << endl; }
			break; }
		case 2:exit(0); break;
		default:system("cls"); cout << "Нет такого  пункта меню"; break;
		}
	}
	system("pause");
}