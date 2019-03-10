//
//  main.cpp
//  Lecture 2.5.19
//
//  Created by Jayden Pereira on 2/5/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

// every function has a signature :: this must be unique
// <return-type> <name> <arguments :: stuff the function needs as an input>
void simpleFunction() {
    cout << "This does nothing\n";
}

void add(int x, int y) {
    int result = x + y;
    cout << result << endl;
}

//compiler thinks of this function as one singular integer value
int addThis(int x, int y) {
    return x+y;
}

int main() {
    
    simpleFunction(); //calling
    
    
    int banana = 3;
    int apple = 4;
    add(banana, apple);
    
    
    
    int result = addThis(3, 18);
    
    //I want to add 10,20 and add 40,50 to that answer
    cout << addThis(addThis(10, 20), addThis(40, 50)) << endl; //cimpiler will treat that function call as one integer
    
    
    
    int x = 0;
    
    //You can get away with a variable declared outside the loop declaration
    for( ; x < 10 ; x++) {
        cout << "This still works\n";
    }
    
    return 0;
}
