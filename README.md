FSM Implementation in C++
-------------------------

Simple FSM Implementation
------------------------


Class Based FSM
------------------------
The machine stores a pointer to the current active object

State class that has the states as objects using polymorphism, which allows for objects to respond to the same method call in their own unique way

Set State takes the address of the object reference which is stored in the current state pointer

The state object accesses the current machine object to transition it into the next state  

Each state is a class
Polymorphism handles transitions
Each state owns its behavior

Very intuitive (maps nicely to “state = object”)
Easy to write per-state logic

Heavy (lots of classes)

Hard to debug at runtime
Poor memory/cache efficiency (relevant in embedded)
Harder to visualize transitions globally

Need easy traceability

Practical Table based FSM 
-------------------------



Key Learnings
-------------------------

References cannot: be NULL

Forward Declaration: tells a compiler that a class function or variable exists before defining 

Virtual class:


machineState* State: pointer to state
machineState& State2: reference to state 
&State2: address of referenced state 
*State: state pointed to by pointer



