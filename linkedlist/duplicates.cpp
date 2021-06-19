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
//removing duplicates from linkedlist

Node* removeduplicates(Node * A){ // A is head
    if(A == NULL){
        return A;
    }
    
    Node* curr;
    Node* temp;
    
    curr = A;
    
    while(curr->next != NULL){
        temp = curr->next;
        while(curr->data == temp->data){
            if(temp->next == NULL){
                curr->next = NULL;
                return A;
            }
            temp = temp->next;
        }
        curr->next = temp;
        curr = temp;
    }
    
    return A;
}
  


void print(Node* head2){
    Node* temp = head2;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main(){
    Node * head = takeinput();
    Node* head2 = removeduplicates(head);
    print(head2);
}