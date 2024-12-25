#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int n){
		data=n;
		next=NULL;
	}
};
Node  *insertBegin(Node *head,int n){
	Node *temp=new Node(n);
	temp->next=head;
	return temp;
}
void display(Node *head){
	Node *current=head;
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
}

int main(){
	Node *head=NULL;
	head=insertBegin(head,10);
	head=insertBegin(head,20);
	display(head);
	
	return 0;
}
