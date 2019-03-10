//
//  heap.cpp
//  Lecture 2.21.19
//
//  Created by Jayden Pereira on 2/21/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

class Cart {
public:
    int items;
    
    Cart() {
        items = 0;
    }
};

int main() {
    //------------------//
    //    App Space     //
    //------------------//
    Cart myCart;
    myCart.items = 5;
    
    
    //------------------//
    //       Heap       //
    //------------------//
    
    //Step 1: Get a pointer;
    Cart *ptr;
    
    // <pointer> = new <object>
    ptr = new Cart; //"new" --> create a 'box' in the heap of this type
    ptr -> items = 5;
    
    return 1;
}
