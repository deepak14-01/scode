#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node * next;
	node(int data){
		this->data = data;
		this->next = nullptr;
	}	
};

class linked_list{
public:
	node *head;
	node *tail;
	int length = 0;


	linked_list(){		// 👈constructor for head and tail
		this->head = nullptr;
		this->tail = head;
	}

	linked_list(int data){
		node *newNode = new node(data);
		this->head = newNode;
		this->tail = head;
	}

	void insert_at_beggining(int data){
		node *newNode = new node(data);
		if (head==nullptr)
		{
			head = newNode;
			tail = head;
		}

		else{
			newNode->next = head;
			head = newNode;
		}
		length++;
	}

	void insert_at_end(int data){
		node *newNode = new node(data);
		
		if (head!=nullptr){
			tail->next = newNode;
			tail = newNode;
		}

		else{
			head = newNode;
			tail = head;
		}
		length++;
	}

	void insert_at_pos(int data, int pos){
		node *newNode = new node(data);
		if (head==nullptr)
		{
			head = newNode;
			tail = head;
		}
		else if (pos>=this->length) this->insert_at_end(data);

		else if(pos==1||pos==0) this->insert_at_beggining(data);

		else{
			node *temp = head;
			temp = head;
			for (int i = 1; i <pos-1; ++i) temp = temp->next;
			
			newNode->next = temp->next;
			temp->next = newNode;
		}
		
		length++;

	}

	void delete_all_node(int data){
		int x = length;
		node *t1 = head;
		node *t2 = t1->next;				
		for (int i = 1; i < x; ++i){
			if (t2->data == data){
				node *del = t2;
				t2 = t2->next;
				t1->next = t2;
				delete(del);
				length--;
			}
			else{
				t2=t2->next;
				t1=t1->next;
			}
		}
		node *temp = head;
		if (temp->data == data)
		{
			head = head->next;
			delete(temp);
			length--;
		}
	}

	void linear_search(int data){
		if (head == nullptr){
			cout<<"\n\nElement not found since List is empty\n\n";
			return;
		}

		else{
			
		}
	}
};

void printList(node *head){
	node *temp = head;
	while(temp != nullptr){
		cout << temp->data << "  ->  ";
		temp = temp->next;
	}
	cout << "Null\n\n";
}

int main(){

	linked_list *llist = new linked_list();
	
	llist->insert_at_beggining(5);
	llist->insert_at_beggining(1);
	llist->insert_at_beggining(5);
	llist->insert_at_beggining(6);
	llist->insert_at_beggining(5);
	llist->insert_at_beggining(55);
	llist->insert_at_beggining(5);

	llist->insert_at_pos(99,2);

	printList(llist->head);


	llist->delete_all_node(5);
	printList(llist->head);

	llist->delete_all_node(1);

	printList(llist->head);

	return 0;
}