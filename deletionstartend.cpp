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

Node*cdll(int arr[],int index,int size){

if(index==size){
    return nullptr;
}
Node*temp=new Node(arr[index]);
 Node* nextNode = cdll(arr, index + 1, size);

    temp->next = nextNode;
    if (nextNode) nextNode->prev = temp;

return temp;

}
int main(){
    int arr[]={1,2,3,4,5};
    Node*head=nullptr;
    head=cdll(arr,0,5);
    int p=2;
    //deleteion at start
    if(p==0){
    // if(head!=nullptr){
    if(head->next==nullptr){
        delete head;
        head=nullptr;
    }
    else{
        Node*temp=head;
        head=head->next;
        delete temp;
        if(head)
        head->prev=nullptr;
    }
}
   //}}
   //deletion at end
else{
   
   
    
        Node*temp=head;
        while(--p)
            temp=temp->next;
       if(temp->next==nullptr){
        temp->prev->next=nullptr;
        delete temp;
       } 
       else{
        
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
delete temp;
       }
    }

     Node*temp=head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;

};
}


