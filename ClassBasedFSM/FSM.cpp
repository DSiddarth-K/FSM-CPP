#include "FSM.h"
#include "concreteMachineStates.h"
#include <iostream>

machine::machine(){
    currentState = &machineOff::getInstance();
}
void machine::printState() const {
    std::cout << "Current state: " << currentState->name() << "\n";
}
void machine::setState(machineState& newState){
    currentState->exit(this);
    currentState = &newState;
    currentState->enter(this);
}

void machine::toggle(){
    currentState->toggle(this);
}

int main(){
    machine m; 
    m.printState();
    m.toggle();
    m.printState();
    m.toggle();
    m.printState();
    m.toggle();
    m.printState();
    m.toggle();
    m.printState();
}