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
private:
	template<typename T>
	class Node {
	public:
		Node *pNext;
		T data;
		Node(T data = T(), Node *pNext = nullptr) {
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
	first = nullptr;
}

template<typename T>
List<T>::~List() {
	clearList();
}

//���������� � ����� ������
template<typename T>
void List<T>::addLastElement(T data) {
	if (first == nullptr) {
		first = new Node<T>(data);
	}
	else {
		Node<T> *current = this->first;
		while (current->pNext != nullptr) {
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
		Node<T> *p = first;
		while (p != NULL)
		{
			p->data.sort(true);
			p = p->pNext;
		}
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
	first = first->pNext;
	delete temp;
	size--;
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

