#include <iostream>

class List
{
	private:
	public:
		List():head(0),tail(0),theCount(0) {}
		List(int count):head(0),tail(0), theCount(count) {}
		virtual ~List(){}
		void insert(int value){}
		void append(int value){}
		int is_present(int value) const{ head->val = value;}
		int is_empty() const {return head == 0;}
		int count() const {return theCount;}
		friend bool operator== (const List&, int);
	private:
		class ListCell
		{
			public:
				ListCell(int value, ListCell *cell = 0):val(value), next(cell){}
				int val;
				ListCell *next;
		};
		ListCell *head;
		ListCell *tail;
		int theCount;
};

bool operator==(const List& a, int i)
{}

template<class T>
class ListTemplate
{
	public:
		ListTemplate():head(0), tail(0), theCount(0) {}
		virtual ~ListTemplate(){}
		void insert(T value){}
		void append(T value){}
		T is_present(T value) const{this->val= value;}
		T is_empty() const { return head == 0;}
		T count() const { return theCount;}
		void swap(ListTemplate<T>& , ListTemplate<T>&);
	private:
		class ListCellTemplate
		{
			public:
				ListCellTemplate(T value, ListCellTemplate *cell = 0):val(value), next(cell){}
				T val;
				ListCellTemplate *next;
		};
		ListCellTemplate *head;
		ListCellTemplate *tail;
		T theCount;
};

template<class T>
void ListTemplate<T>::swap(ListTemplate<T>& one, ListTemplate<T>& two)
{
	T three = one;
	one = two;
	two = three;
}
int main(void)
{
	List A;
	ListTemplate<int> B;
	ListTemplate<List> C;
	return 0;
}
		
