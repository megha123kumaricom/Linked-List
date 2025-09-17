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

Node*cdll(int arr[],int index,int size,Node*back){

if(index==size){
    return nullptr;
}
Node*temp=new Node(arr[index]);
temp->next=cdll(arr,index+1,size,temp);
return temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    Node*head;
    head=cdll(arr,0,5,nullptr);
     Node*curr=head;
//      if(head!=nullptr){
//     if(head->next==nullptr){
       
//         delete head;
//         head=nullptr;
//     }
//     else{
//         Node*temp=head;
//         while(temp->next!=nullptr){
//             temp=temp->next;
//         };
//         temp->prev->next=nullptr;
//         delete temp;
//     }
//    }
while(curr){
    cout<<curr->data<<" ";
    curr=curr->next;
};
}