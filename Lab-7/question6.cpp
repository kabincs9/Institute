#include <iostream>
#include <iomanip>

class Account {
protected:
    std::string name;
    double balance;
public:
    Account(const std::string& n, double b) : name(n), balance(b) {}
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double calculateInterest() = 0;
    void display() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Balance: " << std::fixed << std::setprecision(2) << balance << "\n";
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;
public:
    SavingsAccount(const std::string& n, double b, double i) : Account(n, b), interestRate(i) {}
    void deposit(double amount) override {
        balance += amount;
    }
    void withdraw(double amount) override {
        if (balance - amount < 0) {
            std::cout << "Insufficient balance\n";
        } else {
            balance -= amount;
        }
    }
    double calculateInterest() override {
        return balance * interestRate / 100;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    CurrentAccount(const std::string& n, double b, double o) : Account(n, b), overdraftLimit(o) {}
    void deposit(double amount) override {
        balance += amount;
    }
    void withdraw(double amount) override {
        if (balance - amount < overdraftLimit) {
            std::cout << "Insufficient balance\n";
        } else {
            balance -= amount;
        }
    }
    double calculateInterest() override {
        return 0.0; // No interest on current accounts
    }
};

int main() {
    SavingsAccount sa("John", 1000, 2.5);
    CurrentAccount ca("Jane", 2000, 500);

    sa.deposit(500);
    sa.withdraw(1500);
    sa.display();

    ca.deposit(1000);
    ca.withdraw(2500);
    ca.display();

    std::cout << "Savings account interest: " << sa.calculateInterest() << "\n";
    std::cout << "Current account interest: " << ca.calculateInterest() << "\n";

    return 0;
}