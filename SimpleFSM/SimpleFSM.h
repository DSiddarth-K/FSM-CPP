#include <array>
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <sstream>

std::ostringstream print;

//Map Method
enum class machineStateTable {
    Off,
    Low,
    High,
    Idle,
};
std::map<machineStateTable,machineStateTable> machineStateTransitions = {
    {machineStateTable::Off,machineStateTable::Low},
    {machineStateTable::Low,machineStateTable::High},
    {machineStateTable::High,machineStateTable::Off},
    //{machineStateTable::Off,machineStateTable::Idle},
    //{machineStateTable::Low,machineStateTable::Idle},
};

//Array Method
enum machineState {
    Off = 0,
    Low = 1,
    High = 2,
    Idle = 3,
};
std::array<machineState,4> states {
    machineState::Off,
    machineState::Low,
    machineState::High,
    machineState::Idle,
};

class machine{
    public:
        machine();
        void toggleMap();
        std::string getCurrentState(machineStateTable state);
    private:
        machineStateTable currentState {machineStateTable::Off};
};