//������ List
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
	//��� �������� �� ����������� ���������
	//index- ����� ������������� ��������
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
			cout << "��� ������ ������, ��������� ����: ";
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
	int size; //���������� ��������� � ����������� ������
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
		else cout << "������ �����������" << endl;
	}
}
template<typename T>
void List<T>::filtr() {
	{
		Node<T> *p = first;
		int choice = p->data.selectFiltrCriteria();
		cout << "������� �������" << endl;
		int minAge;
		int maxAge;
		cout << "��: ";
		cin >> minAge;
		cout << "��: ";
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
		cout << "���� ������ ��������?: ";
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
		cout << "������� ������ ��� ������: ";
		cin >> input;
		while (p != NULL)
		{
			p->data.search(choice, input);
			p = p->pNext;
		}
	}
}
//���������� [] ��� ��������
template<typename T>
T & List<T>::operator[](const int index) {
	int counter = 0;
	Node<T> *current = this->first;
	while (current != nullptr) {
		//���� ������� ����� �� ������� �������,��
		//������� �� ����� �������� data
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

//�������� ������� ��������� ������
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

//������ ������� ������
template<typename T>
void List<T>::clearList()  {
	while (size) {
		deleteFirstElement();
	}
}

//���������� � ������ ������
template<typename T>
void List<T>::addFirstElement(T data) {
	first = new Node<T>(data, first);
	size++;
}

//������� �������� � ������
template<typename T>
void List<T>::insertElement(T data, int index) {
	if (index == 0) {
		cout << "������������ ����" << endl;
	}
	else if (index == 1) {
		addFirstElement(data);
	}
	else {
		Node<T> *prevElem = this->first;
		//������� �������������� � ������ ������� ����� �����
		for (int i = 1; i < index - 1; i++) {
			prevElem = prevElem->pNext;
		}
		Node<T> *newNode = new Node<T>(data, prevElem->pNext);
		prevElem->pNext = newNode;
		size++;
	}
}
//�������� �������� �� �������
template<typename T>
void List<T>::deleteElement(int index) {
	index--;
	if (index < 0) {
		cout << "������������ ����" << endl;
	}
	else if (index == 0) {
		first->data.print();
		deleteFirstElement();
	}
	else {
		Node<T> *prevElem = this->first;
		//������� �������������� � ������ ��������� �� ��������� ��.
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

//������� ��������� ������� ������
template<typename T>
void List<T>::deleteLastElement() {
	deleteElement(size);
}

//�������� �� �����
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

//���������� � ����
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

