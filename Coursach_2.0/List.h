//шаблон List
template <typename T>
class List {
public:
	List();
	~List();
	void addFirstElement(T data);
	void addLastElement(T data);
	void deleteFirstElement();
	void insertElement(T data, int index);
	void deleteElement(int index);
	void deleteLastElement();
	void clearList();
	int getSize() {return size;}
	//для перехода по добавленным элементам
	//index- номер возвращаемого элемента
	T & operator[](const int index);
	void downloadInfo(T data, char *path);
	void save(char *path);
	void print();
	void sort();
	void search();
	void edit();
	void filtr();
	T perebor() {
		Node<T> *p = first;
		print();
		int number;
		int a = 0;
		int k = getSize();
		cin >> number;
		number--;
		cout << endl;
		while(number >= k) {
			cout << "Нет такого номера, повторите ввод: ";
				cin >> number;
				number--;
			system("cls");
		}
		while (a != number) {
			p = p->pNext;
			a++;
		}
		return p->data;
	}
private:
	template<typename T>
	class Node {
	public:
		Node *pNext;
		T data;
		Node(T data = T(), Node *pNext = NULL) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size; //количество элементов в односвязном списке
	Node<T> *first;
};


template<typename T>
List<T>::List() {
	size = 0;
	first = NULL;
}

template<typename T>
List<T>::~List() {
	clearList();
}
template<typename T>
void List<T>::addLastElement(T data) {
	if (first == nullptr) {
		first = new Node<T>(data, first);
	}
	else {
		Node<T> *current = this->first;
		while (current->pNext != NULL) {
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}
template<typename T>
void List<T>::print() {
	{
		Node<T> *p = first;
		while (p != NULL)
		{
			p->data.print();
			p = p->pNext;
		}
	}
}
template<typename T>
void List<T>::sort() {
	{
		if (first != NULL) {
			Node<T> *p = first;
			Node<T> *pn = first;
			while (p->pNext != NULL)
			{
				pn = p->pNext;
				while (pn != NULL) {
					p->data.sort(p->data, pn->data);
					pn = pn->pNext;
				}
				p = p->pNext;
			}
		}
		else cout << "Нечего сортировать" << endl;
	}
}
template<typename T>
void List<T>::filtr() {
	{
		Node<T> *p = first;
		int choice = p->data.selectFiltrCriteria();
		cout << "Введите границы" << endl;
		int minAge;
		int maxAge;
		cout << "ОТ: ";
		cin >> minAge;
		cout << "До: ";
		cin >> maxAge;
		if (minAge > maxAge) {
			int temp;
			temp = minAge;
			minAge = maxAge;
			maxAge = temp;
		}
		p->data.filtr(choice, 1, minAge, maxAge);
			while (p->pNext != NULL)
			{
				p->data.filtr(choice, 2, minAge, maxAge);
				p = p->pNext;
			}
			p->data.filtr(choice, 3, minAge, maxAge);
	}
}
template<typename T>
void List<T>::edit() {
	{
		Node<T> *p = first;
		int choice=p->data.selectEditCriteria();
		cout << "Кого хотите изменить?: ";
		int number;
		int h = 0;
		cin >> number;
		number--;
		while (h!=number)
		{
			p = p->pNext;
			h++;
		}
		p->data.edit(choice);
	}
}
template<typename T>
void List<T>::search() {
	{
		Node<T> *p = first;
		int choice;
		choice = p->data.selectSearchCriteria();
		char input[30];
		cout << "Введите данные для поиска: ";
		cin >> input;
		while (p != NULL)
		{
			p->data.search(choice, input);
			p = p->pNext;
		}
	}
}
//перегрузка [] для итераций
template<typename T>
T & List<T>::operator[](const int index) {
	int counter = 0;
	Node<T> *current = this->first;
	while (current != nullptr) {
		//если счетчик дошел до нужного индекса,то
		//достаем из этого элемента data
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

//удаление первого элемиента списка
template<typename T>
void List<T>::deleteFirstElement() {
	Node<T> *temp = first;
	if (temp->pNext != NULL) {
		first = first->pNext;
		delete temp;
		size--;
	}
	else {
		delete temp;
		first = NULL;
		size = 0;
	}
}

//полная очистка списка
template<typename T>
void List<T>::clearList()  {
	while (size) {
		deleteFirstElement();
	}
}

//добавление в начало списка
template<typename T>
void List<T>::addFirstElement(T data) {
	first = new Node<T>(data, first);
	size++;
}

//вставка элемента в список
template<typename T>
void List<T>::insertElement(T data, int index) {
	if (index == 0) {
		cout << "Некорректный ввод" << endl;
	}
	else if (index == 1) {
		addFirstElement(data);
	}
	else {
		Node<T> *prevElem = this->first;
		//находим предшествующий и делаем вставку через некст
		for (int i = 1; i < index - 1; i++) {
			prevElem = prevElem->pNext;
		}
		Node<T> *newNode = new Node<T>(data, prevElem->pNext);
		prevElem->pNext = newNode;
		size++;
	}
}
//удаление элемента по индексу
template<typename T>
void List<T>::deleteElement(int index) {
	index--;
	if (index < 0) {
		cout << "Некорректный ввод" << endl;
	}
	else if (index == 0) {
		first->data.print();
		deleteFirstElement();
	}
	else {
		Node<T> *prevElem = this->first;
		//находим предшествующий и делаем указатель на удаляемый эл.
		for (int i = 1; i < index - 1; i++) {
			prevElem = prevElem->pNext;
		}
		Node<T> *toDelete = prevElem->pNext;
		prevElem->pNext = toDelete->pNext;
		toDelete->data.print();
		delete toDelete;
		size--;
	}
}

//удалить последний элемент списка
template<typename T>
void List<T>::deleteLastElement() {
	deleteElement(size);
}

//загрузка из файла
template<typename T>
void List<T>::downloadInfo(T data,char *path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is open" << endl;
		clearList();
		while (fin.read((char*)&data, sizeof(T))) {
			addLastElement(data);
		}
	}
	fin.close();
}

//сохранение в файл
template<typename T>
void List<T>::save(char *path) {
	ofstream fout;
	Node<T> *p = first;
	fout.open(path, ios_base::out | ios_base::trunc);
	if (!fout.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is open" << endl;
		while (p != NULL) {
			fout.write((char*)&p->data, sizeof(T));
			p = p->pNext;
		}
	}
	fout.close();
}

