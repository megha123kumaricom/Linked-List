
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(!head){
            return nullptr;
        }
        Node*temp=head->next;
        Node*prev=head;
        while(temp){
          if(temp->data==prev->data){
              prev->next=temp->next;
              delete temp;
              temp=prev->next;
          } 
          else{
              temp=temp->next;
              prev=prev->next;
          }
          
        };
         return head;
        
    }
};