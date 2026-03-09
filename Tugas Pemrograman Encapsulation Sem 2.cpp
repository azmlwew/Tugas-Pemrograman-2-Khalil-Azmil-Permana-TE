#include <iostream>
#include <string>

class Account {
private:
   
    double balance;

public:
    
    Account() {
        balance = 0.0;
    }

    
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
            std::cout << "Berhasil memperbarui saldo." << std::endl;
        } else {
            std::cout << "Kesalahan: Saldo tidak boleh bernilai negatif!" << std::endl;
        }
    }

   
    double getBalance() {
        return balance;
    }
};

int main() {
    Account myAccount;
    std::cout << "--- Program Perbankan Sederhana ---" << std::endl;
    std::cout << "Mencoba set saldo sebesar 500000..." << std::endl;
    myAccount.setBalance(500000);
    std::cout << "Saldo saat ini: Rp" << myAccount.getBalance() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Mencoba set saldo sebesar -10000..." << std::endl;
    myAccount.setBalance(-10000);
    std::cout << "Saldo akhir: Rp" << myAccount.getBalance() << std::endl;

    return 0;
}