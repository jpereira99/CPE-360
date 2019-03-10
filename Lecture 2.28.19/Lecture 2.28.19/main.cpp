//
//  main.cpp
//  Lecture 2.28.19
//
//  Created by Jayden Pereira on 2/28/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

class Tab {
public:
    int width;
    int height;
    Tab *next;
    
    Tab() {
        width = 30;
        height = 30;
        next = NULL;
    }
};

int main() {
    
    Tab *head, *helper;
    
    //--TASK 0: CREATE FOUR CHUNKS--
    //first tab created
    head = new Tab;
    //second tab, such that first points to it
    head -> next = new Tab;
    //third
    head -> next -> next = new Tab;
    //fourth
    head -> next -> next -> next = new Tab;
    
    //--TASK 1: DELETE THE LAST CHUNK--
    helper = head -> next -> next -> next;
    delete helper;
    head -> next -> next -> next = NULL;
    
    //--TASK 2: ADD FOURTH CHUNK BACK--
    head -> next -> next -> next = new Tab;
    
    //--TASK 3: DELETE THIRD CHUNK AND ADD BACK FOURTH--
    //helper gets the addr of the third chunk
    helper = head -> next -> next;
    head -> next -> next = head -> next -> next -> next; //or = helper -> next
    delete helper;
    
    //--TASK 4: LETS ADD THAT CHUNK BACK (BETWEEN 2nd AND 3rd)
    //get new tab
    helper = new Tab;
    helper -> next = head -> next -> next;
    head -> next -> next = helper;
    
    
    
    
    return 0;
}
