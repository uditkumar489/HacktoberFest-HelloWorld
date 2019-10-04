#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
#include"classNode.cpp"


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

Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */


    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* tail = nullptr;
    Node* head3 = nullptr;
    Node* temp3 = head3;

    while(temp1 != nullptr && temp2 != nullptr)
    {
        if(temp1 -> data >= temp2 -> data)
        {
            Node* newNode = new Node(temp1 -> data);
            if(temp3 == nullptr)
            {
                temp3 = newNode;
                tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
            temp1 = temp1 -> next;
        }
        else 
        {
            Node* newNode = new Node(temp2 -> data);
            if(temp3 == nullptr)
            {
                temp3 = newNode;
                tail = newNode;
            }
            else
            {
                tail -> next = newNode;
                tail = newNode;
            }
            temp2 = temp2 -> next;
        }
    }

    while (temp1 != nullptr)
    {
        Node* newNode = new Node(temp1 -> data);
        tail -> next = newNode;
        tail = newNode ;

        temp1 = temp1 -> next;
    }
    while(temp2 != nullptr)
    {
        Node* newNode = new Node(temp2 -> data);
        tail -> next = newNode;
        tail = newNode ;

        temp2 = temp2 -> next;
    }
    

    return temp3;



}


int main()
{
    
}
