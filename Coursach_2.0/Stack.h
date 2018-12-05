template <typename H>
class Stack {
public:
	Stack() {
		size = 0;
		top = nullptr;
	};
	~Stack() { clearStack(); };
	void push(H data);
	void clearStack();
	void pop();
	void show();
	void downloadInfo(H data, char *path);
	void save(char *path);
	int compare(char *log, char *pas);
private:
	template<typename H>
	class NodeS {
	public:
		NodeS * pNext;
		H data;
		NodeS(H data = H(), NodeS *pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size; //количество элементов в стеке 
	NodeS<H> *top;
};




template <typename H>
void Stack<H>::push(H data) {
	if (top == nullptr) {
		top = new NodeS<H>(data);
	}
	else {
		NodeS<H> *p = new NodeS<H>(data, top);
		top = p;
	}
	size++;
}


template<typename H>
void Stack<H>::pop() {
	NodeS<H> *temp = top;
	top = top->pNext;
	delete temp;
	size--;
}

template<typename H>
void Stack<H>::clearStack() {
	while (size) {
		pop();
	}

}
template<typename H>
void Stack<H>::show() {
	NodeS<H> *p = top;
	while (p != NULL) {
		p->data.print();
		p = p->pNext;
	}
}
template<typename H>
void Stack<H>::downloadInfo(H data, char *path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is open" << endl;
		clearStack();
		while (fin.read((char*)&data, sizeof(H))) {
			push(data);
		}
	}
	fin.close();
}
template<typename H>
void Stack<H>::save(char *path) {
	ofstream fout;
	NodeS<H> *p = top;
	fout.open(path, ios_base::out | ios_base::trunc);
	if (!fout.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		while (p != NULL) {
			fout.write((char*)&p->data, sizeof(H));
			p = p->pNext;
		}
	}
	fout.close();
}
template<typename H>
int Stack<H>::compare(char *log,char *pas) {
	int i=0;
	{
		NodeS<H> *p = top;
		while (p != NULL)
		{
			i=p->data.compare(log,pas);
			if (i != NULL) {
				break;
			}
			p = p->pNext;
		}
	}
	return i;
}
