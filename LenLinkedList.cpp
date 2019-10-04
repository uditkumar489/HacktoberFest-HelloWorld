#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
#include"classNode.cpp"


Node* takeInput()
{

    int data;
    cin >> data;
    Node* head = nullptr;
    Node* temp = nullptr;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            
            temp-> next= newNode;
            temp = newNode;
        }
        cin >> data;
    }
    return head;
}


/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/




void reverse(Node* head)
    {
        // Initialize current, previous and
        // next pointers
        Node *current = head;
        Node *prev = NULL, *next = NULL;
 
 
        while (current != NULL)
        {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }




void print(Node* head)
{
    while(head != nullptr)
    {
        cout << head -> data << " " ;
        head = head -> next;
    }
    cout << endl;

}


int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */


    /*
    int len = 0;
    Node* temp = head;
    while(temp != nullptr)
    {
        len++;
        temp = temp -> next;
    }
    return len;
    
*/

    if (head == nullptr || head -> data == -1)
    {
        return 0;
    }
    int smallAns = 1 + length(head->next);
    return smallAns; 


}
int main()
{
    Node* head = takeInput();
    cout << "length is " << endl;
    cout << length(head) << endl;    
    print(head);
    cout << endl;
    reverse(head);
    print(head);

}
