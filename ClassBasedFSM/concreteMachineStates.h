#pragma once
#include "virtualMachineState.h"

class machineOff : public machineState {
    public:
        void enter(machine* machine){}
        void toggle(machine* machine);
        void exit(machine* machine){}
        static machineState& getInstance();
        const char* name() const override;
    private:
        machineOff(){}
        machineOff(const machineOff& other);
        machineOff& operator=(const machineOff& other);
};

class machineLow : public machineState {
    public:
        void enter(machine* machine){}
        void toggle(machine* machine);
        void exit(machine* machine){}
        static machineState& getInstance();
        const char* name() const override;
    private:
        machineLow(){}
        machineLow(const machineLow& other);
        machineLow& operator=(const machineLow& other);

};

class machineHigh : public machineState {
    public:
        void enter(machine* machine){}
        void toggle(machine* machine);
        void exit(machine* machine){}
        static machineState& getInstance();
        const char* name() const override;
    private:
        machineHigh(){}
        machineHigh(const machineHigh& other);
        machineHigh& operator=(const machineHigh& other);

};

class machineIdle : public machineState {
    public:
        void enter(machine* machine){}
        void toggle(machine* machine);
        void exit(machine* machine){}
        static machineState& getInstance();
        const char* name() const override;
    private:
        machineIdle(){}
        machineIdle(const machineIdle& other);
        machineIdle& operator=(const machineIdle& other);

};