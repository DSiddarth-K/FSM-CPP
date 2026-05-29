FSM Implementation in C++
-------------------------
Finite state machines are a model that determines the behaviour of a mechanism using states and transitioning between them using inputs. 


Simple FSM Implementation
------------------------
A simple FSM is implemented by using enums for the states and a map that defines the transitions. This is a deterministic FSM where the map defines one one transition from any state. This FSM can be developed into a non-deterministic implementation by returning multiple possible states from the transition table, and selecting one based on an input.

Class Based FSM
------------------------
In the class based approrach, the states are classes. The state object accesses the current machine object to transition it into the next state  
State class that has the states as objects using polymorphism, allows for objects to respond to the same method call in their own unique way

The machine stores a pointer to the current active object. 
Set State takes the address of the object reference which is stored in the current state pointer

Intuitive (maps nicely to “state = object”)
Easy to write per-state logic
Modular and easy to to add states

Hard to debug at runtime
Poor memory/cache efficiency
Harder to visualize transitions
Bad traceability


Notes
-------------------------
References cannot: be NULL
Forward Declaration: tells a compiler that a class function or variable exists before defining 
Virtual class:

machineState* State: pointer to state
machineState& State2: reference to state 
&State2: address of referenced state 
*State: state pointed to by pointer



