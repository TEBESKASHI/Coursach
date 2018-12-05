#include "Header.h"
void Order::add() {
	cout << "Введите название заказа: ";
	cin >> this->orderName;
	cout << "Введите код клиента: ";
	cin >> this->clientCode;
	cout << "Введите стоимость заказа: ";
	cin >> this->OrderCost;
	cout << "Введите стоимость доставки: ";
	cin >> this->DeliveryCost;
}
void Order::print() {
	cout << "Название заказа: " << this->orderName << endl;
	cout << "Код клиента: " << this->clientCode << endl;
	cout << "Стоимость заказа: " << this->OrderCost << endl;
	cout << "Стоимость доставки: " << this->DeliveryCost << endl;
}
int Order::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По названию заказа" << endl;
	cout << "2.По коду клиента" << endl;
	cout << "3.По стоимости заказа" << endl;
	cout << "4.По стоимости доставки" << endl;
	cin >> choice;
	return choice;
}
void Order::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->orderName, input) == 0) {
			print();
		}
		break;
	}
	case 2:
	{
		int inputInteger = atoi(input);
		if (this->clientCode == inputInteger) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->OrderCost == inputInteger) {
			print();
		}
		break;
	}
	case 4:
	{
		int inputInteger = atoi(input);
		if (this->DeliveryCost == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Order::selectEditCriteria() {
	int choice;
	cout << "Что будем редактировать, простак?" << endl;
	cout << "1.Название заказа: "  << endl;
	cout << "2.Код клиента: "  << endl;
	cout << "3.Стоимость заказа: "  << endl;
	cout << "4.Стоимость доставки: "  << endl;
	cout << "5.Вcе" << endl;
	cin >> choice;
	return choice;
}
void Order::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемый заказ: " << this->orderName << endl;
		cin >> this->orderName;
		break;
	}
	case 2:
	{
		cout << "Редактируемый код клиента: " << this->clientCode << endl;
		cin >> this->clientCode;
		break;
	}
	case 3:
	{
		cout << "Редактируемая цена заказа: " << this->OrderCost << endl;
		cin >> this->OrderCost;
		break;
	}
	case 4:
	{
		cout << "Редактируемая цена доставки: " << this->DeliveryCost << endl;
		cin >> this->DeliveryCost;
		break;
	}
	case 5: {
		cout << "Редактируемый заказ: " << this->orderName << endl;
		cin >> this->orderName;
		cout << "Редактируемый код клиента: " << this->clientCode << endl;
		cin >> this->clientCode;
		cout << "Редактируемая цена заказа: " << this->OrderCost << endl;
		cin >> this->OrderCost;
		cout << "Редактируемая цена доставки: " << this->DeliveryCost << endl;
		cin >> this->DeliveryCost;
		break;
	}
	}
}