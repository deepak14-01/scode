#include<iostream>
// #include <cstdlib>
using namespace std;

class node{
public:
	node * prev;
	int data;
	node * next;
	node(int data){
		this->prev = nullptr;
		this->data = data;
		this->next = nullptr;
	}	
};

class dlinked_list{
public:
	node *head;
	node *tail;
	int length = 0;

	dlinked_list(){		//constructor for head and tail
		this->head = nullptr;
		this->tail = head;
	}
	dlinked_list(int data){
		node *newNode = new node(data);
		this->head = newNode;
		this->tail = head;
	}
	void insert_at_beggining(int data){
		node *newNode = new node(data);
		if (head==nullptr){
			head = newNode;
			tail = head;
		}

		else{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
		this->length++;
	}
	void insert_at_end(int data){
		node *newNode = new node(data);

		if (head=nullptr){
			head = newNode;
			tail = head;
		}

		else{
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
		this->length++;
	}
	void deletion_at_end(node *head){
		if (head!=nullptr){
			node *temp = tail;
			tail = temp->prev;
			tail->next=nullptr;
			delete(temp);
			length--;
		}
		else{
			cout<<"\nList is empty\n";
		}
	}	
	void insert_at_pos(int data, int pos){
		node *newNode = new node(data);
		node *temp = head;
		if (head==nullptr){
			head = newNode;
			tail = head;
		}
		else if (pos>this->length) this->insert_at_end(data);

		else if(pos==1||pos==0) this->insert_at_beggining(data);

		else {
			temp = head;
			for (int i = 1; i <pos-1; ++i) temp = temp->next;
			
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
			newNode->next->prev = newNode;
		}
		
		length++;
	}
	void delete_all_node(int data){
		if (this->tail->data == data && length>1){
			node* del1 = tail;
			tail = del1->prev;
			tail->next=nullptr;
			delete(del1);
			length--; 
		}
		int x = length;
		node *temp = head->next;
		for (int i = 0; i < x-2; ++i){
			if (temp->data==data){
				node *del = temp;
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete(del);
				length--;
			}
			else{
				temp = temp->next;
			}
		}
		if (this->head->data == data){
			node* del = head;
			head = del->next;
			head->prev = nullptr;
			delete(del);
			length--;
		}
		if (this->tail->data == data){
			node* del1 = tail;
			tail = del1->prev;
			tail->next=nullptr;
			delete(del1);
			length--; 
		}
	}
	void print_list(node *head){
		if(this->length>0){
			node *temp = head;
			while(temp != nullptr){
				cout << temp->data << "  <->  ";
				temp = temp->next;
			}
			cout << "Null\n\n";
		}
		else cout<<"\nList empty\n\n";
	}
};

int main(){

	dlinked_list *llist = new dlinked_list();
	llist->insert_at_beggining(5);
	llist->insert_at_beggining(1);

	llist->insert_at_beggining(5);

	llist->print_list(llist->head);

	llist->insert_at_pos(99,2);

	llist->print_list(llist->head);

	llist->insert_at_end(44);
	llist->insert_at_end(5);
	llist->print_list(llist->head);

	// llist->deletion_at_end(llist->head);
	// llist->print_list(llist->head);

	// llist->delete_all_node(5);
	// llist->delete_all_node(1);
	// llist->delete_all_node(99);
	// llist->print_list(llist->head);
	// llist->delete_all_node(44);
	// llist->delete_all_node(99);

	llist->print_list(llist->head);

	return 0;
}