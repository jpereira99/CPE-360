//
//  main.cpp
//  Lecture 2.26.19
//
//  Created by Jayden Pereira on 2/26/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

//define 'idea' of tab
class Tab {
public:
    int width;
    int height;
    Tab *next;
    
    Tab() {
        width = 40;
        height = 20;
        next = NULL;
    }
};

int main() {
    
    Tab *ptr;
    
    Tab *helper; //helps add 'tabs' in front of other 'tabs'
    
    //first tab gets created
    ptr = new Tab;
    
    //Let's journey into this chunk in the heap using the pointer
    //change width 100, height 60
    ptr -> width = 100;
    ptr -> height = 60;
    
    //new tab connected to the first one
    ptr -> next = new Tab;
    ptr -> next -> width = 140;
    ptr -> next -> height = 40;
    
    //create third box, such that second points to the third
    ptr -> next -> next = new Tab;
    ptr -> next -> next -> width = 180;
    ptr -> next -> next -> height = 100;
    
    //ptr -> next -> next = NULL; ((never do this without thinking (creates memory leak)))
    
    //create a new tab and we'll knit this in and make it the 'first' tab
    helper = new Tab;
    helper -> next = ptr; //ptrA = ptrB :: address in ptrB is copied into ptrA
    ptr = helper;
    
    //to remove a chunk, use 'delete'
    //delete <pointer>;  wont delete pointer, will delete the chunk pointer has address of (still has address but chunk doesnt exist anymore)
   
    helper = ptr; //save address of chunk you want to delete
    ptr = ptr -> next;
    delete helper;
    
    

    return 0;
}
