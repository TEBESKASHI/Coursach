#include "Header.h"
void Courier::setInfo() {
	cout << "Имя курьера: ";
	cin >> this->name;
	cout << "Фамилия курьера: ";
	cin >> this->surname;
	cout << "Возраст курьера: ";
	cin >> this->age;
	cout << "Стаж работы: ";
	cin >> this->experience;
}
void Courier::print() {
	cout << "\t\t\t\tИмя курьера: " << this->name << endl;
	cout << "\t\t\t\tФамилия курьера: " << this->surname << endl;
	cout << "\t\t\t\tВозраст курьера: " << this->age << endl;
	cout << "\t\t\t\tСтаж работы: " << this->experience << endl;
}
int Courier::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По Имени" << endl;
	cout << "2.По Фамилии" << endl;
	cout << "3.По возрасту" << endl;
	cout << "4.По стажу работы" << endl;
	cin >> choice;
	return choice;
}
void Courier::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->name, input) == 0) {
			print();
		}
		break;
	}
	case 2: {
		if (strcmp(this->surname, input) == 0) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->age == inputInteger) {
			print();
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->experience == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Courier::selectEditCriteria() {
	int choice;
	cout << "Что будем редактировать, простак?" << endl;
	cout << "1.Имя: " << endl;
	cout << "2.Фамилию" << endl;
	cout << "3.Возраст: " << endl;
	cout << "4.Стаж работы" << endl;
	cout << "5.Все" << endl;
	cin >> choice;
	return choice;
}
void Courier::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемое имя: " << this->name << endl;
		cin >> this->name;
		break;
	}
	case 2: {
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "Редактируемый возраст: " << this->age << endl;
		cin >> this->age;
		break;
	}
	case 4: {
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cin >> this->experience;
		break;
	}
	case 5: {
		cout << "Редактируемое имя: " << this->name << endl;
		cin >> this->name;
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cin >> this->surname;
		cout << "Редактируемый возраст: " << this->age << endl;
		cin >> this->age;
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cin >> this->experience;
		break;
	}
	}
}