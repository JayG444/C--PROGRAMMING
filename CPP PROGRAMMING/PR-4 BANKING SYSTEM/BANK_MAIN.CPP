#include "BANK.CPP"

// menu
int main()
{
    SavingsAccount savings;
    CheckingAccount checking;
    FixedDepositAccount fixedDeposit;

    savings.setAccountDetails(101, "Nayan Patel", 10000);
    savings.setSavingsDetails(5);
    checking.setAccountDetails(102, "Henil Gabani", 15000);
    checking.setOverdraftLimit(5000);
    fixedDeposit.setAccountDetails(103, "Neha Kakkar", 50000);
    fixedDeposit.setFixedDepositDetails(12, 7);

    BankAccount *account;
    int choice;
    double amount;
    for (;;)
    {

        cout << "1. Savings Account Information" << endl;
        cout << "2. Checking Account Information" << endl;
        cout << "3. Fixed Deposit Information" << endl;
        cout << "4. Deposit in Savings" << endl;
        cout << "5. Withdraw from Savings" << endl;
        cout << "6. Deposit in Checking" << endl;
        cout << "7. Withdraw from Checking" << endl;
        cout << "8. Savings Interest" << endl;
        cout << "9. Fixed Deposit Interest" << endl;
        cout << "10. Check Overdraft" << endl;
        cout << "11. Display All Balances" << endl;
        cout << "12. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            savings.displayAccountInfo();
            break;
        case 2:
            checking.displayAccountInfo();
            break;
        case 3:
            fixedDeposit.displayAccountInfo();
            break;
        case 4:
            cout << "Enter amount: ";
            cin >> amount;
            savings.deposit(amount);
            break;
        case 5:
            cout << "Enter amount: ";
            cin >> amount;
            savings.withdraw(amount);
            break;
        case 6:
            cout << "Enter amount: ";
            cin >> amount;
            checking.deposit(amount);
            break;
        case 7:
            cout << "Enter amount: ";
            cin >> amount;
            checking.withdraw(amount);
            break;
        case 8:
            savings.calculateInterest();
            break;
        case 9:
            fixedDeposit.calculateInterest();
            break;
        case 10:
            checking.checkOverdraft();
            break;
        case 11:
            cout << "Savings Balance : Rs. "
                 << savings.getBalance() << endl;

            cout << "Checking Balance : Rs. "
                 << checking.getBalance() << endl;

            cout << "Fixed Deposit   : Rs. "
                 << fixedDeposit.getBalance() << endl;
            break;
        case 12:
            cout << "Exit." << endl;
            if (choice == 12)
            {
                return 0;
            }

            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
