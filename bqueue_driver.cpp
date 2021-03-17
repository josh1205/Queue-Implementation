// Name: Joshua Lavieri
// Course: Data Structures

#include <iostream>
#include "bqueue.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    bqueue k;
    k.enqueue(60);
    k.print();
    //cout << "Print 1" << endl;
    
    k.enqueue(20);
    k.enqueue(30);
    k.print();
    //cout << "Print 2" << endl;
    
    k.enqueue(10);
    k.print();
    //cout << "Print 3" << endl;
    k.enqueue(50);
    k.enqueue(40);
    k.print();
    //cout << "Print 4" << endl;

    bqueue j =k;
    j.dequeue();
    j.print();
    //cout << "Print 5" << endl;
    j.dequeue();
    j.dequeue();
    j.dequeue();
    j.print();
    //cout << "Print 6" << endl;
    j.dequeue();
    j.dequeue();
    j.print();
    //cout << "Print 7" << endl;
    j.dequeue();
    j.dequeue();
    //cout << "Print 8" << endl;
        
    
    return 0;
}
