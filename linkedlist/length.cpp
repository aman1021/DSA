#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this -> data = data;
        next = NULL;
    }
};
// taking input the linkedList from user
node * takeinput (){
    int data;
    cin>> data;
    node* head = NULL;
    node* tail = NULL;
    int length =0;
    int ans;
    int c=0;
    while(data!= -1){
        node* newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
           ans = length+=1;
        
        cin>> data;
    }
    cout<< "length = " << ans  <<endl;
    //printing the number at a particular index.
    int i; // taking index which we want to print
    cin>>i;
    node* temp = head;
    int ans2;
    if(i > length){
        cout << " the value of i is greater than length" << endl;
    }
    else{
    while(c < i){
        temp = temp -> next;
        c++;
        ans2 = temp -> data;
    }
    cout<< ans2 <<endl;
    }
    
 return head;
}

/*void print(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}*/

int main(){
    node* head = takeinput();
   // print(head);
}