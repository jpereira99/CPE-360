//
//  main.cpp
//  Lecture 2.21.19
//
//  Created by Jayden Pereira on 2/21/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

//new variable of type "cart"
// 1. Attributes: the physical make up of this new varibale
// 2. Contructor: what does this 'thing' look like by default
// 3. Fucntionality: what actions can this actor perform?

class Cart {
public:
  
    //Attributes (can be built in or already made datatypes)
    int numberOfItems;
    float totalPrice;
    
    //Constructor (first time this object gets created)
    // specifically, what are the values of your attributes?
    Cart() {
        numberOfItems = 0;
        totalPrice = 0.0;
    }

    //Functionality
    void addToCart() {
        numberOfItems++;
        cout << "Added an item to the cart\n";
    }
    //... as many other functions as you wanted
    
};


int main() {
    
    // <class> <object>
    Cart myCart; //in the backend as soon as the object is initialized, the constructor gets called
    Cart *pal;
    
    //pal meets myCart
    pal = &myCart;
    
    
    //access attributes and functions using "." operator
    //myCart.numberOfItems = 4;
    myCart.addToCart();
    cout << "Number of items: " << myCart.numberOfItems << endl;
    
    myCart.numberOfItems = 3; //Goes to specific room and changes value
    pal -> numberOfItems = 3; //same as above
    
    return 0;
}
