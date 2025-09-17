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
    int arr[]={1,2,3,4,5};
    
Node*head=nullptr;
Node*tail=nullptr;
for(int i=0;i<5;i++){
    if(head==nullptr){
head=new Node(arr[i]);
tail=head;
 }
 else{
    
    Node*temp=new Node(arr[i]);
    tail->next=temp;
    temp->prev=tail;
    
    tail=temp;
 }



}
 Node*curr=head;
while(curr){
    cout<<curr->data<<" ";
    curr=curr->next;
};
}


    
