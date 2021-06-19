#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int findNode(Node* head, int number){
    //int i = 0;
    
    if(head == NULL){
        return -1;
    }
    
    else if(head -> data == number){
        return 0;
    }

    int ans = findNode(head -> next, number);
    if(ans == -1){
        return ans;
    }
    else{
        return ans+1;
    }
}

int main(){
    Node* head = takeinput();
    int number;
    cin>> number;
    
    int index = findNode(head,number);
    cout << index << endl;
}