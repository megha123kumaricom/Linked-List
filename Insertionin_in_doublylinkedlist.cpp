#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev,*next;


    Node(int d){
        data=d;
        prev=nullptr;
next=nullptr;
    }
};



int main(){
    Node*head=nullptr;



    //Insertion at start
    if(head==nullptr){
        head=new Node(5);
    }
    else{
        Node*temp=new Node(5);
        temp->next=head;
        head->prev=temp;
    }
    //Insertion at end
Node*temp=head;
while(temp->next=nullptr){
    temp=temp->next;

};
Node*tail=new Node(8);
temp->next=tail;
tail->prev=temp;


Node*trav=head;
while(trav!=nullptr){
    cout<<trav->data<< " ";
    trav=trav->next;










}
}