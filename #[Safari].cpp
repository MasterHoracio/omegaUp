#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct nodo{
	string name;
	nodo *sig;
	nodo *ant;
}tNodo, *Nodo;

Nodo top, tail;
int sz = 0;

void push(string name){
	Nodo temp = new tNodo;
	temp->name =  name;
	temp->ant = temp->sig = NULL;

	if(top == NULL){
		top = tail = temp;
	}else{
		tail->sig = temp;
		temp->ant = tail;
		tail = temp;
	}
	
	++sz;
}

string pop(){
	string name;
	Nodo temp = top;
	top = top -> sig;
	name = temp->name;
	delete(temp);
	--sz;
	return name;
}

void printAnimals(){
	Nodo temp = tail;
	int num = 0;
	while(temp != NULL && num != sz){
		cout << temp -> name << endl;
		temp = temp -> ant;
		++num;
	}
}

int main(){
	string op, name, erase;
	int food = 0;
	
	top =  tail = NULL;
	
	while(cin >> op){
		if(op == "N" || op == "C"){
			cin >> name;
		}
		
		if(op == "N"){
			push(name);
		}else if(op == "S"){
			erase = pop();
			cout << erase << endl;
		}else if(op == "C"){
			food += atoi(name.c_str());
		}else if(op == "A"){
			if(food != 0){
				cout << food / sz << endl;
				food = 0;
			}else{
				printAnimals();
				break;
			}
		}else{
			cout << sz << endl;
		}
		
	}
	
	return 0;
}
