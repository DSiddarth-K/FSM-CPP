#pragma once

class machine;

class machineState{
    public:
        virtual void enter(machine* machine) = 0;
        virtual void toggle(machine* machine) = 0;
        virtual void exit(machine* machine) = 0;
        virtual ~machineState(){}
        virtual const char* name() const = 0;
};