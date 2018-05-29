#include<stdio.h>
#include<iostream>
#include <stdlib.h>

using namespace std;

typedef struct node
{
    int data;
    struct node *next_node;
}Node, *nodeptr;

nodeptr makeNode(int n)
{
    nodeptr np = (nodeptr) malloc(sizeof(Node));
    np->data = n;
    np->next_node = NULL;

    return np;
}

void traverseList(nodeptr start)
{
    cout<<"\nThe output is: ";

    if(start == NULL){
        cout<<"Empty\n";
        return;
    }

    while(start != NULL)
    {
        cout<<start->data<<" ";
        start = start->next_node;
    }
    cout<<endl;
}

void insertionLinkList(int pos, int item, nodeptr start)
{
    nodeptr temp, np = makeNode(item);

    temp = start->next_node;

    for(int i=1; i<=pos; i++)
    {
        temp = temp->next_node;
    }

    np->next_node = temp;
    start->next_node = np;
}

int main()
{
    int n, pos, item;

    nodeptr np, start, current;
    start = NULL;

    cout<<"Enter a number (-1) to finish: \n";

    while(cin>>n)
    {
        if(n == -1)
            break;

        np = makeNode(n);

        if(start == NULL)
            start = np;
        else
            current->next_node = np;
        current = np;
    }

    current = start;

    traverseList(start);

    cout<<"\nEnter the position and Item You want to add: ";
    cin>>pos>>item;

    insertionLinkList(pos, item, start);

    cout<<"\n\nNew Link List is: ";
    traverseList(current);
    cout<<endl<<endl;

    return 0;
}
