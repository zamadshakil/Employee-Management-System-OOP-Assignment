#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;
    const string department;

    static string companyName;
    static int employeeCount;

public:
    Employee(const char* empName, int id, double sal, string dept)
        : name(empName), employeeID(id), salary(sal), department(dept) {
        this->employeeID = id;
        this->salary = sal;
        employeeCount++;
        cout << "Employee created: " << name << endl;
    }

    // Doing Deep Copy
    Employee(const Employee& emp) : name(emp.name), employeeID(emp.employeeID), salary(emp.salary), department(emp.department) {
        cout << "Creating deep copy of: " << emp.name << endl;
        employeeCount++;
    }

    ~Employee() {
        cout << "Destroying employee: " << name << endl;
        employeeCount--;
    }

    void displayInfo() const {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Company: " << companyName << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }

    Employee* getThisPointer() {
        return this;
    }

    void updateSalary(double newSalary) {
        this->salary = newSalary;
    }

    void updateName(const char* newName) {
        name = newName;
    }

    const char* getName() const { return name.c_str(); }
    int getID() const { return employeeID; }
    double getSalary() const { return salary; }

    static void displayCompanyInfo() {
        cout << "\n=== Company Information ===" << endl;
        cout << "Company: " << companyName << endl;
        cout << "Total Employees: " << employeeCount << endl;
    }

    static int getTotalEmployees() {
        return employeeCount;
    }
};

string Employee::companyName = "TechSolutions";
int Employee::employeeCount = 0;

void printEmployeeByValue(Employee emp) {
    cout << "\n[Passed by Value] " << emp.getName() << endl;
}

// Passing object by reference
void printEmployeeByReference(const Employee& emp) {
    cout << "\n[Passed by Reference]" << endl;
    emp.displayInfo();
}

// Returning object from function
Employee createNewEmployee(const char* name, int id, double salary, string dept) {
    Employee newEmp(name, id, salary, dept);
    return newEmp;
}

int main() {
    cout << "======================================" << endl;
    cout << "   TECHSOLUTIONS EMPLOYEE SYSTEM" << endl;
    cout << "======================================\n" << endl;

    Employee::displayCompanyInfo();

    cout << "\n--- Creating Employees ---" << endl;
    Employee emp1("Ahmed Khan", 101, 50000.0, "Engineering");
    Employee emp2("Sara Ali", 102, 55000.0, "Marketing");

    emp1.displayInfo();
    emp2.displayInfo();

    // Dynamic object allocation
    cout << "\n--- Dynamic Allocation ---" << endl;
    Employee* emp3 = new Employee("Fatima Hassan", 103, 60000.0, "Finance");
    emp3->displayInfo();

    // Using this pointer
    cout << "\n--- This Pointer Demo ---" << endl;
    cout << "Address of emp1: " << &emp1 << endl;
    cout << "This pointer: " << emp1.getThisPointer() << endl;

    // Passing objects
    cout << "\n--- Passing Objects ---" << endl;
    printEmployeeByValue(emp1);
    printEmployeeByReference(emp2);

    // Returning object
    cout << "\n--- Returning Object ---" << endl;
    Employee emp4 = createNewEmployee("Ali Raza", 104, 52000.0, "HR");
    emp4.displayInfo();

    // Deep Copy vs Shallow Copy
    cout << "\n======================================" << endl;
    cout << "   DEEP COPY DEMONSTRATION" << endl;
    cout << "======================================" << endl;

    Employee original("Zain Malik", 105, 58000.0, "IT");
    cout << "\nOriginal Employee:" << endl;
    original.displayInfo();

    Employee deepCopy = original;
    cout << "\nDeep Copy Created:" << endl;
    deepCopy.displayInfo();

    cout << "\n--- Modifying Original ---" << endl;
    original.updateName("Zain Malik (Senior)");
    original.updateSalary(65000.0);

    cout << "\nAfter Modification:" << endl;
    cout << "\nOriginal (Modified):" << endl;
    original.displayInfo();

    cout << "\nDeep Copy (Unchanged):" << endl;
    deepCopy.displayInfo();

    cout << "\n** Deep copy has independent memory **" << endl;

    // Static members
    cout << "\n--- Adding New Employee ---" << endl;
    Employee emp5("Ayesha Iqbal", 106, 54000.0, "Operations");
    Employee::displayCompanyInfo();

    // Const function demo
    cout << "\n--- Const Object ---" << endl;
    const Employee constEmp("Hassan Ahmed", 107, 56000.0, "QA");
    constEmp.displayInfo();

    delete emp3;

    cout << "\n--- Final Statistics ---" << endl;
    Employee::displayCompanyInfo();

    cout << "\n======================================" << endl;
    cout << "   PROGRAM COMPLETED" << endl;
    cout << "======================================\n" << endl;

    return 0;
}
