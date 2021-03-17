
#ifndef bqueue_h
#define bqueue_h

#include <stdio.h>
#include <iostream>
#include <string>

class bqnode
{
public:
    int priority;
    bqnode *prev,*next;
};

class bqueue
{
public:
    bqueue();       //default constructor
    ~bqueue();      //destructor
    bqueue(const bqueue&);      //copy constructor
    void enqueue(int);      //add node
    void dequeue();         //delete node
    void print();       //display list
    
    //My functions
    bool is_Empty() const;
private:
    bqnode *front;//useONLYone pointer
};

#endif /* bqueue_h */
