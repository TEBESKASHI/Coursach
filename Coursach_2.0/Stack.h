template<typename H>
class Stack {
public:
	Stack();
	~Stack();
	void push(H data);
	void pop();
	void show();
	void downloadInfo(H data, char *path);
	void save(char *path);
	int compare(char *log, char *pas);
	void clearList();
private:
	template<typename H>
	class NodeS {
	public:
		NodeS * pNext;
		H data;
		NodeS(H data = H(),NodeS *pNext = NULL) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	NodeS<H> *top;
};
template<typename H>
Stack<H>::Stack() {
	top = NULL;
}

template<typename H>
void Stack<H>::clearList() {
	NodeS<H> *p;
	while (top != NULL)
	{
		p = top;
		top = top->pNext;
		delete p;
	}
}
template<typename H>
Stack<H>::~Stack() {
	NodeS<H> *p;
	while (top != NULL)
	{
		p = top;
		top = top->pNext;
		delete p;
	}
}
template<typename H>
void Stack<H>::push(H data) {
	NodeS<H> *cur = new NodeS<H>(data);
	top = cur;
}
template<typename H>
void Stack<H>::pop() {
	NodeS<H> *p = top->pNext;
	delete top;
	top = p;
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
		clearList();
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
		while (p != NULL || i==0)
		{
			i=p->data.compare(log,pas);
			p = p->pNext;
		}
	}
	return i;
}
