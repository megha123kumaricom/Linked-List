/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

// class Solution {
//   public:
//     Node *insertAtPos(Node *head, int p, int x) {
//         // code here
//         //insert at starting
//         if(p<0){
//             if(head==nullptr){
//                 head=new Node(x);
//             }
//             else{
//                 Node*temp=new Node(x);
//                 temp->next=head;
//                 head->prev=temp;
//                 head=temp;
                 
//             }
//             return head;
           
//         }
//             else{
//                 Node*curr=head;
//                 Node*prev=nullptr;
//                 //insertion at end
//                 while(p>0){
//                     curr=curr->next;
//                     p--;
//                 };
//                  Node*temp=new Node(x);
//                 if(curr->next==nullptr){
//                     temp->prev=curr;
//                 curr->next=temp;
                
                
              
//                 }
//                 else{
//                     Node*temp=new Node(x);
                    
//                     temp->prev=curr;
//                     temp->next=curr->next;
//                     curr->next=temp;
//                     temp->next->prev=temp;
                   
//                 }
//                 return head;
               
                
//             }
            
            
            
        
//     }
// };