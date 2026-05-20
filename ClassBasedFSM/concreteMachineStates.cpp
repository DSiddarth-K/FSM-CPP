#include "concreteMachineStates.h"
#include "FSM.h"

void machineOff::toggle(machine* machine){
    machine->setState(machineLow::getInstance());
}
machineState& machineOff::getInstance(){
    static machineOff singleton;
    return singleton;
}
const char* machineOff::name() const {
    return "OFF";
}
void machineLow::toggle(machine* machine){
    machine->setState(machineHigh::getInstance());
}
machineState& machineLow::getInstance(){
    static machineLow singleton;
    return singleton;
}
const char* machineLow::name() const {
    return "Low";
}
void machineHigh::toggle(machine* machine){
    machine->setState(machineLow::getInstance());
}
machineState& machineHigh::getInstance(){
    static machineHigh singleton;
    return singleton;
}
const char* machineHigh::name() const {
    return "High";
}
machineState& machineIdle::getInstance(){
    static machineIdle singleton;
    return singleton;
}
void machineIdle::toggle(machine* machine){
    machine->setState(machineLow::getInstance());
}
const char* machineIdle::name() const {
    return "Idle";
}