//
//  heaps.cpp
//  Lecture 3.5.19
//
//  Created by Jayden Pereira on 3/5/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

//Create stack of chunks

class Chunk {
public:
    int x;
    Chunk *next;
    
    Chunk() {
        x = 0;
        next = NULL;
    }
};

//class called "Stack" which is going to create a stack of Chunks
class Stack {
public:
    Chunk *top; //in stack terminology main pointer is called "top"
    
    Stack() {
        top = NULL;
    }
    
    //three functions that stacks should preform: add, remove, and display
    
    //1: func that adds chunks to our stack (stack terminology is "push")
    void push(int value) {
        //check to see if it's empty
        if(top == NULL) {
            top = new Chunk;
            top -> x = value;
        }
        //stack not empty, knit it into the structure
        else {
            Chunk *temp;
            temp = new Chunk;
            temp -> x = value;
            temp -> next = top;
            top = temp;
        }
    }
    
    //2: function that deletes from stack (stack terminology is "pop")
    void pop() {
        //check if there's something to delete
        if(top == NULL) {
            cout << "Nothing to delete, it's empty already\n";
            return;
        }
        //delete first stack
        else {
            Chunk *temp;
            temp = top;
            top = top -> next;
            cout << "About to delete value: " << temp -> x << endl;
            delete temp;
        }
    }
    
    //3: function displays chunks
    void display() {
        if(top == NULL) {
            cout << "Nothing to see here\n";
        }
        else {
            //loop through values of chunks
            Chunk *temp = top;
            while(temp != NULL) {
                cout << temp -> x << endl;
                temp = temp -> next;
            }
        }
    }
};

int main() {
    
    Stack myStack;
    
    int choice = 0;
    int value;
    while(1) {
        cout << "Press 1 to add\n";
        cout << "Press 2 to delete\n";
        cout << "Press 3 to display\n";
        cin >> choice;
        switch(choice)
        {
            case 1: cout << "Add what?\n";
                    cin >> value;
                    myStack.push(value);
                    break;
           
            case 2: myStack.pop();
                    break;
           
            case 3: myStack.display();
                    break;
        }
    }
    
    return 0;
}
