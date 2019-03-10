//
//  main.cpp
//  Lecture 3.5.19
//
//  Created by Jayden Pereira on 3/5/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

class Chunk {
public:
    int x;
    Chunk *next;
    
    Chunk() {
        x = 0;
        next = NULL;
    }
};

int main() {

    Chunk *head, *helper;
    
    
    //Task 0
    head = new Chunk;
    head -> next = new Chunk;
    head -> next -> next = new Chunk;
    
    
    //Task 1
    helper = new Chunk;
    helper -> next = head;
    head = helper;
    
    
    //Task 2
    helper = head; // get address of chunk you are trying to delete
    head = head -> next;
    delete helper;
    
    
    //Task 3
    helper = new Chunk; // or just head -> next -> next -> next = new Chunk;
    head -> next -> next -> next = helper;
    
    
    //Task 4
    helper = head -> next -> next -> next;
    head -> next -> next -> next = NULL;
    delete helper;
    
    
    //Task 5 ((Position 2 in chain))
    helper = new Chunk;
    helper -> next = head -> next;
    head -> next = helper;
    
    
    //Task 6 ((Position 2 in chain))
    helper = head -> next;
    head -> next = head -> next -> next;
    delete helper;
    
    
    return 0;
}
