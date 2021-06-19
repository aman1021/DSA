#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data =  data;
        this -> next = NULL;
    }
};
//TAKING THE INPUT FROM USER

Node* takeinput(){
    int data;
    cin>> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
        Node* newnode = new Node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
        cin>> data;
    }
    return head;
}

Node* Reverse(Node *head)
{
    Node *prev   = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL) {
        next = current -> next;  
        current -> next = prev;   
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main(){
    Node* head =  takeinput();
    print(head);
    Node* head2 = Reverse(head);
    print(head2);
}