//
//  main.cpp
//  Lecture 2.14.19
//
//  Created by Jayden Pereira on 2/14/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

#define MAX 1000 // <---- this label doesnt actually get a box

//pertains to no scope
int globalX; //bad idea

void someFunc() {
    int x,y;
}

int main()
{
    //------------------------------------------------------//
    //             BOX SIZES OF VARIABLE TYPE               //
    //------------------------------------------------------//
    
    //size small --> large
    bool b;
    char c = 'y';
    int f;
    float g;
    //string z;
    
    //------------------------------------------------------//
    //                      ADDRESSES                       //
    //------------------------------------------------------//
    
    //unless variable is specified, the variable will inherit what was the last thing inside the memory box
    int x;
    x=5;
    
    cout << "Value of x: " << x << endl; //compiler will replace x with address and then show value
    cout << "Address of x: " << &x << endl; //add '&' to get address of variable ((first bit of box))
    
    //------------------------------------------------------//
    //                      SUBSCOPES                       //
    //------------------------------------------------------//

    if(x>0) {
        //new scope (subscope of main scope)
        int y = 3;
        cout << "y is: " << y << endl;
    }
    
    //this wont work (outside scope) --> cout << "y outside of if statement" << y << endl;
    
    //------------------------------------------------------//
    //                      POINTERS                        //
    //------------------------------------------------------//


    int j = 5;
    int *pal; //pal does not know x ((can ONLY store addresses, never real values))
    
    //pal meets x, moreso, gets the address x ((modifying pointer does not need *))
    pal = &j;
    
    //changing j
    j = 10;
    cout << "j is now: " << j << endl;
    cout << "pal pays a visit: " << *pal << endl;

    
    //pal can change contents too
    //so heres pal changing the contents
    *pal = 20;
    
    //x comes back home to see whats in it
    cout << "j is now, after pal's visit: " << j << endl;
    
    return 0;
}
