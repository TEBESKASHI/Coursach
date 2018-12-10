#include "Header.h"

//добавление курьера
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

//вывод списка курьеров в табличном виде
void Courier::print(int a) {
	if (a == 1) {
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
		cout << "|      Имя     |" << "    Фамилия   |" << " Возраст |" << " Стаж работы |" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 2) {
		cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 3) {
		cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
		cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
	}
	
}

//выбор критерия для поиска курьера
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

//функция поиска курьера
void Courier::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
		cout << "|      Имя     |" << "    Фамилия   |" << " Возраст |" << " Стаж работы |" << endl;
		cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
	}
	if (a == 2) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 2: {
			if (strcmp(this->surname, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		case 4:
		{
			int inputInteger = atoi(input);
			if (this->experience == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "|``````````````|" << "``````````````|" << "`````````|" << "`````````````|" << endl;
			}
			break;
		}
		}
	}
	if (a == 3) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 2: {
			if (strcmp(this->surname, input) == 0) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		case 4:
		{
			int inputInteger = atoi(input);
			if (this->experience == inputInteger) {
				cout << "|" << setw(14) << this->name << "|" << setw(14) << this->surname << "|" << setw(9) << this->age << "|" << setw(13) << this->experience << "|" << endl;
				cout << "````````````````" << "```````````````" << "``````````" << "``````````````" << endl;
			}
			break;
		}
		}
	}
}

//выбор криетрия для редактирования
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

//функция редактирования информации о курьере
void Courier::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Новое имя: ";
		cin >> this->name;
		break;
	}
	case 2: {
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Новая фамилия: ";
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Новый возраст: ";
		cin >> this->age;
		break;
	}
	case 4: {
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cout << "Новый стаж работы: ";
		cin >> this->experience;
		break;
	}
	case 5: {
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Новое имя: ";
		cin >> this->name;
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Новая фамилия: ";
		cin >> this->surname;
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Новый возраст: ";
		cin >> this->age;
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cout << "Новый стаж работы: ";
		cin >> this->experience;
		break;
	}
	}
}