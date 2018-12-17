#include "Header.h"

//добавление курьера
void Courier::setInfo() {
	cout << "Имя курьера: ";
	strcpy(this->name, onlystring(20));
	cout << "Фамилия курьера: ";
	strcpy(this->surname, onlystring(20));
	cout << "Возраст курьера: ";
	this->age = onlyint();
	cout << "Стаж работы: ";
	this->experience = onlyint();
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
	choice = onlyint();
	return choice;
}
int Courier::SelectSortCriteria() {
	cout << "Сортировать по имени курьера" << endl;
	cout << "Сортировать по фамилии курьера" << endl;
	cout << "Сортировать по возрасту курьера" << endl;
	cout << "Сортировать по стажу курьера" << endl;
	int choice;
	choice = onlyint();
	return choice;
}
bool exp(int left, int right) {
	return left < right;
}
bool ages1(int left, int right) {
	return left > right;
}
bool surnames1(char left[30], char right[30]) {
	return strcmp(left, right)>0;
}
bool names1(char left[30], char right[30]) {
	return strcmp(left, right) > 0;
}
void Courier::sort(Courier &obj, Courier &obj1, int choice) {
	switch (choice) {
	case 1: {if (names1(obj.name, obj1.name)) {
		std::swap(obj.name, obj1.name);
		std::swap(obj.surname, obj1.surname);
		std::swap(obj.age, obj1.age);
		std::swap(obj.experience, obj1.experience);
	}
			break;
	}
	case 2: {if (surnames1(obj.surname, obj1.surname)) {
		std::swap(obj.name, obj1.name);
		std::swap(obj.surname, obj1.surname);
		std::swap(obj.age, obj1.age);
		std::swap(obj.experience, obj1.experience);
	}
			break;
	}
	case 3: {if (ages1(obj.age, obj1.age)) {
		std::swap(obj.name, obj1.name);
		std::swap(obj.surname, obj1.surname);
		std::swap(obj.age, obj1.age);
		std::swap(obj.experience, obj1.experience);
	}
			break;
	}
	case 4: {if (exp(obj.experience, obj1.experience)) {
		std::swap(obj.name, obj1.name);
		std::swap(obj.surname, obj1.surname);
		std::swap(obj.age, obj1.age);
		std::swap(obj.experience, obj1.experience);
	}
			break;
	}
	}
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
	choice = onlyint();
	return choice;
}

//функция редактирования информации о курьере
void Courier::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Новое имя: ";
		strcpy(this->name, onlystring(20));
		break;
	}
	case 2: {
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Новая фамилия: ";
		strcpy(this->surname, onlystring(20));
		break;
	}
	case 3:
	{
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Новый возраст: ";
		this->age = onlyint();
		break;
	}
	case 4: {
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cout << "Новый стаж работы: ";
		this->experience = onlyint();
		break;
	}
	case 5: {
		cout << "Редактируемое имя: " << this->name << endl;
		cout << "Новое имя: ";
		strcpy(this->name, onlystring(20));
		cout << "Редактируемая фамилия: " << this->surname << endl;
		cout << "Новая фамилия: ";
		strcpy(this->surname, onlystring(20));
		cout << "Редактируемый возраст: " << this->age << endl;
		cout << "Новый возраст: ";
		this->age = onlyint();
		cout << "Редактируемый стаж работы: " << this->experience << endl;
		cout << "Новый стаж работы: ";
		this->experience = onlyint();
		break;
	}
	}
}