# Escalator - Stack Implementation in C++

## Project Overview

The **Escalator** project is a C++ application that demonstrates the implementation of a **Stack** data structure using an array. The project is designed to help understand object-oriented programming concepts such as **Class & Object, Encapsulation, Inheritance, and Polymorphism**, while performing basic stack operations through a menu-driven program.

## Objectives

* Implement a stack using an array.
* Perform basic stack operations.
* Apply Object-Oriented Programming (OOP) concepts.
* Provide a simple and user-friendly menu-driven interface.

## Features

* Push an element onto the stack.
* Pop the top element from the stack.
* Display the top element without removing it.
* Check whether the stack is empty.
* Check whether the stack is full.
* Display all elements currently stored in the stack.

## OOP Concepts Used

### 1. Class and Object

The project defines a `StackBase` class and a derived `Stack` class. An object of the `Stack` class is created in the `main()` function to perform all stack operations.

### 2. Encapsulation

The stack array and the top index are declared as **private** members. They can only be accessed through public member functions, ensuring data security and controlled access.

### 3. Inheritance

The `Stack` class inherits from the abstract `StackBase` class and implements all of its virtual functions.

### 4. Polymorphism

The base class contains pure virtual functions, and the derived class overrides each function. This demonstrates runtime polymorphism in C++.

## Stack Operations

### Push

Adds a new element to the top of the stack. If the stack is already full, the program displays a **Stack Overflow** message.

### Pop

Removes the top element from the stack. If the stack is empty, the program displays a **Stack Underflow** message.

### Top

Displays the current top element without removing it from the stack.

### isEmpty

Checks whether the stack contains any elements.

### isFull

Checks whether the stack has reached its maximum capacity.

### Display

Prints all elements of the stack from top to bottom.

## Program Flow

1. Display the main menu.
2. Read the user's choice.
3. Perform the selected stack operation.
4. Continue until the user selects the Exit option.

## Advantages

* Easy to understand and implement.
* Demonstrates important OOP concepts.
* Menu-driven interface for better usability.
* Proper handling of stack overflow and underflow conditions.

Project explination Video [ Watch Explanation Video ] 
(https://drive.google.com/file/d/1r4MXGQKwSXXLds08E8G-RdH7JOeu0_qq/view?usp=sharing)
