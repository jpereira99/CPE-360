//
//  main.cpp
//  Lecture 2.7.19
//
//  Created by Jayden Pereira on 2/7/19.
//  Copyright © 2019 Jayden Pereira. All rights reserved.
//

#include <iostream>
using namespace std;

void fact(int N) {
    int result = 1;
    for (int i = 1; i <= N; i++) {
        result *= i; //result = result * i
    }
    
    cout << "Brute Force Answer: " << result << endl;
}

int factorial(int N) {
    //recurison funcs have two blocks

    //first: answer to the simplest instance ("Base case" or "anchor value")
    if (N==1)
        return 1;
    else {
        //second block: formally establish repetition of underlying pattern
        //"recursive step"
        // it's reducing the original instance to the base case
        return factorial(N - 1) * N;
    }
}

//////////////////////////////////////////////////

void hanoi(int N,char S,char I, char D){
    
    static int count = 0; //variable is shared between all recursive "boxes" ((Very good interview question))
    //base case
    if(N == 1)
        cout << ++count << " Move disk " << N << " from " << S << " --> " << D << endl;
    else {
        hanoi(N-1, S, D, I);
        cout << ++count << " Move disk " << N << " from " << S << " --> " << D << endl;
        hanoi(N-1, I, S, D);
    }
}



int main() {
    //factorial for a number given
    int x;
    
    cout << "Give me a number\n";
    cin >> x;
    
    fact(x);
    cout << "Recursive Answer: " << factorial(x) << endl;
    
    ///////////////////////////////
    
    //Towers of Hanoi
    int N;
    char S='S', D='D', I='I';
    
    cout << "\nEnter number of disks: \n";
    cin >> N;
    
    hanoi(N,S,I,D);
    
    return 0;
}
