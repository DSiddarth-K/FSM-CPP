#include "SimpleFSM.h"

machineState state = states[0];

machine::machine(){
};

void machine::toggleMap(){
    this->currentState = machineStateTransitions[this->currentState];
    std::cout << "Toggled to " << static_cast<int>(this->currentState);
    std::cout << ", " << getCurrentState(this->currentState) << std::endl;
};

std::string machine::getCurrentState(machineStateTable state){
    switch(state) {
        case machineStateTable::Off:  return "Off";
        case machineStateTable::Low:  return "Low";
        case machineStateTable::High: return "High";
        case machineStateTable::Idle: return "Idle";
        default: return "Unknown";
        }   
};

void toggle() {
    state = states[(state+1)%states.size()];
    print << "Toggled to " << state;
    std::string str = print.str();
    std::cout << str;
};

int main(){
    machine MachineOne;
    MachineOne.toggleMap();
    MachineOne.toggleMap();
    return 0;
};
