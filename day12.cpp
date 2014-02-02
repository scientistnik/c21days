class Node
{
	pablic:
		Node(int number)
		void Add(int number):itsNum(number){}
	private:
		int itsNum;
		Node *prev, *next;
};

Node::Node(int number):
itsNum(number), next(0), prev(0)
{
}

Node::Add(int number)
{
	Node *Next = new Node(number);
	this->next = Next;
	Next->prev = this;
	Next->next = 0;
	this = Next;
}

int main(void)
{
	int xo[3][3]={0};

	Node expl(1);
	expl.Add(2);
	expl.Add(5);

	return 0;
}
