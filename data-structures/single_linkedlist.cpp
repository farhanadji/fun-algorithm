#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
} *head;


void insert(int x){
    node *temp = head;
    if(head != NULL){
        while(temp->next!=NULL){
            temp = temp->next;
        }
        node *new_node = new node;
        temp->next = new_node;
        new_node->data = x;
        new_node->next = NULL;
    }else{
        node *new_node = new node;
        new_node->data = x;
        new_node->next = NULL;
        head = new_node;
    }
}

void remove(int x){
    if(head == NULL){
        cout << "Linked List is empty";
        return;
    }else if(head->data == x){
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *temp1 = head;
    node *temp2 = head;
    while(temp1 != NULL && temp1->data != x){
        temp2 = temp1;
        temp1 = temp1->next;
    }

    if(temp1 == NULL){
        cout << "DATA NOT FOUND!";
        return;
    }

    temp2->next = temp1->next;
    delete temp1;
}

void display(){
    node *temp = head;
    if(temp == NULL){
        cout << "No data!";
    }else{
        while(temp != NULL){
            cout << to_string(temp->data) + "\t";
            temp = temp->next;
        }
    }
}

void cls(){
    for(int i=0; i<24; i++){
        cout << endl;
    }
}

void menu(){
    cout << endl << endl;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose [1..2] : ";
}

int main(){
    int choice;
    int x;
    do {
        cls();
        display();
        do {
            menu();
            cin >> choice;
            cin.sync();
            cin.clear();
        } while (choice < 1 || choice > 3);

        switch (choice) {
            case 1:
                cout << "input value : ";
                cin >> x; cin.sync(); cin.clear();
                insert(x);
                break;
            case 2:
                cout << "input value : ";
                cin >> x; cin.sync(); cin.clear();
                remove(x);
                break;
            case 3:
                break;
        }
    }while(choice != 3);
    
    return 0;
}
