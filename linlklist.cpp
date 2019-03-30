#include <iostream>

using namespace std;

struct link{
	int data;
	link *next;
};

class linkList{
	private:
		link *first;
	public:
		linkList(){
			first = NULL;
		}
		void additem(int d){
			link *newlink = new link;
			newlink->data = d;
			newlink->next = first;
			first = newlink;
		}
		void itemadd(int d){
			if(first != NULL){
				link *current = first;
				while(current->next != NULL){
					current = current->next;
				}				
				link *newlink = new link;
				newlink->data = d;
				newlink->next = current->next;
				current->next = newlink;
			}
			if(first == NULL){
				additem(d);
			}
		}
		void add(int d1, int d2){
			int pr = 0;
			if(first != NULL){
				link *current = first;
				while(current->next != NULL){
					if(current->data == d1){
						link *newlink = new link;
						newlink->data = d2;
						newlink->next = current->next;
						current->next = newlink;
						pr = 1;
						break;
					}
					current = current->next;
				}				
	
			}
			if(first == NULL){
				cout <<"NOT FAUND" << endl;
				pr = 1;
			}
			if(pr == 0){
				cout <<"NOT FAUND" << endl;
			}
		}
		void display(){
			link *current = first;
			while(current){
				cout << current->data << endl;
				current = current->next;
			}
		}
		~linkList(){
			link *current = first;
			while(current){
				link *tmp;
				tmp = current ;
				cout << "Удален: " << current->data << endl;
				current = current->next;
				delete tmp;
			}
		}
			
};

int main(int argc, char *argv[]){
	linkList l1;
	l1.itemadd(25);
	l1.itemadd(36);
	l1.itemadd(49);
	l1.itemadd(64);
	l1.add(36, 47);

	l1.display();

	return 0;
}

