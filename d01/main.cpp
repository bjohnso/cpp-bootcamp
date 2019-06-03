#include <stdio.h>
#include <iostream>
#include <string>

#include "Pony.hpp"

void ponyOnTheHeap(std::string name){
    std::cout << "HEAP" << std::endl; 
    Pony *pony = new Pony(name);
    pony->jump();
    delete pony;
}

void ponyOnTheStack(std::string name){
    std::cout << "STACK" << std::endl;
    Pony pony = Pony(name);
    pony.jump();
}

int main(){

    ponyOnTheHeap("Fred");
    ponyOnTheStack("Cody");

    return 0;
}