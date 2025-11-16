# Employee Management System - OOP Assignment

A C++ program demonstrating Object-Oriented Programming concepts for managing employee information at TechSolutions company.

## 📋 Assignment Overview

This project implements a complete employee management system that showcases core OOP principles including:

- Constructor Initializer Lists
- Copy Constructors with Deep Copy
- This Pointer Usage
- Const and Static Members
- Dynamic Memory Allocation
- Object Passing Techniques
- Shallow vs Deep Copy Demonstration

## 🎯 Features

### Class Design
The `Employee` class manages:
- Employee personal data (name, ID, salary)
- Department information (const member)
- Company-wide data (static members)

### Key Implementations

**1. Constructor with Initializer List**
```cpp
Employee(const char* empName, int id, double sal, string dept) 
    : employeeID(id), salary(sal), department(dept)
```

**2. Deep Copy Constructor**
- Allocates new memory for pointer members
- Prevents shared memory between objects
- Ensures data independence

**3. This Pointer**
- Distinguishes parameters from members
- Returns object address for validation

**4. Const Members**
- `department` - immutable after initialization
- Enforces data integrity

**5. Static Members**
- `companyName` - shared company identifier
- `employeeCount` - tracks total employees

**6. Const Functions**
- `displayInfo()` - read-only operations
- Safe for const objects

**7. Static Functions**
- `displayCompanyInfo()` - class-level operations
- Accessible without object instances

## 🚀 Getting Started

### Prerequisites
- C++ compiler (g++, clang++, or MSVC)
- Standard C++ library

### Compilation

```bash
# Using g++
g++ -o employee employee_management.cpp

# Using clang++
clang++ -o employee employee_management.cpp

# With C++11 standard
g++ -std=c++11 -o employee employee_management.cpp
```

### Running the Program

```bash
# On Linux/Mac
./employee

# On Windows
employee.exe
```

## 📊 Program Demonstrations

### 1. Basic Object Creation
Creates employee objects with constructor initialization.

### 2. Dynamic Allocation
Demonstrates heap allocation using `new` and proper cleanup with `delete`.

### 3. Object Passing
- **Pass by Value**: Creates copy, triggers copy constructor
- **Pass by Reference**: Efficient, no copying

### 4. Returning Objects
Function returns employee object demonstrating object lifecycle.

### 5. Deep Copy vs Shallow Copy
- Creates original employee
- Makes deep copy
- Modifies original
- Proves copies are independent

### 6. Static Members
Shows shared data across all employee instances.

### 7. Const Objects
Demonstrates const correctness with read-only operations.

## 🔍 Key Concepts Explained

### Constructor Initializer List
Initializes members before constructor body executes. Required for const members and more efficient than assignment.

### Deep Copy
Allocates new memory for pointer members instead of copying addresses. Prevents:
- Shared memory issues
- Double-free errors
- Dangling pointers

### This Pointer
Implicit pointer to current object. Used for:
- Resolving naming conflicts
- Returning self-reference
- Explicit member access

### Static Members
Single copy shared by all objects. Perfect for class-wide information like company name and employee count.

### Const Correctness
- **Const members**: Cannot change after initialization
- **Const functions**: Promise not to modify object state

## 📁 Project Structure

```
.
├── employee_management.cpp    # Main program file
├── README.md                  # This file
└── DOCUMENTATION.md          # Detailed technical documentation
```

## 💻 Sample Output

```
======================================
   TECHSOLUTIONS EMPLOYEE SYSTEM
======================================

=== Company Information ===
Company: TechSolutions
Total Employees: 0

--- Creating Employees ---
Employee created: Ahmed Khan
Employee created: Sara Ali

--- Employee Details ---
Company: TechSolutions
Name: Ahmed Khan
ID: 101
Department: Engineering
Salary: $50000

...

=== DEEP COPY DEMONSTRATION ===

Original Employee:
Name: Zain Malik
Salary: $58000

After Modification:
Original: Zain Malik (Senior) - $65000
Deep Copy: Zain Malik - $58000 (unchanged)
```

## 🎓 Learning Outcomes

This project demonstrates:

1. **Memory Management**: Proper allocation and deallocation
2. **Object Lifecycle**: Construction, copying, destruction
3. **Encapsulation**: Private data with public interface
4. **Data Integrity**: Const correctness and deep copying
5. **Class-level Data**: Static members and functions

## 📝 Assignment Requirements Met

- ✅ Constructor with initializer list
- ✅ Copy constructor (deep copy)
- ✅ This pointer usage
- ✅ Const members and functions
- ✅ Static members and functions
- ✅ Dynamic object allocation
- ✅ Object passing (value and reference)
- ✅ Returning objects from functions
- ✅ Shallow vs deep copy demonstration

## 🤝 Contributing

This is an academic assignment. For educational purposes only.

## 📄 License

This project is created for educational purposes as part of university coursework.

## 👨‍💻 Author

**Zamad Shakeel**
- University: UCP (University of Central Punjab)
- Course: Object-Oriented Programming
- Assignment: CLO 2 - OOP Concepts Implementation

## 🔗 Related Concepts

- Object-Oriented Programming
- Memory Management in C++
- Copy Semantics
- RAII (Resource Acquisition Is Initialization)
- Rule of Three/Five

---

**Note**: This program is designed to demonstrate OOP concepts clearly. In production code, consider using smart pointers (`std::unique_ptr`, `std::shared_ptr`) instead of raw pointers for automatic memory management.
