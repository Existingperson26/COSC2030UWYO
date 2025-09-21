#include<iostream>
using namespace std;
#include <string>
#include "DL-List.h"

int main(){
	int selection;
	TTT item;

	LList<TTT>* L = new LList<TTT>();
	Node<TTT>* x;
do{
	L->traverse();
	cout << "Please make a selection." << endl << endl << "1: Insert data at head node" << endl << "2: Insert data at tail node" << endl <<"3: Delete head node" << endl << "4: Delete tail node" << endl << "5: Traverse forward through the list" << endl << "6: Traverse backwards through the list" << endl << "7: Exit program" << endl << endl;
	cout << "Your selection: ";
	cin >> selection;
	cout << endl;
	if (selection > 7){
		do {
		cout << "Warning! Invalid selection! Please input a number from 1 to 7!";
		cin >> selection;
		} while(selection > 7);
	}
	switch(selection){
		case 1: cout << "Enter data to insert at the head: ";
			cin >> item;
			x = new Node<TTT>();
			x->data = item;
			x->next = nullptr;
			L->insertHead(x);
			break;
		case 2: cout << "Enter data to insert at the tail: ";
			cin >> item;
			x = new Node<TTT>();
			x->data = item;
			x->prev = nullptr;
			L->insertTail(x);
			break;
		case 3: L->delH();
			break;
		case 4: L->delT();
			break;
		case 5: L->traverse();
			break;
		case 6: L->backMove();
			break;
	}
} while (selection != 7);
delete L;
return 0;
}
