#include <iostream>
#include <stdio.h>
#include <string>

#include "bqueue.h"

using namespace std;

//Name:: Default constructor
//Pre-condition: front has not been initialized
//Post-condition: front has been initialized
//Description: Initalizes front
bqueue::bqueue()
{
    front = NULL;
}

//Name: Destructor
//Pre-condition: Data has not been erased from queue
//Post-condition: Data has been erased from queue
//Description: Deallocates the data in the queue
bqueue::~bqueue()
{
    cout << "Destructor has been called" << endl;
    while(!is_Empty())
    {
        dequeue();
    }
}

//Name:: Copy Constructor
//Pre-condition: Data has not been copyed into new queue
//Post-condition: Data has been copyed into new queue
//Description: Does a deep copy of the linked queue as I call it
bqueue::bqueue(const bqueue & org)
{
     front = NULL;
    bqnode *p = org.front;
    while(p -> next != org.front)
    {
        enqueue(p -> priority);
         p = p -> next;
    }
    enqueue(p -> priority);
    
    
    
    
    
    
}

//Name: enqueue
//Pre-condition: num has not been added into queue
//Post-condition: num has succesfully been added into queue
//Description: Adds item into the queue
void bqueue::enqueue(int num)
{
    if(is_Empty())
    {
        
        front = new bqnode;
        front -> priority = num;
        front -> next = front -> prev = front;
        
    }
    else
    {
        bqnode * p = new bqnode;
        p -> priority = num;
        p -> prev = front -> prev;
        p -> next = front;
        front -> prev = p;
        p -> prev -> next = p;
    }
}

//Name: dequeue
//Pre-condition: num has not been deleted from queue
//Post-condition: num has succesfully been deleted from queue
//Description: Deletes item from the queue
void bqueue::dequeue()
{
    if(!is_Empty())
    {
        bqnode *p = front;
        if(p != front -> next)
        {
            front -> prev -> next = front -> next;
            front -> next -> prev = front -> prev;
            front = front -> next;
        }
        else
            front = NULL;
        
        delete p;
    }
    else
    {
        cout << "ERROR, the queue is empty" << endl;
    }
}
 
//Name: print
//Pre-condition: queue has not been displayed
//Post-condition: queue has succesfully been displayed onto the screen
//Description: Displays queue to the screen
void bqueue::print()
{
    
    
    bqnode *p = front;
    if(!is_Empty())
    {
        while(p -> next != front)
        {
             cout << p -> priority << endl;
            p = p -> next;
        }
        cout << p -> priority << endl;
    }
    
    
}

//Name: is_Empty
//Pre-condition: front has not been checked whether it is NULL or not
//Post-condition: front has been checked to see whether it is NULL or not
//Description: Checks to see if front is NULL
bool bqueue::is_Empty() const
{
    if(front == NULL)
    {
        return true;
    }
    return false;
}
