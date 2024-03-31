#include <iostream>

using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;

public:
    Employee(const string& empName, double salary) : name(empName), baseSalary(salary) {}

    virtual double calculateSalary() const = 0;
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(const string& empName, double salary) : Employee(empName, salary) {}

    virtual double calculateSalary() const override {
       
        return baseSalary * 1.10;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;

public:
    PartTimeEmployee(const string& empName, double salary, int hours) : Employee(empName, salary), hoursWorked(hours) {}

    virtual double calculateSalary() const override {
       
        return baseSalary * hoursWorked;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const string& empName, double salary, double extraBonus) : Employee(empName, salary), bonus(extraBonus) {}

    virtual double calculateSalary() const override {
      
        return baseSalary + bonus;
    }
};

int main() {
    FullTimeEmployee fullTimeEmp("John Doe", 50000);
    PartTimeEmployee partTimeEmp("Jane Smith", 20, 30);
    Manager managerEmp("Alice Johnson", 70000, 5000);

    cout << "Full-time employee salary: $" << fullTimeEmp.calculateSalary() << endl;
    cout << "Part-time employee salary: $" << partTimeEmp.calculateSalary() << endl;
    cout << "Manager's salary: $" << managerEmp.calculateSalary() << endl;

    return 0;
}

