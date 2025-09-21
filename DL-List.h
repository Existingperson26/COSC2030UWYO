#ifndef DoubleLinked_H
#define DoubleLinked_H
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#ifndef TTT
#define TTT int
#endif

template <class T>
class Node {
	public:
		T data;
		Node<T>* next;
		Node<T>* prev;
};
template <class T>
class LList{
	private:
	       	Node<T>* head;
		Node<T>* tail;
	public:
		LList<T>();
		~LList<T>();
		void insertHead(Node<T>*);
		void insertTail(Node<T>*);
		void delH();
		void delT();
		void traverse();
		void backMove();
};

template <class T>
LList<T>::LList(){
        head = nullptr;
        tail = nullptr;
}

template <class T>
void LList<T>::insertHead(Node<T>* x){
	if (!head) {
        	head = tail = x;
        	x->next = nullptr;
        	x->prev = nullptr;
    	} else {
        	x->next = head;
        	x->prev = nullptr;
        	head->prev = x;
        	head = x;
	}
}
        

template <class T>
void LList<T>::insertTail(Node<T>* x){
	if (!tail){
		head = tail = x;
		x->next = nullptr;
		x->prev = nullptr;
	} else {
		x->next = nullptr;
		x->prev = tail;
		tail->next = x;
		tail = x;
	}
}

template <class T>
void LList<T>::delH(){
        if (head==nullptr){
                cout << "The list is empty" << endl;
        } else {
                Node<T>* temp = head;
                head = head->next;
		if (head){
			head->prev = nullptr;
		} else {
			tail = nullptr;
		}
                delete temp;
        }

}

template <class T>
void LList<T>::delT(){
        if (tail==nullptr){
                cout << "The list is empty" << endl;
        } else {
                Node<T>* temp = tail;
                tail = tail->prev;
		if (tail){
			tail->next = nullptr;
		} else {
			head = nullptr;
		}
                delete temp;
        }
}

template <class T>
void LList<T>::traverse(){
        if (head==nullptr){
                cout << "The list is empty" << endl;
        } else {
                Node<T>* curr = head;
                while (curr != nullptr){
                        cout << "[" << curr->data << "] ";
                        curr = curr -> next;
                }
                cout << endl;
        }
}

template <class T>
void LList<T>::backMove(){
        if (tail==nullptr){
                cout << "The list is empty" << endl;
        } else {
                Node<T>* curr = tail;
                while (curr != nullptr){
                        cout << "[" << curr->data << "] ";
                        curr = curr->prev;
                }
                cout << endl;
        }
}
template <class T>
LList<T>::~LList(){
        Node<T>* curr = head;
        while (curr != nullptr){
                Node<T>* temp = curr;
                curr = curr->next;
                delete temp;
        }
}


#endif

