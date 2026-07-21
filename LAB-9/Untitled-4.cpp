#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    double balance;
public:
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount ba;
    ba.setBalance(1000);
    cout << "Balance: " << ba.getBalance() << endl;
    return 0;
}