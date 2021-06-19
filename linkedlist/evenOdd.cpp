#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

node* takeinput(){
    int data;
    cin>> data;
    node * head = NULL;
    node* tail = NULL;
    while(data != -1){
        node *newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
        cin>> data;
    }
    return head;
}

node* oddAfterEven(node * head){
    node* oddHead = NULL;
    node* oddTail = NULL;
    node* evenHead = NULL;
    node* evenTail = NULL;
    node* temp = head;
    while(temp != NULL){
        int val = temp -> data;
        if(val % 2 == 0){
            if(evenHead == NULL){
                evenHead = temp;
                evenTail = temp;
            }
            else{
                evenTail -> next = temp;
                evenTail = temp;
            }
        }
        else{
             if(oddHead == NULL){
                oddHead = temp;
                oddTail = temp;
            }
            else{
                oddTail -> next = temp;
                oddTail = temp;
            }
        }   
     temp = temp -> next;
    }

    if(oddHead == NULL || evenHead == NULL){
        return head;
    }                              //for even after odd
    evenTail ->next = oddHead;    //oddtail -> evenhead;
    oddTail -> next = NULL;      //eventail -> next = null;
                                 //return oddhead;

    return evenHead;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main(){
    node* head = takeinput();
    //print(head);
    head = oddAfterEven(head);
    print(head);

}