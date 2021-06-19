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

Node* lastTofirst(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp  != NULL){
        length++;
        temp = temp -> next;
    }
    cout<< "LENGTH = " << length <<endl;
    int n;
    cin>>n;
    temp = head;
   int  count = length - n;
   for(int i = 1; i< count; i++){
       temp = temp -> next;
   }
   
   Node * head2 = temp -> next;
   temp -> next = NULL;
   Node * temp2 = head2;
   Node* tail;
   while(temp2 -> next != NULL){
       temp2 = temp2 -> next;
       Node* tail = temp2;
   }
   tail -> next = head;

   return head2;
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
    Node* head = takeinput();
    print(head);
    Node * head2 = lastTofirst(head);
    print(head2);


}