//
//  main.cpp
//  Lecture 3.7.19
//
//  Created by Jayden Pereira on 3/7/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

//define what a Chunk is
class Chunk {
public:
    int value;
    Chunk *next;
    
    Chunk() {
        value = 0;
        next = NULL;
    }
};

//class of Queue that creates a queue of chunks
class Queue {
public:
    Chunk *head; //Queue terminology
    
    Queue() {
        head = NULL;
    }
    
    //add to structure ( enqueue )
    //add from beginning
    void enqueue(int x) {
        if(head == NULL) {
            head = new Chunk;
            head -> value = x;
        }
        else {
            Chunk *helper = new Chunk;
            helper -> value = x;
            helper -> next = head;
            head = helper;
        }
    }
    
    //delete from structure ( dequeue )
    void dequeue() {
        if(head == NULL) {
            cout << "Nothing to delete!\n";
        }
        //if there is only one chunk
        else if (head -> next == NULL) {
            cout << "About to delete" << head -> value << endl;
            delete head;
            head = NULL;
        }
        else {
            Chunk *chase, *follow;
            chase = follow = head;
            while(chase -> next != NULL) {
                follow = chase;
                chase = chase -> next;
            }
            follow -> next = NULL;
            cout << "About to delete " << chase -> value << endl;
            delete chase;
        }
    }
    
    //display what's in structure
    void display() {
        if (head == NULL) {
            cout << "Nothing to display!\n";
        }
        else {
            Chunk *temp;
            temp = head;
            while(temp != NULL) {
                cout << temp -> value << endl;
                temp = temp -> next;
            }
        }
    }
};

int main() {
    Queue myQueue;
    
    int choice, value;
    
    while(1) {
        cout << "Press 1 to enqueue\n";
        cout << "Press 2 to dequeue\n";
        cout << "Press 3 to display\n";
        cin >> choice;
        switch(choice)
        {
            case 1: cout << "Add what?\n";
                cin >> value;
                myQueue.enqueue(value);
                break;
                
            case 2: myQueue.dequeue();
                break;
                
            case 3: myQueue.display();
                break;
        }
    }
    
    return 0;
}
