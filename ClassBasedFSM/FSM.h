#pragma once
#include "virtualMachineState.h"    

class machineState;

class machine{
    public:
        machine();
        inline machineState* getCurrentState() const {return currentState;}
        void toggle();
        void setState(machineState& newState);
        void printState() const;
    private:
        machineState* currentState;
};  

