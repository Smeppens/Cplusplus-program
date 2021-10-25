#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //variables to store input
    float initInv, monDep, AnuInt, months, years;
    //variables year end total amount, interest, and year end interest
    float totalAm, intAmt, yearTotInt;


    
    cout << "********************************" << endl;
    cout << "********** Data Input **********" << endl;
    cout << "Initial Investment Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of years: " << endl;

    
    system("PAUSE");

    //Data from user
    cout << "********************************" << endl;
    cout << "********** Data Input **********" << endl;
    cout << "Initial Investment Amount: $";
    cin >> initInv;
    cout << "Monthly Deposit: $";
    cin >> monDep;
    cout << "Annual Interest: %";
    cin >> AnuInt;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    
    system("PAUSE");

    
    //Amount to be updated to initial investment
    totalAm = initInv;

    
    cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << "==============================================================" << endl;
    cout << setw(2) << "Year" << setw(28) << "Year End Balance" << setw(37) << "Year End Earned Interest Rate" << endl;
    cout << "--------------------------------------------------------------" << endl;
    


    for (int i = 0; i < years; i++) {

        //yearly interest     
        intAmt = (totalAm) * ((AnuInt / 100));

        //year end total
        totalAm = totalAm + intAmt;

        
        //results in table to only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";

    }

    //Amount to be updated to initial investment
    totalAm = initInv;

    
    cout << "Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "==============================================================" << endl;
    cout << setw(2) << "Year" << setw(28) << "Year End Balance" << setw(37) << "Year End Earned Interest Rate" << endl;
    cout << "--------------------------------------------------------------" << endl;
    

    for (int i = 0; i < years; i++) {

        //yearly interest set to 0 
        yearTotInt = 0;

        for (int j = 0; j < 12; j++) {

            //monthly interest
            intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

            //month end interest
            yearTotInt = yearTotInt + intAmt;

            //month end total
            totalAm = totalAm + monDep + intAmt;

        }

        //results in table to only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";


    }
    return 0;
}